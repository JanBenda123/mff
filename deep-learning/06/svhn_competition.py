#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os
from itertools import product
from torchvision import tv_tensors

import timm
import torch
import torchvision.transforms.v2 as v2
import torchvision.ops.stochastic_depth

import bboxes_utils

import npfl138
npfl138.require_version("2526.6")
from npfl138.datasets.svhn import SVHN

# TODO: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=16, type=int, help="Batch size.")
parser.add_argument("--epochs", default=00, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")

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
            torch.nn.GroupNorm(1,channels),
            torch.nn.LeakyReLU(0.1),
            torch.nn.Conv2d(channels, channels, kernel_size=3, padding=1, groups=channels, bias=False),
            torch.nn.GroupNorm(1,channels),
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
    # Basic building block of all my NNs
    # a combination of all the good practices for CNNs
    #
    def __init__(self,channels:int, p:float = 0.0):
        super().__init__()
        self.block = ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
            torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
            prob=p)

    def forward(self, x: torch.Tensor):
        return self.block(x)

def anchor_spacing_strategy(ls):
    return 2
# Classifier head - should be robust enough
class Retina_Net(torch.nn.Module):
    def __init__(self,anchor_count:int):
        super().__init__()
        self.anchor_count = anchor_count

        self.first_time = True

        self.bb_net = torch.nn.Sequential(  DWSEResBLock(256,0.1),
                                            torch.nn.LazyConv2d(64, 3, stride=1, padding=1, bias=False), torch.nn.GroupNorm(1, 64),
                                            DWSEResBLock(64,0),
                                            DWSEResBLock(64,0),
                                            torch.nn.LazyConv2d(self.anchor_count*4, 3, stride=1, padding=1, bias=True)
        )

        self.class_net = torch.nn.Sequential(   DWSEResBLock(256,0.1),
                                                torch.nn.LazyConv2d(64, 3, stride=1, padding=1, bias=False), torch.nn.GroupNorm(1, 64),
                                                DWSEResBLock(64,0),
                                                DWSEResBLock(64,0),
                                                torch.nn.LazyConv2d(self.anchor_count*10, 3, stride=1, padding=1, bias=True),
        )

    def forward(self, pyramid_layer : torch.Tensor):

        if self.first_time:
            _, _ =self.class_net(pyramid_layer), self.bb_net(pyramid_layer)
            prob = torch.tensor(0.01)
            bias_init_value = -torch.log((1 - prob) / prob)
            torch.nn.init.constant_(self.class_net[-1].bias, bias_init_value)
            self.first_time = False
        return self.class_net(pyramid_layer), self.bb_net(pyramid_layer)

