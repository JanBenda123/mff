#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os

import numpy as np
import timm
import torch
import torchvision
import torchvision.transforms.v2 as v2

import npfl138
npfl138.require_version("2526.5")
from npfl138.datasets.cags import CAGS

# TODO: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=128, type=int, help="Batch size.")
parser.add_argument("--epochs", default=5, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")
parser.add_argument("--load",default="./best_model_cags_segmentation.pt", type=str, help="load pretrained model")
# parser.add_argument("--load",default="", type=str, help="load pretrained model")


def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data. The individual examples are dictionaries with the keys:
    # - "image", a `[3, 224, 224]` tensor of `torch.uint8` values in [0-255] range,
    # - "mask", a `[1, 224, 224]` tensor of `torch.float32` values in [0-1] range,
    # - "label", a scalar of the correct class in `range(CAGS.LABELS)`.
    # The `decode_on_demand` argument can be set to `True` to save memory and decode
    # each image only when accessed, but it will most likely slow down training.
    cags = CAGS(decode_on_demand=False)

    class ResBlock(torch.nn.Module):
        def __init__(self, *res_branches: torch.nn.Module, prob:float =0.):
            super().__init__()
            self.res_branches = torch.nn.ModuleList(res_branches)
            self.prob = prob 

        def forward(self, x: torch.Tensor):
            out = x
            for branch in self.res_branches:
                branch_output = branch(x)
                
                out = out + torchvision.ops.stochastic_depth(
                    branch_output, 
                    p=self.prob, 
                    mode="row", 
                    training=self.training
                )
            return out

    class DepthwiseSepBlock(torch.nn.Module):
        def __init__(self, channels: int):
            super().__init__()
            self.block = torch.nn.Sequential(
                torch.nn.BatchNorm2d(channels),
                torch.nn.LeakyReLU(0.1),
                torch.nn.Conv2d(channels, channels, kernel_size=3, padding=1, groups=channels, bias=False),
                torch.nn.BatchNorm2d(channels),
                torch.nn.LeakyReLU(0.1),
                torch.nn.Conv2d(channels, channels, kernel_size=1, bias=False),
            )

        def forward(self, x: torch.Tensor):
            return self.block(x)
        
    class SqueezeExcitationBlock(torch.nn.Module):
        def __init__(self, channels: int, reduction: int = 16):
            super().__init__()
            self.se = torch.nn.Sequential(
                torch.nn.AdaptiveAvgPool2d(1),
                torch.nn.Conv2d(channels, channels // reduction, kernel_size=1),
                torch.nn.ReLU(),
                torch.nn.Conv2d(channels // reduction, channels, kernel_size=1),
                torch.nn.Sigmoid()
            )

        def forward(self, x: torch.Tensor):
            return x * self.se(x)

    class DWSEResBLock(torch.nn.Module):
        def __init__(self,channels:int, p:float = 0.0):
            super().__init__()
            self.block = ResBlock(
                torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
                torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
                prob=p)

        def forward(self, x: torch.Tensor):
            return self.block(x)

    class DecoderBlock(torch.nn.Module):
        def __init__(self, out_channels):
            super().__init__()
            self.channel_matcher = torch.nn.Sequential(
                torch.nn.LazyConv2d(out_channels, 3, padding=1, bias=False),
                # DWSEResBLock(out_channels, 0.1),
            )
            self.block = torch.nn.Sequential(
                torch.nn.LazyBatchNorm2d(),
                torch.nn.LazyConv2d(out_channels, 3, padding=1, bias=False),
                torch.nn.Dropout2d(0.1),
                torch.nn.LazyBatchNorm2d(),
                torch.nn.ReLU(inplace=True),
                torch.nn.Dropout2d(0.1),
                torch.nn.LazyConv2d(out_channels, 3, padding=1, bias=False),
                torch.nn.LazyBatchNorm2d(),
                torch.nn.ReLU(inplace=True),
                torch.nn.Dropout2d(0.1),
                torch.nn.LazyConv2d(out_channels, 3, padding=1, bias=False),
                torch.nn.LazyBatchNorm2d(),
                )
            self.upsampleBlock = torch.nn.Sequential(
                torch.nn.LazyBatchNorm2d(),
                torch.nn.ReLU(inplace=True),
                torch.nn.LazyConvTranspose2d(out_channels, 4, stride=2, padding = 1, bias=False),
                torch.nn.LazyBatchNorm2d(),
                torch.nn.ReLU(inplace=True),
                # torch.nn.Upsample(scale_factor=2, mode='bilinear', align_corners=False)
                )
                
        
        def forward(self, x: torch.Tensor):
            block_out = self.block(x)
            matched_out= self.channel_matcher(x)
            block_out = block_out + matched_out
            return self.upsampleBlock(block_out)

    class CAGSEncDecv2(torch.nn.Module):
        def __init__(self, train_encoder=False):
            super().__init__()
            # Load the EfficientNetV2-B0 model without the classification layer.
            # Apart from calling the model as in the classification task, you can call it using
            #   output, features = efficientnetv2_b0.forward_intermediates(batch_of_images)
            # obtaining (assuming the input images have 224x224 resolution):
            # - `output` is a `[N, 1280, 7, 7]` tensor with the final features before global average pooling,
            # - `features` is a list of intermediate features with resolution 112x112, 56x56, 28x28, 14x14, 7x7.
            self.encoder = timm.create_model("tf_efficientnetv2_b0.in1k", 
                                                pretrained=True, 
                                                num_classes=0
                                                )
            self.train_encoder = train_encoder
            #self.encoder.eval()
            self.decoder1 = torch.nn.Sequential(
                DWSEResBLock(1280,0.),
                DWSEResBLock(1280,0.),
                DWSEResBLock(1280,0.),
                DWSEResBLock(1280,0.),
            )

            self.decoder2 = DecoderBlock(112)

            self.decoder3 = DecoderBlock(48)
            
            self.decoder4 = DecoderBlock(32)

            self.decoder5  = DecoderBlock(16)
            
            self.decoder6 = torch.nn.Sequential(
                DecoderBlock(16),
                torch.nn.LazyConv2d(1, 3, stride=1, padding=1, bias=False),
                torch.nn.LazyBatchNorm2d(),

                torch.nn.Sigmoid()
            )



            # Create a simple preprocessing performing necessary normalization.
            self.preprocessing = v2.Compose([
                v2.ToDtype(torch.float32, scale=True),  # The `scale=True` also rescales the image to [0, 1].
                v2.Normalize(mean=self.encoder.pretrained_cfg["mean"], std=self.encoder.pretrained_cfg["std"]),
            ])
            for param in self.encoder.parameters():
                param.requires_grad = train_encoder
        def train(self, mode: bool = True):
            super().train(mode)
            self.encoder.train(mode and self.train_encoder)
            self.encoder.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
            return self

        def forward(self, x: torch.Tensor) -> torch.Tensor:
            x=self.preprocessing(x)
            # output [bs, 1280, 7, 7]
            # features [0] - [bs, 16, 112, 112], [1] - [bs, 32, 56, 56], [2] - [bs, 48, 28, 28], [3] - [bs, 122, 14, 14], [4] - [bs, 192, 7, 7]
            enc_out, features = self.encoder.forward_intermediates(x)
            out = self.decoder1(enc_out)
            out = torch.cat([out,features[4]],dim=1)
            out = self.decoder2(out)
            out = torch.cat([out,features[3]],dim=1)
            out = self.decoder3(out)
            out = torch.cat([out,features[2]],dim=1)
            out = self.decoder4(out)
            out = torch.cat([out,features[1]],dim=1)
            out = self.decoder5(out)
            out = torch.cat([out,features[0]],dim=1)
            output = self.decoder6(out)
            
            return output




    # TODO: Create the model and train it.
    model = CAGSEncDecv2(True)
    model = npfl138.TrainableModule(model)

    class DiceBCELoss(torch.nn.Module):
        def __init__(self, weight=None, size_average=True):
            super(DiceBCELoss, self).__init__()

        def forward(self, inputs, targets, smooth=1):   
            inputs = inputs.view(-1)
            targets = targets.view(-1)
            
            intersection = (inputs * targets).sum()                            
            dice_loss = 1 - (2.*intersection + smooth)/(inputs.sum() + targets.sum() + smooth)  
            BCE = torch.nn.functional.binary_cross_entropy(inputs, targets, reduction='mean')
            
            return  dice_loss +BCE

    def cags_collate(batch: list) -> tuple:
        collated = torch.utils.data.default_collate(batch)
        return collated["image"], collated["mask"]
    
    train_augmentation = v2.Compose([
        v2.RandomResizedCrop(
            size=(224, 224), 
            scale=(0.95, 1.0), 
            antialias=True
        ),
        v2.RandomHorizontalFlip(p=0.5),
        v2.RandomApply(
            [v2.RandomAffine(degrees=10)],
        p=0.5),
    ])
    
    def cags_collate_transform(batch: list) -> tuple:
        collated = torch.utils.data.default_collate(batch)
        imgs = torchvision.tv_tensors.Image(collated["image"])
        msks = torchvision.tv_tensors.Mask(collated["mask"])
        
        images, masks = train_augmentation(imgs, msks)

        return images, masks

    

    train = torch.utils.data.DataLoader(cags.train, batch_size=args.batch_size, shuffle=True,collate_fn=cags_collate_transform)
    dev = torch.utils.data.DataLoader(cags.dev, batch_size=args.batch_size, collate_fn=cags_collate)
    test = torch.utils.data.DataLoader(cags.test, batch_size=args.batch_size, collate_fn=cags_collate)



    optimizer = torch.optim.AdamW(model.parameters(), lr=5e-5, weight_decay=1e-4)
    scheduler = torch.optim.lr_scheduler.OneCycleLR(
        optimizer,
        max_lr=5e-5,
        steps_per_epoch=len(train),
        epochs=args.epochs,
        pct_start=0.2,     
        anneal_strategy='cos',
        final_div_factor=1000
    )
    model.configure(
        optimizer = optimizer,
        scheduler = scheduler,
        loss=DiceBCELoss(),
        metrics={"IoU": CAGS.MaskIoUMetric()},
        logdir=logdir,
        )




    sbw = npfl138.callbacks.SaveBestWeights("./best_model_cags_segmentation.pt","dev:IoU","max")

    loaded_weights_path = args.load
    if loaded_weights_path != "" and os.path.exists(loaded_weights_path):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")



    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])


    model.eval()

    best_weights_path = "./best_model_cags_segmentation.pt"
    if os.path.exists(best_weights_path):
        model.load_state_dict(torch.load(best_weights_path))

    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "cags_segmentation.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Perform the prediction on the test data. The line below assumes you have
        # a dataloader `test` where the individual examples are `(image, target)` pairs.
        for mask in model.predict(test, data_with_labels=True, as_numpy=True):
            zeros, ones, runs = 0, 0, []
            for pixel in np.reshape(mask >= 0.5, [-1]):
                if pixel:
                    if zeros or (not zeros and not ones):
                        runs.append(zeros)
                        zeros = 0
                    ones += 1
                else:
                    if ones:
                        runs.append(ones)
                        ones = 0
                    zeros += 1
            runs.append(zeros + ones)
            print(*runs, file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
