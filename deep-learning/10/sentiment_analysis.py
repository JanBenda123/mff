#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os
os.environ["TRANSFORMERS_VERBOSITY"] = "error"  # Suppress the LOAD REPORT with weight discrepancies.

import torch
import torchmetrics
import transformers

import npfl138
npfl138.require_version("2526.10")
from npfl138.datasets.text_classification_dataset import TextClassificationDataset

# DONE: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=32, type=int, help="Batch size.")
parser.add_argument("--epochs", default=40, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=43, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")

parser.add_argument("--freeze_eleczech",default=False, action="store_true", help="Whether to freeze the EleCzech parameters during training.")
parser.add_argument("--load_pretrained_local", default=True, type=str, help="Whether to load the pretrained model from a local path instead of Hugging Face Hub.")


class Model(npfl138.TrainableModule):
    def __init__(self, args: argparse.Namespace, eleczech: transformers.PreTrainedModel,
                 dataset: TextClassificationDataset.Dataset) -> None:
        super().__init__()

        # DONE: Define the model. Note that
        # - the dimension of the EleCzech output is `eleczech.config.hidden_size`;
        # - the size of the vocabulary of the output labels is `len(dataset.label_vocab)`.
        self.eleczech = eleczech
        self.freeze_eleczech = args.freeze_eleczech
        
        # input [BS,LEN,256]
        self.rnn = torch.nn.GRU(256, hidden_size=256, num_layers=1, batch_first=True)
        self.linear = torch.nn.Linear(256, 3)




    def train(self, mode: bool = True) -> "Model":
        super().train(mode)
        self.eleczech.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
        self.eleczech.apply(lambda m: isinstance(m, torch.nn.BatchNorm1d) and m.eval())
        if self.freeze_eleczech:
            self.eleczech.eval()
            for param in self.eleczech.parameters():
                param.requires_grad = False
        return self

    def predict_step(self, documents):
        with torch.no_grad():
            logits = self(documents[0])
            ids = logits.argmax(dim=-1)
            for id in ids:
                if id == 0:
                    yield "0"
                elif id == 1:
                    yield "p"
                else:
                    yield "n"

    # DONE: Implement the model computation.
    def forward(self, tokens: torch.Tensor) -> torch.Tensor:
        result = self.eleczech(tokens)
        result = result.last_hidden_state
        result, _ = self.rnn(result)
        result = self.linear(result)
        mask = (tokens != 0).float().unsqueeze(-1)
        result = (result * mask).sum(dim=1) / mask.sum(dim=1)
        return result

class TrainableDataset(npfl138.TransformedDataset):
    def __init__(self, dataset: TextClassificationDataset.Dataset, tokenizer: transformers.PreTrainedTokenizer) -> None:
        super().__init__(dataset)
        self.tokenizer = tokenizer
        self.map = dict()
        self.map['n'] = 2
        self.map['p'] = 1
        self.map['0'] = 0
        self.map[''] = -1

    def transform(self, example):
        # DONE: Process single examples containing `example["document"]` and `example["label"]`.
        return example["document"], self.map[example["label"]]

    def collate(self, batch):
        # DONE: Construct a single batch using a list of examples from the `transform` function.
        documents, labels = zip(*batch)

        documents = self.tokenizer(documents, padding=True, return_tensors="pt").input_ids
        documents = torch.as_tensor(documents)

        labels = torch.as_tensor(labels)

        return documents, labels


def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the Electra Czech small lowercased.
    tokenizer = transformers.AutoTokenizer.from_pretrained("ufal/eleczech-lc-small")
    eleczech = transformers.AutoModel.from_pretrained("ufal/eleczech-lc-small")

    # Load the data.
    facebook = TextClassificationDataset("czech_facebook")

    # DONE: Prepare the data for training.
    train = TrainableDataset(facebook.train, tokenizer).dataloader(batch_size=args.batch_size, shuffle=True)
    dev = TrainableDataset(facebook.dev,tokenizer).dataloader(batch_size=args.batch_size)
    test = TrainableDataset(facebook.test,tokenizer).dataloader(batch_size=args.batch_size)

    # Create the model.
    model = Model(args, eleczech, facebook.train)

    # DONE: Configure and train the model
    optimizer = torch.optim.Adam(model.parameters(),lr=1e-5, weight_decay=0.0 )
    model.configure(
        optimizer=optimizer,
        loss=torch.nn.CrossEntropyLoss(),
        metrics={"accuracy": torchmetrics.Accuracy(task="multiclass", num_classes=3)},
        scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer,T_max=args.epochs*len(train), eta_min=(1e-7)),
        logdir=npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args)),
    )



    sbw = npfl138.callbacks.SaveBestWeights("./best_model_sentiment_analysis.pt","dev:accuracy","max")

    loaded_weights_path = "./best_model_sentiment_analysis.pt"
    if args.load_pretrained_local and os.path.exists(loaded_weights_path):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")

    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])

    loaded_weights_path = "./best_model_sentiment_analysis.pt"
    if args.load_pretrained_local and os.path.exists(loaded_weights_path):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")

    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "sentiment_analysis.txt"), "w", encoding="utf-8") as predictions_file:
        # DONE: Predict the tags on the test set.
        predictions = model.predict(test)

        for p in predictions:
            print(p, file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