class BB_Classifier_model(torch.nn.Module):
    def __init__(self,anchor_count:int, layers:int, layer_sizes:list[int]):
        super().__init__()

        self.backbone = timm.create_model("tf_efficientnetv2_b0.in1k", pretrained=True, num_classes=0)
        self.preprocessing = v2.Compose([
            v2.ToDtype(torch.float32, scale=True),  # The `scale=True` also rescales the image to [0, 1].
            v2.Normalize(mean=self.backbone.pretrained_cfg["mean"], std=self.backbone.pretrained_cfg["std"]),
        ])

        self.Classifier = Retina_Net(anchor_count)

        self.train_encoder = False
        self.layers = layers
        self.layer_sizes = layer_sizes
        self.convolutions = torch.nn.ModuleList()

        # Initialize 1x1 convolutions for FPN
        for i in range(self.layers):
            self.convolutions.append(torch.nn.LazyConv2d(256, kernel_size=1, padding=0))
        for param in self.backbone.parameters():
                param.requires_grad = self.train_encoder

    def train(self, mode: bool = True):
        super().train(mode)
        self.backbone.train(mode and self.train_encoder)
        self.backbone.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
        return self

    def forward(self, x: torch.Tensor):
        # returns probabilities of each class and rcnn of the boxes
        x = self.preprocessing(x)
        out, features = self.backbone.forward_intermediates(x)

        # Pyramid init
        pyramid = [self.convolutions[0](out)]
        for i in range(1,self.layers):
            upsampled_layer = torch.nn.Upsample(scale_factor=2, mode='bilinear', align_corners=False)(pyramid[i-1])
            res_connect = self.convolutions[i](features[-(i+1)])
            pyramid.append(upsampled_layer + res_connect)

        # Classifier
        all_anch_bboxes_rcnn = []
        all_anch_classes = []

        for p,ls in zip(pyramid,self.layer_sizes ):
            downsample_factor = anchor_spacing_strategy(ls)
            if downsample_factor > 1:
                p = p[:, :, ::downsample_factor, ::downsample_factor]
            anch_classes ,anch_bboxes_rcnn = self.Classifier(p)

            # [B, Anchors*4, H, W] -> [B, H*W*Anchors, 4]
            anch_bboxes_rcnn = anch_bboxes_rcnn.permute(0, 2, 3, 1).reshape(x.shape[0], -1, 4)
            # [B, Anchors*10, H, W] -> [B, H*W*Anchors, 10]
            anch_classes = anch_classes.permute(0, 2, 3, 1).reshape(x.shape[0], -1, 10)

            all_anch_bboxes_rcnn.append(anch_bboxes_rcnn)
            all_anch_classes.append(anch_classes)

        return torch.cat(all_anch_classes, dim=1), torch.cat(all_anch_bboxes_rcnn, dim=1)

class RetinaLoss(torch.nn.Module):
    def __init__(self, anchors, alpha=0.25, gamma=2.0):
        super().__init__()
        self.anchors = anchors
        self.bb_loss_func = torch.nn.SmoothL1Loss(reduction='mean')

    def forward(self, predictions, targets):
        pred_classes_logits, pred_bboxes_rcnn = predictions
        anchor_classes_id, anchor_bboxes_rcnn = targets

        gt_classes = torch.nn.functional.one_hot(anchor_classes_id, num_classes=11)[..., 1:].float()

        class_loss = torch.nn.functional.binary_cross_entropy_with_logits(
            pred_classes_logits, gt_classes, reduction="mean"
        )

        mask = anchor_classes_id > 0
        num_pos = mask.sum().item()

        if num_pos > 0:
            bb_loss = self.bb_loss_func(pred_bboxes_rcnn[mask], anchor_bboxes_rcnn[mask])
        else:
            bb_loss = torch.tensor(0.0, device=pred_bboxes_rcnn.device)

        total_loss = class_loss  + bb_loss
        return total_loss

class BB_Classifier(torch.nn.Module):
    def __init__(self, anchor_tmplates, layers=4):
        self.anchor_tmplates = anchor_tmplates
        super().__init__()
        self.layers = layers # how many layers should be used
        self.layer_sizes = [7,14,28,56,112][:layers]
        self.model = BB_Classifier_model(len(anchor_tmplates), layers,self.layer_sizes)
        self._anchors = False
        self._anchors_cpu = False

    def get_RetinaLoss(self,alpha=0.25, gamma=2.0):
        return RetinaLoss(self.get_anchors(), alpha, gamma)

    def get_anchors(self, device = "gpu"):
        """
        Generates anchors [A,4] Top, Left, Bottom, Right
        Anchors are normed to 224x224 image size
        """
        if self._anchors is False:
            self._anchors = []
            for ls in self.layer_sizes:
                step_size = 224 / ls
                anch_spacing = anchor_spacing_strategy(ls)
                for y in range(0, ls, anch_spacing):
                    for x in range(0, ls, anch_spacing):
                        for at in self.anchor_tmplates:
                            size = at[0] * step_size
                            ratio_rt = at[1]
                            cy = (y + 0.5) * step_size
                            cx = (x + 0.5) * step_size
                            h = size * ratio_rt
                            w = size / ratio_rt
                            one_anchor = torch.tensor([[cy - h/2, cx - w/2, cy + h/2, cx + w/2]], dtype=torch.float32)
                            self._anchors.append(one_anchor)

            self._anchors = torch.cat(self._anchors, dim=0)
            self._anchors_cpu = self._anchors.to("cpu")
            self._anchors = self._anchors.to(device=self.model.backbone.conv_stem.weight.device)

            print("Generated", len(self._anchors), "anchors.")

        return self._anchors if device == "gpu" else self._anchors_cpu

    def forward(self, inputs, sizes):
        classes, bboxes = self.model(inputs)
        anchors = self.get_anchors()

        absolute_bboxes = bboxes_utils.bboxes_from_rcnn(anchors.unsqueeze(0), bboxes)

        # [B]->[B,1,1] to enable broadcasting
        scale = (sizes / 224.0).view(-1, 1, 1)
        absolute_bboxes = absolute_bboxes * scale

        return classes, absolute_bboxes

