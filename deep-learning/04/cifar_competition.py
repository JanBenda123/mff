#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os

import numpy as np
import torch
import torchmetrics
import torchvision


import npfl138
npfl138.require_version("2526.4")
from npfl138.datasets.cifar10 import CIFAR10

# DONE: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=2048, type=int, help="Batch size.")
parser.add_argument("--epochs", default=10, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
parser.add_argument("--load",default="./best_model.pt", type=str, help="load pretrained model")


print(f"Available GPUs: {torch.cuda.device_count()}")
for i in range(torch.cuda.device_count()):
    print(f"GPU {i}: {torch.cuda.get_device_name(i)}")

def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads, args.recodex)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data.
    cifar = CIFAR10()
        
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
        
    class SqueezeExcitationblock(torch.nn.Module):
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
    
    
    # DONE: Create the model and train it.
    entry_channels = 32
    model = npfl138.TrainableModule(torch.nn.Sequential(                              
        torch.nn.LazyConv2d(entry_channels, 3, stride=1, padding = 1, bias=False),   #32x32
        ResBlock(torch.nn.Sequential(
            DepthwiseSepBlock(entry_channels), SqueezeExcitationblock(entry_channels)
        )),
        ResBlock(torch.nn.Sequential(
            DepthwiseSepBlock(entry_channels), SqueezeExcitationblock(entry_channels)
        )),
        torchvision.ops.DropBlock2d(p=0.000,block_size=5),
        torch.nn.LazyConv2d(2*entry_channels, 3, stride=2, padding = 1, bias=False),   #16x16
        torch.nn.LazyBatchNorm2d(),
        torch.nn.LeakyReLU(0.1),


        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(2*entry_channels), SqueezeExcitationblock(2*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(2*entry_channels), SqueezeExcitationblock(2*entry_channels)),
            prob = 0.1
        ), 
        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(2*entry_channels), SqueezeExcitationblock(2*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(2*entry_channels), SqueezeExcitationblock(2*entry_channels)),
            prob = 0.1
        ),   
        torch.nn.LazyConv2d(4*entry_channels, 3, stride=2, padding = 1, bias=False),   #8x8
        torch.nn.LazyBatchNorm2d(),
        torch.nn.LeakyReLU(0.1),


        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            prob = 0.2
        ), 
        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),

            prob = 0.2
        ),
        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            prob = 0.2
        ), 
        ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            torch.nn.Sequential(DepthwiseSepBlock(4*entry_channels), SqueezeExcitationblock(4*entry_channels)),
            prob = 0.2
        ),
        torch.nn.LazyBatchNorm2d(),
        torch.nn.LeakyReLU(0.1),


        torch.nn.AdaptiveAvgPool2d(1),
        torch.nn.Flatten(),
        torch.nn.LazyBatchNorm1d(),
        torch.nn.ReLU(),
        torch.nn.LazyLinear(CIFAR10.LABELS)   
    ))


    optimizer = torch.optim.AdamW(model.parameters(), lr=0.0001, weight_decay=0.01)


    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.epochs, eta_min=1e-6)
    model.configure(
        optimizer = optimizer,
        scheduler = scheduler,
        loss=torch.nn.CrossEntropyLoss(),
        metrics={"accuracy": torchmetrics.Accuracy("multiclass", num_classes = CIFAR10.LABELS)},
        logdir=logdir,
        )
    
    train_transformations = torchvision.transforms.Compose([
        torchvision.transforms.RandomHorizontalFlip(p=0.0),
        torchvision.transforms.RandomApply([
            torchvision.transforms.RandomAffine(degrees=15, translate=(0.1, 0.1), shear=10)], 
        p=0.0),
        torchvision.transforms.RandomApply([
            torchvision.transforms.ColorJitter(0.4, 0.4, 0.4, 0.1)], p=0.0),
        torchvision.transforms.RandomErasing(p=0.0, scale=(0.02, 0.2), ratio=(0.3, 3.3), value=0), # Cutout
    ])

    class TrainDataset(npfl138.TransformedDataset):
        def transform(self, example):
            img = example["image"].to(torch.float32) / 255
            img = train_transformations(img)
            return img, example["label"]

    class EvalDataset(npfl138.TransformedDataset):
        def transform(self, example):
            return example["image"].to(torch.float32) / 255, example["label"]


    train = torch.utils.data.DataLoader(TrainDataset(cifar.train), batch_size=args.batch_size, shuffle=True)
    dev = torch.utils.data.DataLoader(EvalDataset(cifar.dev), batch_size=args.batch_size)
    test = torch.utils.data.DataLoader(EvalDataset(cifar.test), batch_size=args.batch_size)

    sbw = npfl138.callbacks.SaveBestWeights("./best_model.pt","dev:accuracy","max","./best_model_opt.ptl")

    loaded_weights_path = args.load
    if loaded_weights_path != "" and os.path.exists(loaded_weights_path) and os.path.exists(loaded_weights_path[:-3]+"_opt.ptl"):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")
        


    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])

    model.eval()



    best_weights_path = "./best_model.pt"
    if os.path.exists(best_weights_path):
        model.load_state_dict(torch.load(best_weights_path))
    

    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "cifar_competition_test.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Perform the prediction on the test data. The line below assumes you have
        # a dataloader `test` where the individual examples are `(image, target)` pairs.
        with torch.no_grad():
            for images, _ in test:
                
                images = images.to(model.device)
                output = model(images)
                predictions = torch.argmax(output, dim=1)
                
                for p in predictions:
                    print(p.item(), file=predictions_file)



if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
