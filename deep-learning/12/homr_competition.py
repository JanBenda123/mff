#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os

import torch
import torchvision
import torchaudio.models.decoder
import random

import npfl138
npfl138.require_version("2526.12")
from npfl138.datasets.homr_dataset import HOMRDataset

# TODO: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=16, type=int, help="Batch size.")
parser.add_argument("--epochs", default=0, type=int, help="Number of epochs.")
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
    def __init__(self,channels:int, p:float = 0.0):
        super().__init__()
        self.block = ResBlock(
            torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
            torch.nn.Sequential(DepthwiseSepBlock(channels),SqueezeExcitationBlock(channels)),
            prob=p)

    def forward(self, x: torch.Tensor):
        return self.block(x)


class Model(npfl138.TrainableModule):
    def __init__(self,dataset) -> None:
        super().__init__()
        self.dataset = dataset
        self.hidden_size = 512
        self.encoder = torch.nn.Sequential(
            torch.nn.LazyConv2d(32,kernel_size=3, stride=1, padding=1),         # [BS,32,H=128,W]
            torch.nn.MaxPool2d(kernel_size=(2, 1), stride=(2, 1)),              # [BS,32,H=64,W]

            torch.nn.LazyConv2d(64,kernel_size=3, stride=1, padding=1),         # [BS,64,H=64,W]
            torch.nn.MaxPool2d(kernel_size=2, stride=2),                        # [BS,64,H=32,W/2]

            torch.nn.LazyConv2d(128,kernel_size=3, stride=1, padding=1),        # [BS,128,H=32,W/2]  
            torch.nn.AvgPool2d(kernel_size=2, stride=2),                        # [BS,128,H=16,W/4]

            DWSEResBLock(128,0.2),
            torch.nn.LazyConv2d(256, kernel_size=3, stride=1, padding=1),       # [BS,256,H=16,W/4]
            torch.nn.AvgPool2d(kernel_size=2, stride=2),                         # [BS,256,H=8,W/8]

            DWSEResBLock(256,0.1),
            torch.nn.LazyConv2d(self.hidden_size, kernel_size=3, stride=1, padding=1),       # [BS,HS,H=8,W/4]
            torch.nn.AvgPool2d(kernel_size=2, stride=2),                         # [BS,HS,H=4,W/16]

            DWSEResBLock(self.hidden_size,0),
            DWSEResBLock(self.hidden_size,0),
        )

        self.rnn = torch.nn.GRU(input_size=self.hidden_size, hidden_size=self.hidden_size, num_layers=4,batch_first=True, bidirectional=False, dropout=0.1)
        self.lin1 = torch.nn.LazyLinear(1)
        self.lin2 = torch.nn.LazyLinear(len(dataset.MARKS_VOCAB)+1)

        self.decoder = torchaudio.models.decoder.ctc_decoder(
            lexicon=None,
            tokens=[*dataset.MARK_NAMES, "_"],
            blank_token="_",
            sil_token="_",
            beam_size = 10
        )

        self.loss_fn = torch.nn.CTCLoss(blank=len(HOMRDataset.MARKS_VOCAB), reduction='mean', zero_infinity=True)
        self.predicting = False
        self.decoder_pred = torchaudio.models.decoder.ctc_decoder(
            lexicon=None,
            tokens=[*dataset.MARK_NAMES, "_"],
            blank_token="_",
            sil_token="_",
            beam_size = 50
        )

    def forward(self, x: torch.Tensor, lengths: torch.Tensor) -> torch.Tensor:
        out = self.encoder(x)               # [BS,HS,H=4,W/16]
        out= torch.permute(out, (0,1,3,2))  # [BS,HS,W/16,H=4]
        out = self.lin1(out)                # [BS,HS,W/16,H=1]
        out_t = torch.squeeze(out,dim=-1).permute(0,2,1).contiguous()       # [BS,W/16,HS]

        lengths = torch.floor(lengths/16).to(torch.long)
        l = lengths.cpu()

        out = torch.nn.utils.rnn.pack_padded_sequence(out_t, l, enforce_sorted=False,batch_first=True)
        out, _ = self.rnn(out)
        out, _ = torch.nn.utils.rnn.pad_packed_sequence(out, batch_first=True)
        out = out + out_t

        logits = self.lin2(out)
        return logits, lengths

    def compute_loss(self, y_pred: torch.Tensor, y_true: torch.Tensor, *args) -> torch.Tensor:
        logits, pred_lengths = y_pred
        targets, target_lengths = y_true

        log_probs = torch.nn.functional.log_softmax(logits, dim=-1)
        log_probs = log_probs.transpose(0, 1).contiguous()
        return self.loss_fn(log_probs, targets, pred_lengths, target_lengths)

    def ctc_decoding(self, y_pred: torch.Tensor)-> list[torch.Tensor]:
        logits, lengths = y_pred
        log_probs = torch.nn.functional.log_softmax(logits, dim=-1)
        log_probs = log_probs.contiguous()  # []

        if self.predicting:
            results = self.decoder_pred(log_probs.cpu(), lengths.cpu())
        else:
            results = self.decoder(log_probs.cpu(), lengths.cpu()) 
        decoded = []
        for hyp in results:
            # take the best prediction
            decoded.append(hyp[0].tokens)
        return decoded
    
    def compute_metrics(self, y_pred: torch.Tensor, y_true: torch.Tensor, *args) -> dict[str, torch.Tensor]:
        if not self.training :
            predictions = self.ctc_decoding(y_pred)
            
            y_true_list = [p[:l].tolist() for p,l in zip(y_true[0],y_true[1])]
            preds_list = [p.tolist() for p in predictions]
            self.metrics["edit_distance"].update(preds_list, y_true_list)
        return self.metrics

    def predict_step(self, xs, as_numpy=True):
        with torch.no_grad():
            yield from self.ctc_decoding(self.forward(*xs[0]))