def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    device = torch.device("cuda" if torch.cuda.is_available() else "cpu")

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data. The individual examples are dictionaries with the keys:
    # - "image", a `[3, SIZE, SIZE]` tensor of `torch.uint8` values in [0-255] range,
    # - "classes", a `[num_digits]` PyTorch vector with classes of image digits,
    # - "bboxes", a `[num_digits, 4]` PyTorch vector with bounding boxes of image digits.
    # The `decode_on_demand` argument can be set to `True` to save memory and decode
    # each image only when accessed, but it will most likely slow down training.
    svhn = SVHN(decode_on_demand=False)

    a = [(2**0, 2**(1/2)),     # sizes
         (2**0.5,)]          # shapes sqrt(H:W)
    
    anchor_templates = list(product(*a))


    bb = BB_Classifier(anchor_templates, layers=3)
    # TODO: Create the model and train it.
    model = bb.model.to(device)
    model = npfl138.TrainableModule(model)



    class TrainDataset(npfl138.TransformedDataset):
        def __init__(self, dataset, anchors, augment = True, device="cpu"):
            super().__init__(dataset)
            self.anchors = anchors
            self.device = device
            self.augment = augment
            self.augmenter = v2.Compose([
                v2.RandomResizedCrop(size=(224, 224),scale= (0.9,1.0),ratio=(0.8,1.2), antialias=True),
                # v2.Resize((224, 224), antialias=True),
                v2.ColorJitter(brightness=(0.7, 1.3), contrast=(0.7, 1.3),saturation=(0.7, 1.3), hue=(-0.05, 0.05)),
                v2.GaussianBlur(kernel_size=3, sigma=(0.1, 2.0)),
                v2.ToDtype(torch.float32, scale=True),
            ])
            self.resizer = v2.Compose([
                v2.Resize((224, 224), antialias=True),
                v2.ToDtype(torch.float32, scale=True),
            ])

        def transform(self, example):
            img_raw = example["image"]
            c, h, w = img_raw.shape

            # TLBR -> XYXY
            bboxes = example["bboxes"]
            bboxes = bboxes[:, [1, 0, 3, 2]]

            image = tv_tensors.Image(img_raw)
            bboxes = tv_tensors.BoundingBoxes(
                bboxes,
                format=tv_tensors.BoundingBoxFormat.XYXY,
                canvas_size=(h, w)
            )
            aug_img, aug_bboxes = self.augmenter(image, bboxes) if self.augment else self.resizer(image, bboxes)

            gt_bboxes = aug_bboxes.as_subclass(torch.Tensor)[:, [1, 0, 3, 2]]
            gt_classes = example["classes"]

            a_classes, a_bboxes = bboxes_utils.bboxes_training(
                self.anchors, gt_classes, gt_bboxes, 0.5
            )

            return (
                aug_img.as_subclass(torch.Tensor),
                (a_classes, a_bboxes)
            )

    class TestDataset(npfl138.TransformedDataset):
        def __init__(self, dataset, device="cpu"):
            super().__init__(dataset)
            self.device = device
            self.resizer = v2.Compose([
                v2.Resize((224, 224), antialias=True),
                v2.ToDtype(torch.float32, scale=True),
            ])

        def transform(self, example):
            sizes = torch.tensor(float(example["image"].shape[-1]))
            resized_img = self.resizer(example["image"])
            return resized_img, sizes


    train = torch.utils.data.DataLoader(TrainDataset(svhn.train, bb.get_anchors("cpu")), batch_size=args.batch_size,shuffle=True)
    train2 = torch.utils.data.DataLoader(TestDataset(svhn.train), batch_size=args.batch_size)
    dev = torch.utils.data.DataLoader(TrainDataset(svhn.dev, bb.get_anchors("cpu"), augment = False), batch_size=args.batch_size)
    dev2 = torch.utils.data.DataLoader(TestDataset(svhn.dev), batch_size=args.batch_size)

    test = torch.utils.data.DataLoader(TestDataset(svhn.test), batch_size=args.batch_size)

    optimizer = torch.optim.AdamW(model.parameters(), lr=1e-3, weight_decay=0.05)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.epochs*len(train), eta_min=0.0001)
    loss = bb.get_RetinaLoss()
    model.configure(optimizer=optimizer,
                    scheduler=scheduler,
                    loss=loss,
                    )


    def predict(dataset, threshold=0.02):
        predictions = []
        with torch.no_grad():
            for data, sizes in dataset:
                data = data.to(device)
                sizes = sizes.to(device)
                classes_logits, bboxes = bb(data, sizes)
                classes_probs = torch.sigmoid(classes_logits)

                for i in range(data.shape[0]):
                    probs_i = classes_probs[i]
                    bboxes_i = bboxes[i]

                    max_probs, labels = probs_i.max(dim=-1)
                    labels = labels + 1

                    mask = max_probs > threshold
                    filtered_bboxes = bboxes_i[mask]
                    filtered_probs = max_probs[mask]
                    filtered_labels = labels[mask]

                    # TLBR -> LTRB (XYXY) for NMS
                    nms_bboxes = filtered_bboxes[:, [1, 0, 3, 2]]
                    keep_indices = torchvision.ops.batched_nms(
                        nms_bboxes, filtered_probs, filtered_labels, 0.5
                    )

                    r_classes, r_bboxes = [], []
                    for label, bbox in zip(filtered_labels[keep_indices], filtered_bboxes[keep_indices]):
                        r_classes.append(int(label) - 1)
                        r_bboxes.append(list(map(float, bbox)))
                    predictions.append((r_classes, r_bboxes))
        return predictions

    def callback(model, epoch, logs):
        for t in [0.2]:
            predictions = predict(dev2, t)
            logs[f"dev:acc-{t}"] = SVHN.evaluate(svhn.dev, predictions)
    def callback_train(model, epoch, logs):
        for t in [0.2]:
            predictions = predict(train2, t)
            logs[f"train:acc-{t}"] = SVHN.evaluate(svhn.train, predictions)
    sw = npfl138.callbacks.SaveWeights("./last_model_svhn.pt")

    try:
        # model.load_state_dict(torch.load("./last_model_svhn.pt"))
        # print("Weights found. Continuing training")
        pass
    except:
        print("Weights not found")
    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[callback_train,callback,sw])

    bb.eval()


    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "svhn_competition.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Predict the digits and their bounding boxes on the test set.
        # Assume that for a single test image we get
        # - `predicted_classes`: a 1D array with the predicted digits,
        # - `predicted_bboxes`: a [len(predicted_classes), 4] array with bboxes;
        predictions = predict(test, 0.2)
        for classes, bboxes in predictions:
            print(*[r for c, b in zip(classes, bboxes) for r in [c] + b], file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)