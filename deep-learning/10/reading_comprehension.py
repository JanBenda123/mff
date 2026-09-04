#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse
import os
from types import SimpleNamespace
os.environ["TRANSFORMERS_VERBOSITY"] = "error"  # Suppress the LOAD REPORT with weight discrepancies.

import torch
import torchmetrics
import transformers

import npfl138
npfl138.require_version("2526.10")
from npfl138.datasets.reading_comprehension_dataset import ReadingComprehensionDataset

finetune = True
cfg = SimpleNamespace()
if finetune:
    cfg.learning_rate = 5e-5
    cfg.weight_decay = 0.0
    cfg.epochs = 5
    cfg.freeze = False
    cfg.load_pretrained_local = True
    cfg.batch_size = 8
else:
    cfg.learning_rate = 5e-4
    cfg.epochs =20
    cfg.weight_decay = 0.0
    cfg.freeze = True
    cfg.load_pretrained_local = False
    cfg.batch_size = 4

# DONE: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=cfg.batch_size, type=int, help="Batch size.")
parser.add_argument("--epochs", default=0, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")

debug = False





class Model(npfl138.TrainableModule):
    def __init__(self, module = None, rob=None, tokenizer = None):
        super().__init__(module)
        # DONE: Define the model
        self.hidden_size = 256
        self.tokenizer = tokenizer
        self.loss_fn = torch.nn.CrossEntropyLoss(ignore_index=-100)

        self.rob = rob
        self.linear1 = torch.nn.Linear(768, self.hidden_size)
        self.rnn = torch.nn.GRU(self.hidden_size, hidden_size=self.hidden_size, num_layers=5, batch_first=True,bidirectional =True, dropout=0.3)
        self.linear2 = torch.nn.Linear(2*self.hidden_size, 2)




    def forward(self, tokens, attention_mask, context_token_count ) -> torch.Tensor:
        # DONE: Implement the model
        if debug:
            tokens = tokens[0:2,:]
            attention_mask = attention_mask[0:2,:]
            context_token_count = context_token_count[0:2]
        if tokens.shape[1] > 512:
            print(f"Batch too big: {tokens.shape[1]},RoBERTa: Goodnight, we perish.")
        results = self.rob(tokens, attention_mask=attention_mask).last_hidden_state # [increased BS, max LEN, 768]
        results = self.linear1(results) # [increased BS, max LEN, hidden_size]
        results, _ = self.rnn(results) # [increased BS, max LEN, 2*hidden_size]
        results = self.linear2(results) # [increased BS, max LEN, 2]

        # Mask out question tokens and other non-context positions.
        indices = torch.arange(results.shape[1], device=results.device)
        mask = indices >= context_token_count[:,None]
        results = torch.where(mask[..., None], torch.tensor(float('-inf'), device=results.device), results)
        return results
    
    def train(self, mode: bool = True) -> "Model":
        super().train(mode)
        self.rob.apply(lambda m: isinstance(m, torch.nn.BatchNorm2d) and m.eval())
        self.rob.apply(lambda m: isinstance(m, torch.nn.BatchNorm1d) and m.eval())
        if cfg.freeze:
            self.rob.eval()
            for param in self.rob.parameters():
                param.requires_grad = False
        return self

    def predict_step(self, xs):
        tokens, attention_mask, _ = xs
        with torch.no_grad():
            logits = self(tokens, attention_mask, _)
            start_indices = torch.argmax(logits[:, :, 0], dim=1)
            end_indices = torch.argmax(logits[:, :, 1], dim=1)

            for i in range(len(start_indices)):
                start = start_indices[i]
                end = end_indices[i]
                end = max(end, start)
                t = tokens[i, start:end+1]
                ans = self.tokenizer.decode(t, skip_special_tokens=True).strip()
                yield ans
                

        
    def compute_loss(self, y_pred: torch.Tensor, y_true: torch.Tensor, *args) -> torch.Tensor:
        # DONE: Compute the loss
        if debug:
            y_true = y_true[0:2,:]
        begin = y_pred[:, :, 0]
        end = y_pred[:, :, 1]
        loss = self.loss_fn(begin, y_true[:, 0]) + self.loss_fn(end, y_true[:, 1])
        return loss

class TwoAxisAccuracy(torch.nn.Module):
    def __init__(self):
        super().__init__()
        self.register_buffer("correct", torch.tensor(0))
        self.register_buffer("total", torch.tensor(0))

    def update(self, y_pred, y_true):
        if debug:
            y_true = y_true[0:2,:]
        beg_pred = torch.argmax(y_pred[:,:,0], dim=1)
        end_pred = torch.argmax(y_pred[:,:,1], dim=1)

        correct_pred = (beg_pred == y_true[:,0]) & (end_pred == y_true[:,1])

        self.correct += correct_pred.sum()
        self.total += correct_pred.numel()

    def compute(self):
        return self.correct.float() / self.total if self.total > 0 else torch.tensor(0.0)

    def reset(self):
        self.correct.zero_()
        self.total.zero_()
        
    def forward(self, preds, targets):
        self.update(preds, targets)
        return self.compute()

class TrainableDataset(npfl138.TransformedDataset):
    def __init__(self, dataset: ReadingComprehensionDataset.Dataset, tokenizer: transformers.PreTrainedTokenizer, pred: bool = False) -> None:
        super().__init__(dataset)
        self.tokenizer = tokenizer
        self.pred = pred


    def transform_train(self, example):
        # DONE: Process single examples
        context = example["context"]
        qas = example["qas"]

        # tokenize pair to get offsets and context/question boundaries
        context_list, question_list, context_token_count_lis, token_start_lis, token_end_lis = [], [], [], [], []
        for qa in qas:
            question = qa["question"]
            answer = qa["answers"]
            start = answer[0]["start"]
            end = start + len(answer[0]["text"])

            encoded = self.tokenizer(context, question, return_offsets_mapping=True, truncation=True, max_length=512)
            offsets = encoded["offset_mapping"]
            sequence_ids = encoded.sequence_ids()

            token_start, token_end = -100, -100
            last_context_idx = -1
            for i, seq_id in enumerate(sequence_ids):
                if seq_id == 0:
                    last_context_idx = i
            if last_context_idx == -1:
                context_token_count = 0
            else:
                context_token_count = last_context_idx + 1

            for i, (offset, seq_id) in enumerate(zip(offsets, sequence_ids)):
                if seq_id != 0:
                    continue
                if offset[0] <= start < offset[1]:
                    token_start = i
                if offset[0] < end <= offset[1]:
                    token_end = i

            if token_start == -100 or token_end == -100 or token_end < token_start:
                token_start, token_end = -100, -100

            context_list.append(context)
            question_list.append(question)
            context_token_count_lis.append(context_token_count)
            token_start_lis.append(token_start)
            token_end_lis.append(token_end)

        return context_list, question_list, context_token_count_lis, token_start_lis, token_end_lis

    def transform_pred(self, example):
        # DONE: Process single examples
        context = example["context"]
        qas = example["qas"]

        # tokenize pair to get context/question boundary
        context_list, question_list, context_token_count_lis = [], [], []
        for qa in qas:
            question = qa["question"]
            encoded = self.tokenizer(context, question, return_offsets_mapping=True, truncation=True, max_length=512)
            sequence_ids = encoded.sequence_ids()

            last_context_idx = -1
            for i, seq_id in enumerate(sequence_ids):
                if seq_id == 0:
                    last_context_idx = i
            if last_context_idx == -1:
                context_token_count = 0
            else:
                context_token_count = last_context_idx + 1

            context_list.append(context)
            question_list.append(question)
            context_token_count_lis.append(context_token_count)

        return context_list, question_list, context_token_count_lis

    def transform(self, example):
        if self.pred:
            return self.transform_pred(example)
        else:
            return self.transform_train(example)

    def collate_train(self, batch):
        # DONE: Construct a single batch using a list of examples from the `transform` function.
        context, questions, context_token_count, token_start, token_end = zip(*batch)

        context = [item for sublist in context for item in sublist]
        questions = [item for sublist in questions for item in sublist]
        context_token_count = [item for sublist in context_token_count for item in sublist]
        token_start = [item for sublist in token_start for item in sublist]
        token_end = [item for sublist in token_end for item in sublist]
        
        inputs = self.tokenizer(context, questions, padding=True, return_tensors="pt", truncation=True, max_length=512, return_attention_mask=True)
        nn_input = inputs["input_ids"]
        attention_mask = inputs["attention_mask"]

        context_token_count = torch.as_tensor(context_token_count)
        token_start = torch.as_tensor(token_start)
        token_end = torch.as_tensor(token_end)
        start_end = torch.stack((token_start, token_end), dim=1)

        return (nn_input, attention_mask, context_token_count), start_end
    
    def collate_pred(self, batch):
        # DONE: Construct a single batch using a list of examples from the `transform` function.
        context, questions, context_token_count = zip(*batch)

        context = [item for sublist in context for item in sublist]
        questions = [item for sublist in questions for item in sublist]
        context_token_count = [item for sublist in context_token_count for item in sublist]

        inputs = self.tokenizer(context, questions, padding=True, return_tensors="pt", truncation=True, max_length=512, return_attention_mask=True)
        nn_input = inputs["input_ids"]
        attention_mask = inputs["attention_mask"]

        context_token_count = torch.as_tensor(context_token_count)

        return (nn_input, attention_mask, context_token_count)

    def collate(self, batch):
        if self.pred:
            return self.collate_pred(batch)
        else:
            return self.collate_train(batch)

def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the pre-trained RobeCzech model.
    tokenizer = transformers.AutoTokenizer.from_pretrained("ufal/robeczech-base")
    robeczech = transformers.AutoModel.from_pretrained("ufal/robeczech-base")

    # Load the data
    dataset = ReadingComprehensionDataset()

    train = TrainableDataset(dataset.train.paragraphs, tokenizer).dataloader(batch_size=args.batch_size, shuffle=True)
    dev = TrainableDataset(dataset.dev.paragraphs, tokenizer).dataloader(batch_size=args.batch_size)
    test = TrainableDataset(dataset.test.paragraphs, tokenizer, pred = True).dataloader(batch_size=args.batch_size)


    # TODO: Create the model and train it.
    model = Model(rob=robeczech, tokenizer=tokenizer)


    optimizer = torch.optim.AdamW(model.parameters(), lr=cfg.learning_rate, weight_decay=cfg.weight_decay)
    model.configure(
        optimizer=optimizer,
        scheduler=torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.epochs*len(train), eta_min=0.0001),
        loss=model.loss_fn,
        metrics={"accuracy": TwoAxisAccuracy()},
        logdir=logdir,
    )


    sbw = npfl138.callbacks.SaveBestWeights("./best_model_comprehension_reading.pt","dev:accuracy","max")

    loaded_weights_path = "./best_model_comprehension_reading.pt"
    if cfg.load_pretrained_local and os.path.exists(loaded_weights_path):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")

    model.fit(train, dev=dev, epochs=args.epochs, callbacks=[sbw])


    model.eval()

    if os.path.exists(loaded_weights_path):
        print("Weights loaded, continuing training")
        try:
            model.load_state_dict(torch.load(loaded_weights_path))
        except:
            print("Error loading model. Starting from scratch.")


    # Generate test set annotations, but in `logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "reading_comprehension.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Predict the answers as strings, one per line.
        predictions = model.predict(test)

        for answer in predictions:
            print(answer, file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