class TrainDataset(npfl138.TransformedDataset):
    def __init__(self, dataset: torch.utils.data.Dataset, should_augment = False) -> None:
        super().__init__(dataset)
        self.should_augment = should_augment


    def transform(self, example):
        image = 1 - example["image"].to(torch.float32) / 255
        # scale to height 128, keep the ratio
        transformed_image = torchvision.transforms.functional.resize(image, size=[128]) # [1, H=128, W]

        new_w = int(transformed_image.shape[-1] * random.uniform(0.9, 1.1))

        if self.should_augment:
            orig_w = transformed_image.shape[-1]
            indices = torch.linspace(0, orig_w - 1, steps=new_w, device=transformed_image.device).long()
            transformed_image = transformed_image[..., indices]
        transformed_image = torch.permute(transformed_image, (2,1,0))  # [W, H=128, 1]       

        target_ids = example["marks"]
        l_marks = len(example["marks"])
        l = transformed_image.shape[0]
        return transformed_image, l, target_ids , l_marks

    def collate(self, batch):
        images,lengths, marks, l_marks = zip(*batch)
        images = torch.nn.utils.rnn.pad_sequence(images, batch_first=True, padding_value = 0) # [BS, W,H=128,1]
        images = torch.permute(images, (0,3,2,1))       # [BS,1,H=128,W]

        lengths = torch.tensor(lengths, dtype=torch.long)

        l_marks = torch.tensor(l_marks, dtype=torch.long)

        marks = torch.nn.utils.rnn.pad_sequence(marks, batch_first=True, padding_value = 0)
        return (images, lengths), (marks, l_marks)


def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data. The individual examples are dictionaries with the keys:
    # - "image", a `[1, HEIGHT, WIDTH]` tensor of `torch.uint8` values in [0-255] range,
    # - "marks", a `[num_marks]` tensor with indices of marks on the image.
    # Using `decode_on_demand=True` loads just the raw dataset (~500MB of undecoded PNG images)
    # and then decodes them on every access. Using `decode_on_demand=False` decodes the images
    # during loading, resulting in much faster access, but requires ~5GB of memory.
    homr = HOMRDataset(decode_on_demand=True)

    # homr.train = torch.utils.data.Subset(homr.train,range(16))
    # homr.dev = torch.utils.data.Subset(homr.dev,range(16*100))
    # homr.test = torch.utils.data.Subset(homr.test,range(16))


    train = TrainDataset(homr.train, should_augment=True).dataloader(batch_size=args.batch_size, shuffle=True)
    dev = TrainDataset(homr.dev).dataloader(batch_size=args.batch_size)
    test = TrainDataset(homr.test).dataloader(batch_size=args.batch_size)

    # TODO: Create the model and train it.
    model = Model(homr)

    optimizer = torch.optim.AdamW(model.parameters(), lr = 1e-3, weight_decay = 1e-4)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max = len(train) * args.epochs)

    model.configure(
        optimizer = optimizer,
        scheduler = scheduler,
        metrics= {"edit_distance": HOMRDataset.EditDistanceMetric(ignore_index=0)},
        logdir=logdir,
    )


    loaded_weights_path = "./best_model_homr.pt"
    
    sbw = npfl138.callbacks.SaveBestWeights(loaded_weights_path,"dev:edit_distance","min")
    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])

    if os.path.exists(loaded_weights_path):
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")

    model.eval()

    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "homr_competition.txt"), "w", encoding="utf-8") as predictions_file:
        # DONE: Predict the sequences of recognized marks.
        predictions = model.predict(test)
        predictions = list(predictions)

        for sequence in predictions:
            print(" ".join(HOMRDataset.MARKS_VOCAB.strings(sequence)), file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
