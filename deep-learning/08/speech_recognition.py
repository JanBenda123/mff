#!/usr/bin/env python3
import argparse
import os

import torch
import torchaudio.models.decoder

import npfl138
npfl138.require_version("2526.8.1")
from npfl138.datasets.common_voice_cs import CommonVoiceCs

# DONE: Define reasonable defaults and optionally more parameters.
# Also, you can set the number of threads to 0 to use all your CPU cores.
parser = argparse.ArgumentParser()
parser.add_argument("--batch_size", default=16, type=int, help="Batch size.")
parser.add_argument("--epochs", default=90, type=int, help="Number of epochs.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=0, type=int, help="Maximum number of threads to use.")

import torch
import torch.nn as nn
import torchvision

class DWSEBlock(nn.Module):
    def __init__(self, channels: int,kernel_size:int = 3,p: float = 0.0):
        super().__init__()
        self.prob = p
        self.kernel_size = kernel_size
        self.reduction = 16
        self.padding = (self.kernel_size - 1) // 2


        self.branch1 = nn.Sequential(
            nn.GroupNorm(1, channels),
            nn.LeakyReLU(0.1),
            nn.Conv1d(channels, channels, kernel_size=self.kernel_size, padding=self.padding, groups=channels, bias=False),
            nn.GroupNorm(1, channels),
            nn.LeakyReLU(0.1),
            nn.Conv1d(channels, channels, kernel_size=1, bias=False),
        )
        self.se1 = nn.Sequential(
            nn.AdaptiveAvgPool1d(1),
            nn.Conv1d(channels, channels // self.reduction, kernel_size=1, bias=False),
            nn.ReLU(),
            nn.Conv1d(channels // self.reduction, channels, kernel_size=1, bias=False),
            nn.Sigmoid()
        )

        self.branch2 = nn.Sequential(
            nn.GroupNorm(1, channels),
            nn.LeakyReLU(0.1),
            nn.Conv1d(channels, channels, kernel_size=self.kernel_size, padding=self.padding, groups=channels, bias=False),
            nn.GroupNorm(1, channels),
            nn.LeakyReLU(0.1),
            nn.Conv1d(channels, channels, kernel_size=1, bias=False),
        )
        self.se2 = nn.Sequential(
            nn.AdaptiveAvgPool1d(1),
            nn.Conv1d(channels, channels // self.reduction, kernel_size=1, bias=False),
            nn.ReLU(),
            nn.Conv1d(channels // self.reduction, channels, kernel_size=1, bias=False),
            nn.Sigmoid()
        )

    def forward(self, x: torch.Tensor):
        out = x
        
        f1 = self.branch1(x)
        w1 = self.se1(f1)
        b1_out = f1 * w1


        f2 = self.branch2(x)
        w2 = self.se2(f2)
        b2_out = f2 * w2
        
        x = x + torchvision.ops.stochastic_depth(
            b1_out, p=self.prob, mode="row", training=self.training
        )
        x = x + torchvision.ops.stochastic_depth(
            b2_out, p=self.prob, mode="row", training=self.training
        )
        return x

class Model(npfl138.TrainableModule):
    def __init__(self, args: argparse.Namespace, train: CommonVoiceCs.Dataset) -> None:
        super().__init__()
        # DONE: Define the model.
        self.cnn = torch.nn.Sequential(
            torch.nn.LazyConv1d(256, kernel_size=3, stride=1, padding=1, bias=False),
            torch.nn.GroupNorm(1, 256),
            torch.nn.LeakyReLU(0.1),
            torch.nn.LazyConv1d(256, kernel_size=3, stride=1, padding=1, bias=False),
            torch.nn.GroupNorm(1, 256),
            torch.nn.LeakyReLU(0.1),
            # DWSEBlock(channels=128, kernel_size=5, p=0.1),
            # torch.nn.LazyConv1d(64, kernel_size=1, stride=1, padding=0, bias=False),
            # torch.nn.GroupNorm(1, 64),
        )
        self.rnn1 = torch.nn.GRU(input_size=256, hidden_size=256, num_layers=2, bidirectional=True, dropout=0.1)
        self.rnn2 = torch.nn.GRU(input_size=256, hidden_size=256, num_layers=2, bidirectional=True, dropout=0.1)

        self.lin = torch.nn.LazyLinear(len(CommonVoiceCs.LETTERS_VOCAB)+1)
        self.loss_fn = torch.nn.CTCLoss(blank=len(CommonVoiceCs.LETTERS_VOCAB), reduction='mean', zero_infinity=True)
        self.decoder = torchaudio.models.decoder.ctc_decoder(
            lexicon=None,
            tokens=[*CommonVoiceCs.LETTER_NAMES, "_"],
            blank_token="_",
            sil_token="_",
            beam_size = 20
        )
        self.predicting = False
        self.decoder_pred = torchaudio.models.decoder.ctc_decoder(
            lexicon=None,
            tokens=[*CommonVoiceCs.LETTER_NAMES, "_"],
            blank_token="_",
            sil_token="_",
            beam_size = 50
        )

    def forward(self, x: torch.Tensor) -> torch.Tensor:
        """
        x: Tensor [batch_size, n_mfcc, max_seq_len]
        lengths: Original sequence lengths [batch_size]
        """
        # DONE: Compute the output of the model
        x, lengths = x
        x = self.cnn(x)
        x = x.permute(2, 0, 1).contiguous()  # [max_seq_len, batch_size, n_mfcc]

        l = lengths.cpu()
        x_packed = torch.nn.utils.rnn.pack_padded_sequence(x, l, enforce_sorted=False)
        x_out, _ = self.rnn1(x_packed)
        x_out, _ = torch.nn.utils.rnn.pad_packed_sequence(x_out)
        f_out, b_out = torch.chunk(x_out, 2, dim=-1)
        x = x + f_out + b_out

        x = torch.nn.functional.group_norm(x, num_groups=1, eps=1e-5)
        x = torch.nn.functional.leaky_relu(x, negative_slope=0.1)

        x_packed = torch.nn.utils.rnn.pack_padded_sequence(x, l, enforce_sorted=False)
        x_out, _ = self.rnn2(x_packed)
        x_out, _ = torch.nn.utils.rnn.pad_packed_sequence(x_out)
        f_out, b_out = torch.chunk(x_out, 2, dim=-1)
        x = x + f_out + b_out

        x = torch.nn.functional.group_norm(x, num_groups=1, eps=1e-5)
        x = torch.nn.functional.leaky_relu(x, negative_slope=0.1)


        logits = self.lin(x_out)
        return logits, lengths

    def compute_loss(self, y_pred: torch.Tensor, y_true: torch.Tensor, *args) -> torch.Tensor:
        """
        y_pred: Predicted logits [max_seq_len, batch_size, dict_size + 1]
        pred_lengths: Lengths of the predicted sequences [batch_size]
        y_true: Target labels [batch_size, max_target_len]
        true_lengths: Lengths of the target sequences [batch_size]
        """
        # DONE: Compute the loss, most likely using the `torch.nn.CTCLoss` class.        
        # W in T actual F?? The framework permutes the tuples this much? WHY???
        logits, pred_lengths = y_pred
        targets, target_lengths = y_true

        log_probs = torch.nn.functional.log_softmax(logits, dim=-1)
        return self.loss_fn(log_probs, targets, pred_lengths, target_lengths)

    def ctc_decoding(self, y_pred: torch.Tensor)-> list[torch.Tensor]:
        """
        y_pred: Predicted logits [max_seq_len, batch_size, dict_size + 1]
        lengths: Lengths of the predicted sequences [batch_size]
        """
        # DONE: Compute predictions, either using manual CTC decoding, or you can use:
        # - `torchaudio.models.decoder.ctc_decoder`, which is CPU-based decoding with
        #   rich functionality;
        #   - note that you need to provide `blank_token` and `sil_token` arguments
        #     and they must be valid tokens. For `blank_token`, you need to specify
        #     the token whose index corresponds to the blank token index;
        #     for `sil_token`, you can use also the blank token index (by default,
        #     `sil_token` has ho effect on the decoding apart from being added as the
        #     first and the last token of the predictions unless it is a blank token).
        # - `torchaudio.models.decoder.cuda_ctc_decoder`, which is faster GPU-based
        #   decoder with limited functionality.
        logits, lengths = y_pred
        log_probs = torch.nn.functional.log_softmax(logits, dim=-1)
        log_probs = log_probs.transpose(0, 1).contiguous()  # [batch_size, max_seq_len, dict_size + 1]

        if self.predicting:
            results = self.decoder_pred(log_probs.cpu(), lengths.cpu())
        else:
            results = self.decoder(log_probs.cpu(), lengths.cpu()) # Returns list of lists [N, K_max_predictions] of CTCHypothesis
        decoded = []
        for hyp in results:
            # take the best prediction
            decoded.append(hyp[0].tokens)
        return decoded

    def compute_metrics(self, y_pred: torch.Tensor, y_true: torch.Tensor, *args) -> dict[str, torch.Tensor]:
        # TODO: Compute predictions using the `ctc_decoding`. Consider computing it
        # only when `self.training==False` to speed up training.
        if not self.training :
            predictions = self.ctc_decoding(y_pred)
            
            y_true_list = [p[:l].tolist() for p,l in zip(y_true[0],y_true[1])]
            preds_list = [p.tolist() for p in predictions]
            self.metrics["edit_distance"].update(preds_list, y_true_list)
        return self.metrics

    def predict_step(self, xs, as_numpy=True):
        with torch.no_grad():
            # Perform constrained decoding.
            yield from self.ctc_decoding(self.forward(xs[0][0]))

class TrainableDataset(npfl138.TransformedDataset):
    def __init__(self, dataset, dataset_limit = None, augment = False):
        super().__init__(dataset, dataset_limit)
        self.time_masking = torchaudio.transforms.TimeMasking(time_mask_param=20,iid_masks=True, p=0.5)
        self.freq_masking = torchaudio.transforms.FrequencyMasking(freq_mask_param=5, iid_masks=True)
        self.should_augment = True

    def transform(self, example):
        # DONE: Prepare a single example. The structure of the inputs then has to be reflected
        # in the `forward`, `compute_loss`, and `compute_metrics` methods; right now, there are
        # just `...` instead of the input arguments in the definition of the mentioned methods.
        #
        # You can use `CommonVoiceCs.LETTER_NAMES : list[str]` or `CommonVoiceCs.LETTERS_VOCAB : npfl138.Vocabulary`
        # to convert between letters and their indices. While the letters do not explicitly contain
        # a blank token, the [PAD] token can be employed as one.
        mfcc = example["mfccs"]
        sentence = example["sentence"]
        target_ids = torch.tensor(CommonVoiceCs.LETTERS_VOCAB.indices(sentence), dtype=torch.long)
        return mfcc, target_ids

    def augment(self, mfcc: torch.Tensor) -> torch.Tensor:
        """
        mfcc: Tensor [batch_size, n_mfcc, max_seq_len]
        """
        augmented_mfcc = mfcc
        if self.should_augment:
            augmented_mfcc = self.time_masking(augmented_mfcc)
            augmented_mfcc = self.freq_masking(augmented_mfcc)
        return augmented_mfcc

    def collate(self, batch):
        # DONE: Construct a single batch from a list of individual examples.
        # Sort batch by mfcc length for pack_padded_sequence (optional but good practice)
        batch.sort(key=lambda x: x[0].shape[-1], reverse=True)

        # mfccs [len, C]
        # targets [T_len]
        mfccs, targets = zip(*batch)


        mfcc_lengths = torch.tensor([m.shape[0] for m in mfccs], dtype=torch.long)
        target_lengths = torch.tensor([len(t) for t in targets], dtype=torch.long)

        mfccs_padded = torch.nn.utils.rnn.pad_sequence(mfccs, batch_first=True) # [BS, max_seq_len, n_mfcc]
        
        mfccs_padded = mfccs_padded.transpose(1, 2)
        mfccs_padded = self.augment(mfccs_padded) # [BS, n_mfcc, max_seq_len]

        targets_padded = torch.nn.utils.rnn.pad_sequence(targets, batch_first=True, padding_value=CommonVoiceCs.PAD) # [BS, max_target_len]
        mfccs_padded = mfccs_padded.to("cuda")
        targets_padded = targets_padded.to("cuda")
        
        return ((mfccs_padded, mfcc_lengths),), (targets_padded, target_lengths)



def main(args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Create a suitable logdir for the logs and the predictions.
    logdir = npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))

    # Load the data.
    common_voice = CommonVoiceCs()

    train = TrainableDataset(common_voice.train,augment=True).dataloader(args.batch_size, shuffle=True)
    dev = TrainableDataset(common_voice.dev).dataloader(args.batch_size)
    test = TrainableDataset(common_voice.test).dataloader(args.batch_size)

    # DONE: Create the model and train it. The `Model.compute_metrics` method assumes you
    # passed the following metric to the `configure` method under the name "edit_distance":
    #   CommonVoiceCs.EditDistanceMetric(ignore_index=CommonVoiceCs.PAD)
    model = Model(args, common_voice.train)

    optimizer = torch.optim.AdamW(model.parameters(), lr=1e-3, weight_decay=0.05)
    scheduler = torch.optim.lr_scheduler.CosineAnnealingLR(optimizer, T_max=args.epochs*len(train), eta_min=0.0001)
    model.configure(optimizer=optimizer,
                    scheduler=scheduler,
                    metrics={"edit_distance": CommonVoiceCs.EditDistanceMetric(ignore_index=CommonVoiceCs.PAD)},
                    logdir=logdir,
                    )

    model.fit(train, dev=dev, epochs=args.epochs)

    model.eval()
    model.predicting = True
    
    # Generate test set annotations, but in `model.logdir` to allow parallel execution.
    os.makedirs(logdir, exist_ok=True)
    with open(os.path.join(logdir, "speech_recognition.txt"), "w", encoding="utf-8") as predictions_file:
        # TODO: Predict the CommonVoice sentences.
        predictions = model.predict(test)
        predictions = list(predictions)

        for sentence in predictions:
            print("".join(CommonVoiceCs.LETTERS_VOCAB.strings(sentence)), file=predictions_file)


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
