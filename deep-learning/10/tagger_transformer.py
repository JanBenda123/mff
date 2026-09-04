#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e


import argparse

import torch
import torchmetrics

import npfl138
npfl138.require_version("2526.10")
from npfl138.datasets.morpho_dataset import MorphoDataset

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--batch_size", default=10, type=int, help="Batch size.")
parser.add_argument("--epochs", default=5, type=int, help="Number of epochs.")
parser.add_argument("--max_sentences", default=None, type=int, help="Maximum number of sentences to load.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
parser.add_argument("--transformer_dropout", default=0., type=float, help="Transformer dropout.")
parser.add_argument("--transformer_expansion", default=4, type=int, help="Transformer FFN expansion factor.")
parser.add_argument("--transformer_heads", default=4, type=int, help="Transformer heads.")
parser.add_argument("--transformer_layers", default=2, type=int, help="Transformer layers.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
parser.add_argument("--we_dim", default=64, type=int, help="Word embedding dimension.")
# If you add more arguments, ReCodEx will keep them with your default values.


class Model(npfl138.TrainableModule):
    class FFN(torch.nn.Module):
        def __init__(self, dim: int, expansion: int) -> None:
            super().__init__()
            # DONE: Create the required layers -- first a ReLU-activated dense
            # layer with `dim * expansion` units, followed by a dense layer
            # with `dim` units without an activation.
            
            self.ReLU_FFN = torch.nn.Sequential(
                torch.nn.Linear(dim, dim*expansion),
                torch.nn.ReLU(),
                torch.nn.Linear(dim*expansion, dim)
            )
            

        def forward(self, inputs: torch.Tensor) -> torch.Tensor:
            # DONE: Execute the FFN Transformer layer.
            return self.ReLU_FFN(inputs)

    class SelfAttention(torch.nn.Module):
        def __init__(self, dim: int, heads: int) -> None:
            super().__init__()
            self.dim, self.heads = dim, heads
            # DONE: Create weight matrices W_Q, W_K, W_V, and W_O; each a module parameter
            # `torch.nn.Parameter` of shape `[dim, dim]`. The weights should be initialized using
            # the `torch.nn.init.xavier_uniform_` in the same order the matrices are listed above.

            self.W_Q = torch.nn.Parameter(torch.zeros((dim, dim)))
            self.W_K = torch.nn.Parameter(torch.zeros((dim, dim)))
            self.W_V = torch.nn.Parameter(torch.zeros((dim, dim)))
            self.W_O = torch.nn.Parameter(torch.zeros((dim, dim)))

            torch.nn.init.xavier_uniform_(self.W_Q)
            torch.nn.init.xavier_uniform_(self.W_K)
            torch.nn.init.xavier_uniform_(self.W_V)
            torch.nn.init.xavier_uniform_(self.W_O)

        def forward(self, inputs: torch.Tensor, mask: torch.Tensor) -> torch.Tensor:
            # DONE: Execute the self-attention layer.
            #
            # Start by computing Q, K and V. In all cases:
            # - first multiply `inputs` by the corresponding weight matrix W_Q/W_K/W_V,
            # - reshape via `torch.reshape` to `[batch_size, max_sentence_len, heads, dim // heads]`,
            # - permute dimensions via `torch.permute` to `[batch_size, heads, max_sentence_len, dim // heads]`.
            Q = inputs@self.W_Q
            K = inputs@self.W_K
            V = inputs@self.W_V

            batch_size, max_sentence_len, _ = inputs.shape
            heads, dim_head = self.heads, self.dim//self.heads
            Q = Q.reshape(batch_size, max_sentence_len, heads, dim_head)
            K = K.reshape(batch_size, max_sentence_len, heads, dim_head)
            V = V.reshape(batch_size, max_sentence_len, heads, dim_head)

            Q = Q.permute(0,2,1,3)
            K = K.permute(0,2,1,3)
            V = V.permute(0,2,1,3)

            # DONE: Continue by computing the self-attention weights as Q @ K^T,
            # normalizing by the square root of `dim // heads`.
            sqrt_D = (self.dim//heads)**(1/2)
            logits = Q @ torch.transpose(K, 2, 3) / sqrt_D

            # DONE: Apply the softmax, but including a suitable mask ignoring all padding words.
            # The original `mask` is a bool matrix of shape `[batch_size, max_sentence_len]`
            # indicating which words are valid (nonzero value) or padding (zero value).
            # To mask an input to softmax, replace it by -1e9 (theoretically we should use
            # minus infinity, but `torch.exp(-1e9)` is also zero because of limited precision).
            mask = mask[:, None, None, :]
            logits = logits.masked_fill(mask == 0, -1e9)
            weights = torch.nn.functional.softmax(logits, dim=-1)

            # DONE: Finally,
            # - take a weighted combination of values V according to the computed attention
            #   (using a suitable matrix multiplication),
            output = weights @ V
            # - permute the result to `[batch_size, max_sentence_len, heads, dim // heads]`,
            output = output.permute(0,2,1,3)
            # - reshape to `[batch_size, max_sentence_len, dim]`,
            output = output.reshape(batch_size, max_sentence_len, self.dim)
            # - multiply the result by the W_O matrix.
            return output @ self.W_O

    class PositionalEmbedding(torch.nn.Module):
        def forward(self, inputs: torch.Tensor) -> torch.Tensor:
            # DONE: Compute the sinusoidal positional embeddings. Assuming the embeddings have
            # a shape `[max_sentence_len, dim]` with `dim` even, and for `0 <= i < dim/2`:
            _,max_sentences,dim = inputs.size()
            embedding = torch.zeros(max_sentences, dim, dtype=torch.float32, device=inputs.device)

            # - the value on index `[pos, i]` should be
            #     `sin(pos / 10_000 ** (2 * i / dim))`
            
            for i in range(dim//2):
                oj = 10 ** (4* 2 * i / dim)
                for pos in range(max_sentences):
                    angle = torch.tensor(pos / oj, device=inputs.device)
                    embedding[pos,i]=torch.sin(angle)
            # - the value on index `[pos, dim/2 + i]` should be
            #     `cos(pos / 10_000 ** (2 * i / dim))`
                    embedding[pos,dim//2+i] = torch.cos(angle)
            # - the `0 <= pos < max_sentence_len` is the sentence index.

            # This order is the same as in the visualization on the slides, but
            # different from the original paper where `sin` and `cos` interleave.
            return embedding

    class Transformer(torch.nn.Module):
        def __init__(self, layers: int, dim: int, expansion: int, heads: int, dropout: float) -> None:
            super().__init__()
            # DONE: Create:
            # - the positional embedding layer;
            self.pos_embedding = Model.PositionalEmbedding()
            # - the required number of transformer layers, each consisting of
            #   - a layer normalization and a self-attention layer followed by a dropout layer,
            #   - a layer normalization and a FFN layer followed by a dropout layer.
            self.transformer = torch.nn.ModuleList()
            for layer in range(layers):
                self.transformer.append(torch.nn.ModuleList([
                    torch.nn.LayerNorm(dim),
                    Model.SelfAttention(dim,heads),
                    torch.nn.Dropout(dropout),

                    torch.nn.LayerNorm(dim),
                    Model.FFN(dim, expansion),
                    torch.nn.Dropout(dropout)]))

            # During ReCodEx evaluation, the order of layer creation is not important,
            # but if you want to get the same results as on the course website, create
            # the layers in the order they are called in the `forward` method.

        def forward(self, inputs: torch.Tensor, mask: torch.Tensor) -> torch.Tensor:
            # DONE: First compute the positional embeddings.
            pos_embedding = self.pos_embedding(inputs)

            # DONE: Add the positional embeddings to the `inputs` and then
            inputs = inputs + pos_embedding
            # perform the given number of transformer layers, composed of
            # - a self-attention sub-layer, followed by
            # - a FFN sub-layer.
            # In each sub-layer, pass the input through LayerNorm, then compute
            # the corresponding operation, apply dropout, and finally add this result
            # to the original sub-layer input. Note that the given `mask` should be
            # passed to the self-attention operation to ignore the padding words.
            for layer in self.transformer:
                ln1, attn, do1, ln2, ffn, do2 = layer
                inputs = inputs + do1(attn(ln1(inputs),mask))
                inputs = inputs + do2(ffn(ln2(inputs)))
            return inputs

    def __init__(self, args: argparse.Namespace, train: MorphoDataset.Dataset) -> None:
        super().__init__()

        # Create all needed layers.
        # DONE(tagger_we): Create a `torch.nn.Embedding` layer, embedding the word ids
        # from `train.words.string_vocab` to dimensionality `args.we_dim`.
        self._word_embedding = torch.nn.Embedding(num_embeddings=len(train.words.string_vocab), embedding_dim=args.we_dim)


        # DONE: Create a `Model.Transformer` layer, using suitable options from `args`
        #   (using `args.we_dim` for the `dim` argument),
        self._transformer = Model.Transformer(args.transformer_layers, args.we_dim, args.transformer_expansion, args.transformer_heads, args.transformer_dropout)

        # DONE(tagger_we): Create an output linear layer (`torch.nn.Linear`) processing the RNN output,
        # producing logits for tag prediction; `train.tags.string_vocab` is the tag vocabulary.
        self._output_layer = torch.nn.Linear(args.we_dim, len(train.tags.string_vocab))

    def forward(self, word_ids: torch.Tensor) -> torch.Tensor:
        # DONE(tagger_we): Start by embedding the `word_ids` using the word embedding layer.
        hidden = self._word_embedding(word_ids)

        # DONE: Process the embedded words through the transformer. As the second argument,
        # pass the attention mask `word_ids != MorphoDataset.PAD`.
        hidden = self._transformer(hidden, (word_ids != MorphoDataset.PAD))

        # DONE(tagger_we): Pass `hidden` through the output layer. Such an output has a shape
        # `[batch_size, sequence_length, num_tags]`, but the loss and the metric expect
        # the `num_tags` dimension to be in front (`[batch_size, num_tags, sequence_length]`),
        # so you need to reorder the dimensions.
        hidden = self._output_layer(hidden)
        hidden = hidden.moveaxis(1,2)

        return hidden


class TrainableDataset(npfl138.TransformedDataset):
    def transform(self, example):
        # DONE(tagger_we): Construct a single example, each consisting of the following pair:
        # - a PyTorch tensor of integer ids of input words as input,
        # - a PyTorch tensor of integer tag ids as targets.
        # To create the ids, use `string_vocab` of `self.dataset.words` and `self.dataset.tags`.
        word_ids = torch.tensor([self.dataset.words.string_vocab.index(word) for word in example['words']])
        tag_ids = torch.tensor([self.dataset.tags.string_vocab.index(tag) for tag in example['tags']])

        return word_ids, tag_ids

    def collate(self, batch):
        # Construct a single batch, where `batch` is a list of examples
        # generated by `transform`.
        word_ids, tag_ids = zip(*batch)
        # DONE(tagger_we): Combine `word_ids` into a single tensor, padding shorter
        # sequences to length of the longest sequence in the batch with zeros
        # using `torch.nn.utils.rnn.pad_sequence` with `batch_first=True` argument.
        word_ids = torch.nn.utils.rnn.pad_sequence(word_ids, batch_first=True)
        # DONE(tagger_we): Process `tag_ids` analogously to `word_ids`.
        tag_ids = torch.nn.utils.rnn.pad_sequence(tag_ids, batch_first=True)
        return word_ids, tag_ids


def main(args: argparse.Namespace) -> dict[str, float]:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads, args.recodex)
    npfl138.global_keras_initializers()

    # Load the data.
    morpho = MorphoDataset("czech_cac", max_sentences=args.max_sentences)

    # Prepare the data for training.
    train = TrainableDataset(morpho.train).dataloader(batch_size=args.batch_size, shuffle=True)
    dev = TrainableDataset(morpho.dev).dataloader(batch_size=args.batch_size)

    # Create the model and train.
    model = Model(args, morpho.train)

    model.configure(
        # DONE(tagger_we): Create the Adam optimizer.
        optimizer=torch.optim.Adam(model.parameters()),
        # DONE(tagger_we): Use the usual `torch.nn.CrossEntropyLoss` loss function. Additionally,
        # pass `ignore_index=morpho.PAD` to the constructor so that the padded
        # tags are ignored during the loss computation. Note that the loss
        # expects the input to be of shape `[batch_size, num_tags, sequence_length]`.
        loss=torch.nn.CrossEntropyLoss(ignore_index=morpho.PAD),
        # DONE(tagger_we): Create a `torchmetrics.Accuracy` metric, passing "multiclass" as
        # the first argument, `num_classes` set to the number of unique tags, and
        # again `ignore_index=morpho.PAD` to ignore the padded tags.
        metrics={"accuracy": torchmetrics.Accuracy(task="multiclass", num_classes=len(morpho.train.tags.string_vocab), ignore_index=morpho.PAD)},
        logdir=npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args)),
    )

    logs = model.fit(train, dev=dev, epochs=args.epochs)

    # Return development and training losses for ReCodEx to validate.
    return {metric: value for metric, value in logs.items() if "loss" in metric}


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
