#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os

import torch
import torchmetrics
import random
import torchvision.transforms.v2 as v2

import npfl138
import render_3d
import timm

npfl138.require_version("2526.11")
from npfl138.datasets.modelnet import ModelNet

# TODO: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=128, type=int, help="Batch size.")
parser.add_argument("--epochs", default=20, type=int, help="Number of epochs.")
parser.add_argument("--modelnet", default=32, type=int, help="ModelNet dimension.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")



class Model1(npfl138.TrainableModule):
    def __init__(self, args, ) -> None:
        super().__init__()
        self.args = args
        self.train_backbone = True
        self.effnet = timm.create_model("tf_efficientnetv2_b0.in1k", 
                                                pretrained=True, 
                                                num_classes=0
                                                )
        self.preprocess = v2.Normalize(
            mean=self.effnet.pretrained_cfg["mean"],
            std=self.effnet.pretrained_cfg["std"],
        )
        self.classifier = torch.nn.Sequential(
            torch.nn.LazyLinear(512),
            torch.nn.LazyBatchNorm1d(),
            torch.nn.Dropout(0.3),
            torch.nn.ReLU(),

            torch.nn.LazyLinear(256),
            torch.nn.LazyBatchNorm1d(),
            torch.nn.Dropout(0.2),
            torch.nn.ReLU(),

            torch.nn.LazyLinear(10),
        )
        for param in self.effnet.parameters():
            param.requires_grad = self.train_backbone

    def forward(self, pictures: torch.Tensor):
        enc_out=self.effnet(pictures)
        out = self.classifier(enc_out)
        return out

    def train_step(self, xs, ys):
        return super().train_step(xs, ys)

    def train(self, mode: bool = True):
        super().train(mode)
        self.effnet.train(mode and self.train_backbone)
        self.effnet.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
        return self

    def test_step(self, xs, y):
        with torch.no_grad():
            logits = []
            for i in range(xs[0].shape[0]):
                grid = xs[0][i]

                pictures = []
                for j in range(32):
                    picture = render_3d.render_voxel_efficient(grid)
                    picture = self.preprocess(picture)
                    pictures.append(picture)
                pictures = torch.stack(pictures)
                out = self.forward(pictures)
                
                out = out.mean(dim=0)
                # out = out.amax(dim=0)
                logits.append(out)
            logits = torch.stack(logits)

            self.track_loss(self.compute_loss(logits, y, *xs))
            metrics = self.compute_metrics(logits, y, *xs)
            return {**self.losses, **metrics}

    def predict_step(self, xs, as_numpy=True):
        with torch.no_grad():
            logits = []
            for i in range(xs[0].shape[0]):
                grid = xs[0][i]

                pictures = []
                for j in range(32):
                    picture = render_3d.render_voxel_efficient(grid)
                    picture = self.preprocess(picture)
                    pictures.append(picture)
                pictures = torch.stack(pictures)
                out = self.forward(pictures)
                out = out.mean(dim=0)
                # out = out.amax(dim=0)
                logits.append(out)
            logits = torch.stack(logits)
            return logits
                






class TrainDataset(npfl138.TransformedDataset):
    def __init__(self, dataset: torch.utils.data.Dataset, preprocess, should_augment = False) -> None:
        # dataset.data["grids"] = dataset.data["grids"][:32,...]
        # dataset.data["labels"] = dataset.data["labels"][:32,...]
        super().__init__(dataset)
        self.should_augment = should_augment
        self.preprocess = preprocess

    def transform(self, example):
        grid = example["grid"].float()
        label = example["label"]
        if self.should_augment:
            if random.random() < 0.5:
                grid = grid.flip(1)

        # normalize using EfficientNet pretrained config
        picture = render_3d.render_voxel_efficient(grid)
        picture = self.preprocess(picture)
        return picture, label

    def collate(self, batch):
        picture, labels = zip(*batch)
        return torch.stack(picture), torch.as_tensor(labels)
    
class PredictDataset(npfl138.TransformedDataset):
    def __init__(self, dataset: torch.utils.data.Dataset, should_augment = False) -> None:
        super().__init__(dataset)
        self.should_augment = should_augment

    def transform(self, example):
        grid = example["grid"].float()
        label = example["label"]
        return grid, label

    def collate(self, batch):
        grid, labels = zip(*batch)
        return torch.stack(grid), torch.as_tensor(labels)


def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data.
    modelnet = ModelNet(args.modelnet)

    # DONE: Create the model and train it
    model = Model1(args)



    train = TrainDataset(modelnet.train, preprocess=model.preprocess, should_augment=True).dataloader(batch_size=args.batch_size, shuffle=True)
    dev = PredictDataset(modelnet.dev).dataloader(batch_size=args.batch_size)
    test = PredictDataset(modelnet.test).dataloader(batch_size=args.batch_size)



    optimizer = torch.optim.Adam(model.parameters(), lr=0.0001, weight_decay=0e-2)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=len(train)*args.epochs,)

    model.configure(
        optimizer=optimizer,
        scheduler=scheduler,
        loss = torch.nn.CrossEntropyLoss(),
        metrics={"accuracy": torchmetrics.Accuracy("multiclass", num_classes=10)},
        logdir=logdir,
    )

    loaded_weights_path = "./best_model_3D_recognition.pt"
    if os.path.exists(loaded_weights_path):
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")

    
    sbw = npfl138.callbacks.SaveBestWeights(loaded_weights_path,"dev:accuracy","max")


    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])

    if os.path.exists(loaded_weights_path):
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")


    model.eval()


    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "3d_recognition.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Perform the prediction on the test data. The line below assumes you have
        # a dataloader `test` where the individual examples are `(grid, target)` pairs.
        for prediction in model.predict(test, data_with_labels=True):
            print(prediction.argmax().item(), file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
