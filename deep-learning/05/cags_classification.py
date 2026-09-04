#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os

import numpy as np
import timm
import torch
import torchvision.transforms.v2 as v2
import torchmetrics


import npfl138
npfl138.require_version("2526.5")
from npfl138.datasets.cags import CAGS

# TODO: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=128, type=int, help="Batch size.")
parser.add_argument("--epochs", default=20, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")


class CAGS_model(npfl138.TrainableModule):
    def __init__(self, preprocessing, trained_model, train_backbone=False):
        super().__init__()
        self.preprocessing = preprocessing
        self.trained_model = trained_model
        self.train_backbone = train_backbone


        for param in self.trained_model.parameters():
            param.requires_grad = train_backbone

        self.classifier = torch.nn.Sequential(
            torch.nn.LazyLinear(512),  
            torch.nn.LazyBatchNorm1d(),
            torch.nn.Dropout(0.4),
            torch.nn.ReLU(),

            torch.nn.LazyLinear(256),  
            torch.nn.LazyBatchNorm1d(),
            torch.nn.Dropout(0.3),
            torch.nn.ReLU(),

            torch.nn.LazyLinear(128),  
            torch.nn.LazyBatchNorm1d(),
            torch.nn.Dropout(0.3),
            torch.nn.ReLU(),

            torch.nn.LazyLinear(CAGS.LABELS),
            torch.nn.LazyBatchNorm1d(),
        )

    def forward(self, x):
        x = self.preprocessing(x)
        x = self.trained_model(x)
        return self.classifier(x)

    def train(self, mode: bool = True):
        super().train(mode)
        self.trained_model.train(mode and self.train_backbone)
        self.trained_model.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
        return self

class TransformDataset(torch.utils.data.Dataset):
    def __init__(self, dataset, transform):
        self.dataset = dataset      
        self.transform = transform  

    def __len__(self):
        return len(self.dataset)

    def __getitem__(self, idx):
        example = self.dataset[idx]
        if self.transform:
            return self.transform(example["image"]), example["label"]
        return example["image"], example["label"]



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

    # Load the EfficientNetV2-B0 model without the classification layer. For an
    # input image, the model returns a tensor of shape `[batch_size, 1280]`.
    ####efficientnetv2_b0 = timm.create_model("tf_efficientnetv2_b0.in1k", pretrained=True, num_classes=0)
    efficientnetv2_b0 = timm.create_model("tf_efficientnetv2_b0.in1k", pretrained=True, num_classes=0)
    for param in efficientnetv2_b0.parameters():
        param.requires_grad = False

    # Create a simple preprocessing performing necessary normalization.
    preprocessing = v2.Compose([
        v2.ToDtype(torch.float32, scale=True),  # The `scale=True` also rescales the image to [0, 1].
        v2.Normalize(mean=efficientnetv2_b0.pretrained_cfg["mean"], std=efficientnetv2_b0.pretrained_cfg["std"]),
    ])

    # TODO: Create the model and train it.
    

    model = CAGS_model(preprocessing, efficientnetv2_b0)
    
    optimizer = torch.optim.AdamW(model.classifier.parameters(), lr=1e-3, weight_decay=0.05)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.epochs, eta_min=0.0001)
    loss = torch.nn.CrossEntropyLoss(label_smoothing=0.1)
    model.configure(optimizer=optimizer,
                    scheduler=scheduler,
                    loss=loss,
                    metrics={"accuracy": torchmetrics.Accuracy(task="multiclass", num_classes=CAGS.LABELS)})


    augmentation = v2.Compose([
        v2.RandomResizedCrop(224, scale=(0.85, 1.0)),
        v2.RandomHorizontalFlip(p=0.5),  
        v2.ColorJitter(brightness=0.2, contrast=0.2, saturation=0.1, hue=0.05),

        v2.RandomAffine(degrees=10, translate=(0.1, 0.1)),
        v2.GaussianBlur(kernel_size=3, sigma=(0.1, 2.0)),
    ])

    train = torch.utils.data.DataLoader(
        TransformDataset(cags.train, augmentation), 
        batch_size=args.batch_size, shuffle=True,
        num_workers=0,      
        pin_memory=True,   
    )   
    dev = torch.utils.data.DataLoader(
        TransformDataset(cags.dev,None),
        batch_size=args.batch_size, shuffle=False,
        num_workers=0,
        pin_memory=True,
    )
    test = torch.utils.data.DataLoader(
        TransformDataset(cags.test,None),
        batch_size=args.batch_size, shuffle=False,
        num_workers=0,
        pin_memory=True,
    )

    sbw = npfl138.callbacks.SaveBestWeights("./best_model_cags_classification.pt","dev:accuracy","max")
    model.fit(train, epochs=args.epochs, dev=dev, callbacks=[sbw])

    best_weights_path = "./best_model_cags_classification.pt"
    if os.path.exists(best_weights_path):
        model.load_state_dict(torch.load(best_weights_path))
    model.eval()
    # Generate test set annotations, but in `logdir` to allow parallel execution.
    
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "cags_classification.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Perform the prediction on the test data. The line below assumes you have
        # a dataloader `test` where the individual examples are `(image, target)` pairs.
        for prediction in model.predict(test, data_with_labels=True):
            print(prediction.argmax().item(), file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)

