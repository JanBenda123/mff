#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse

import torch
from torch.nn.utils.rnn import pad_sequence, pack_padded_sequence, pad_packed_sequence
import torch.nn.functional as F

import npfl138
npfl138.require_version("2526.14")
from npfl138.datasets.tts_dataset import TTSDataset

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--attention_dim", default=128, type=int, help="Attention dimension.")
parser.add_argument("--attention_rnn_dim", default=1_024, type=int, help="Attention RNN dimension.")
parser.add_argument("--batch_size", default=10, type=int, help="Batch size.")
parser.add_argument("--dataset", default="ljspeech_tiny", type=str, help="TTS dataset to use.")
parser.add_argument("--decoder_dim", default=1_024, type=int, help="Decoder dimension.")
parser.add_argument("--dropout", default=0.0, type=float, help="Dropout rate.")
parser.add_argument("--epochs", default=100, type=int, help="Number of epochs.")
parser.add_argument("--encoder_layers", default=3, type=int, help="Encoder CNN layers.")
parser.add_argument("--encoder_dim", default=512, type=int, help="Dimension of the encoder.")
parser.add_argument("--locations_filters", default=32, type=int, help="Location sensitive attention filters.")
parser.add_argument("--locations_kernel", default=31, type=int, help="Location sensitive attention kernel.")
parser.add_argument("--hop_length", default=256, type=int, help="Hop length.")
parser.add_argument("--mels", default=80, type=int, help="Mel filterbanks.")
parser.add_argument("--postnet_dim", default=512, type=int, help="Post-net channels.")
parser.add_argument("--postnet_layers", default=5, type=int, help="Post-net CNN layers.")
parser.add_argument("--prenet_dim", default=200, type=int, help="Pre-net dimensions.")
parser.add_argument("--prenet_layers", default=2, type=int, help="Pre-net layers.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
parser.add_argument("--sample_rate", default=22_050, type=int, help="Sample rate.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
parser.add_argument("--window_length", default=1_024, type=int, help="Window length.")
# If you add more arguments, ReCodEx will keep them with your default values.


class Dataset(npfl138.TransformedDataset):
    def transform(self, example: TTSDataset.Element) -> tuple[torch.Tensor, torch.Tensor]:
        # The input `example` is a dictionary with keys "text" and "mel_spectrogram".
        # TODO: Prepare a single example for training, returning a pair consisting of:
        # - the text converted to a sequence of character indices according to `self.dataset.char_vocab`,
        # - the unmodified mel spectrogram.
        ###
        text_ids = torch.tensor([self.dataset.char_vocab.index(c) for c in example["text"]], dtype=torch.long)
        mel_spectrogram = torch.tensor(example["mel_spectrogram"], dtype=torch.float32)
        return text_ids, mel_spectrogram
        ###
        #raise NotImplementedError()

    def collate(self, batch: list) -> tuple[tuple[torch.Tensor, torch.Tensor], tuple[torch.Tensor, torch.Tensor]]:
        text_ids, spectrograms = zip(*batch)
        # TODO: Construct a single batch from a list of individual examples.
        # - The `text_ids` should be padded to the same length using `torch.nn.utils.rnn.pad_sequence`,
        #   using `TTSDataset.PAD` (which is guaranteed to be 0) as the padding value.
        # - The lengths of the unpadded spectrograms should be stored in a tensor `spectrogram_lens`.
        # - Finally, the `spectrograms` should also be padded to a common minimal length.
        ###
        padded_text_ids = pad_sequence(text_ids, batch_first=True, padding_value=TTSDataset.PAD)
        spectrogram_lens = torch.tensor([s.shape[0] for s in spectrograms], dtype=torch.long)
        padded_spectrograms = pad_sequence(spectrograms, batch_first=True, padding_value=0.0)
        ###
        # As input, apart from text ids, we return the maximum spectrogram length to indicate
        # how many mel frames to produce during training. During inference, this value will be
        # set to -1 to indicate that the model should produce mel frames until it decides to stop.
        return (padded_text_ids, spectrogram_lens.max().item()), (padded_spectrograms, spectrogram_lens)


class Encoder(torch.nn.Module):
    def __init__(self, args: argparse.Namespace, num_characters: int) -> None:
        super().__init__()
        # TODO: Create the required encoder layers. The architecture of the encoder is as follows:
        # - Convert the texts to embeddings using `torch.nn.Embedding(num_characters, args.encoder_dim)`.
        # - Pass the result through a `torch.nn.Dropout(args.dropout)` layer.
        # - After moving the channels to the front (i.e., dim=1), pass the result through
        #   `args.encoder_layers` number of layers, each consisting of
        #   - 1D convolution with `args.encoder_dim` channels, kernel size 5, padding 2, and no bias,
        #   - batch normalization,
        #   - ReLU activation.
        # - Then move the channels back to the last dimension.
        # - Perform a `torch.nn.Dropout(args.dropout)` layer.
        # - Apply a bidirectional LSTM layer with `args.encoder_dim` dimension. Correctly handle
        #   the variable-length texts that use `TTSDataset.PAD` padding value. The results from the
        #   forward and backward direction should be summed together.
        # - Pass the result through another `torch.nn.Dropout(args.dropout)` layer and return it.
        # It does not matter if you use a shared single dropout layer or invididual independent dropout layers.
        #raise NotImplementedError()
        ###
        self.embedding=torch.nn.Embedding(num_characters, args.encoder_dim)
        self.dropout_layer=torch.nn.Dropout(args.dropout)

        convblocks_list=[]
        for _ in range(args.encoder_layers):
            convblocks_list.append(
                torch.nn.Sequential(torch.nn.Conv1d(args.encoder_dim, args.encoder_dim, kernel_size=5, padding=2, bias=False),torch.nn.BatchNorm1d(args.encoder_dim),torch.nn.ReLU()))

        self.conv_blocks=torch.nn.Sequential(*convblocks_list)
        self.lstm=torch.nn.LSTM(args.encoder_dim, args.encoder_dim, batch_first=True, bidirectional=True)
        ###
        
    def forward(self, texts: torch.Tensor) -> torch.Tensor:
        # TODO: Implement the forward pass of the encoder.
        #result = ...
        ###
        text_lengths=(texts != TTSDataset.PAD).sum(dim=1)
        embedded_texts=self.embedding(texts)
        embedded_texts=self.dropout_layer(embedded_texts)

        conv_input=embedded_texts.permute(0, 2, 1)
        conv_output=self.conv_blocks(conv_input)
        conv_output=conv_output.permute(0, 2, 1)
        conv_output=self.dropout_layer(conv_output)

        packed_input=pack_padded_sequence(
            conv_output, text_lengths.cpu(), batch_first=True, enforce_sorted=False)
        packed_output,_=self.lstm(packed_input)

        result, _=pad_packed_sequence(packed_output, batch_first=True)
        result=result[:, :, :self.lstm.hidden_size] + result[:, :, self.lstm.hidden_size:]
        result=self.dropout_layer(result)
        ###
        
        if npfl138.first_time("Encoder.forward"):
            print(f"The torch.std of the first batch returned by Encoder: {torch.std(result):.4f}")

        return result


class Attention(torch.nn.Module):
    def __init__(self, args: argparse.Namespace) -> None:
        super().__init__()
        # The architecture of the attention is recurrent, depending on its previous outputs.
        # The required layers are already prepared for you.
        self.attention_rnn = torch.nn.LSTMCell(args.prenet_dim + args.encoder_dim, args.attention_rnn_dim)
        self.location_sensitive_conv = torch.nn.Conv1d(2, args.locations_filters, args.locations_kernel, padding=args.locations_kernel // 2)
        self.location_sensitive_output = torch.nn.Linear(args.locations_filters, args.attention_dim)
        self.attention_query_layer = torch.nn.Linear(args.attention_rnn_dim, args.attention_dim)
        self.attention_memory_layer = torch.nn.Linear(args.encoder_dim, args.attention_dim)
        self.attention_output_layer = torch.nn.Linear(args.attention_dim, 1)

    def reset(self, texts: torch.Tensor, encoded_texts: torch.Tensor) -> None:
        # TODO: The `reset` method initializes the attention module for a new batch of texts.
        # - `texts` is a batch of input texts with shape `[batch_size, max_input_length]`;
        # - `encoded_texts` is the output of the encoder for these texts with the shape
        #   of `[batch_size, max_input_length, encoder_dim]`.
        # You should:
        # - store the `encoded_texts` in this attention module instance (i.e., in `self`),
        # - process the `encoded_texts` using `self.attention_memory_layer` and store the result,
        # - store an attention mask that is `-1e9` for the `TTSDataset.PAD` values in the `texts`
        #   and 0 otherwise (it will be used to mask the attention logits before applying softmax),
        # - you should zero-initialize the following `self` variables:
        #   - the state (`h`) and memory cell (`c`) of the `self.attention_rnn`,
        #   - the previously-computed attention weights,
        #   - the cumulative attention weights (the sum of all computed attention weights so far),
        #   - the previously-computed attention context vector (the previous attention output).
        #raise NotImplementedError()
        ###
        self.attention_logits_list = []
        self.batch_size = texts.shape[0]
        self.max_input_length = texts.shape[1]

        self.encoder_dim = encoded_texts.shape[2]
        self.device = encoded_texts.device 
        self.encoded_texts = encoded_texts
        self.memory_layer_processed_output = self.attention_memory_layer(encoded_texts)
        self.attention_mask = (texts == TTSDataset.PAD).to(self.device) * -1e9
        
        self.attention_rnn_h = torch.zeros(self.batch_size, self.attention_rnn.hidden_size, device=self.device)
        self.attention_rnn_c = torch.zeros(self.batch_size, self.attention_rnn.hidden_size, device=self.device)
        self.previous_attention_weights = torch.zeros(self.batch_size, self.max_input_length, device=self.device)
        self.cumulative_attention_weights = torch.zeros(self.batch_size, self.max_input_length, device=self.device)
        self.previous_context = torch.zeros(self.batch_size, self.encoder_dim, device=self.device)
        ###
        
    def forward(self, prenet: torch.Tensor) -> torch.Tensor:
        # TODO: Implement a single step of the attention mechanism, relying on the previously-computed
        # values stored in `self`.
        # - First run the `self.attention_rnn` on the concatenation of the pre-net output and the previous
        #   context vector, using and updating the stored attention RNN state and memory cell values.
        #   The resulting RNN state (`h`) will be used as the query for the attention.
        # - Then perform the location-sensitive part of the attention, by:
        #   - stacking the cumulative attention weights and the previous attention weights (in this order)
        #     as two channels of a 1D sequence,
        #   - passing it through the `self.location_sensitive_conv` layer,
        #   - moving the channels to the last dimension,
        #   - passing the result through the `self.location_sensitive_output` layer.
        # - Now compute the attention logits for each position in the encoded text:
        #   - compute the query by passing the attention RNN state through `self.attention_query_layer`;
        #     this query is used for all positions in the encoded text,
        #   - add the already pre-computed output of the `self.attention_memory_layer` applied to `encoded_texts`,
        #   - add the already computed output of the `self.location_sensitive_output` layer,
        #   - apply the tanh activation and pass the result through the `self.attention_output_layer`,
        #   - add the previously-computed attention mask to the attention logits to mask the padding positions.
        # - Now compute the attention weights (=probabilities) by applying softmax to the attention logits.
        # - Finally compute the attention context vector as the weighted sum of the `encoded_texts` and return it.
        # During the computation, you need to store the following values in the attention module instance:
        # - the updated attention RNN state and memory cell,
        # - the updated cumulative attention weights (the sum of all computed attention weights so far),
        # - the current attention weights, which become the previous attention weights in the next step,
        # - the current attention context vector, which becomes the previous context in the next step.
        #context = ...
        rnninp = torch.cat((prenet, self.previous_context), dim=-1)
        self.attention_rnn_h, self.attention_rnn_c = self.attention_rnn(rnninp, (self.attention_rnn_h, self.attention_rnn_c))
        query = self.attention_rnn_h

        locinput=torch.cat((self.cumulative_attention_weights.unsqueeze(1),self.previous_attention_weights.unsqueeze(1)), dim=1) 
        locconv=self.location_sensitive_conv(locinput) 
        locconv=locconv.permute(0, 2, 1) 
        loc_features=self.location_sensitive_output(locconv) 

        query_processed=self.attention_query_layer(query).unsqueeze(1) 
        
        attention_logits=self.attention_output_layer(torch.tanh(query_processed + self.memory_layer_processed_output + loc_features)).squeeze(-1) 
        
        attention_logits += self.attention_mask 
        self.attention_logits_list.append(attention_logits)
        attention_weights = F.softmax(attention_logits, dim=-1)

        context = torch.sum(attention_weights.unsqueeze(-1) * self.encoded_texts, dim=1)

        self.cumulative_attention_weights += attention_weights
        self.previous_attention_weights = attention_weights
        self.previous_context = context

        if npfl138.first_time("Attention.forward"):
            print(f"The torch.std of the first batch returned by Attention: {torch.std(context):.4f}")

        return context


class Decoder(torch.nn.Module):
    def __init__(self, args: argparse.Namespace) -> None:
        super().__init__()
        # TODO: Create the layers of the decoder. Start by defining the pre-net module, which is
        # composed of `args.prenet_layers` layers, each consisting of:
        # - a linear layer with `args.prenet_dim` output dimension,
        # - ReLU activation,
        # - dropout with `args.dropout` rate.
        ###
        prenet_layers = []
        for i in range(args.prenet_layers):
            prenet_layers.append(torch.nn.Linear(args.mels if i == 0 else args.prenet_dim, args.prenet_dim))
            prenet_layers.append(torch.nn.ReLU())
            prenet_layers.append(torch.nn.Dropout(args.dropout))
        self.prenet = torch.nn.Sequential(*prenet_layers)
        ###
        
        # The LSTM decoder cell is already prepared for you.
        self.decoder = torch.nn.LSTMCell(args.prenet_dim + args.encoder_dim, args.decoder_dim)

        # The `decoder_start` is a learnable parameter that is used as the initial input to the decoder.
        #self.decoder_start = torch.nn.Parameter(torch.zeros(args.prenet_dim, dtype=torch.float32))
        self.decoder_start = torch.nn.Parameter(torch.zeros(args.prenet_dim, dtype=torch.float32))

        # TODO: Create the output layer with no activation that maps decoder states
        # to mel spectrograms with `args.mels` output channels.
        self.output_layer = torch.nn.Linear(args.decoder_dim, args.mels)

        # TODO: Create the gate layer that maps the decoder states to a single value predicting
        # whether this step of the decoder should be the last one.
        self.gate_layer = torch.nn.Linear(args.decoder_dim, 1)

    def reset(self, texts: torch.Tensor) -> None:
        # TODO: Similarly to the `Attention.reset`, the `reset` method initializes the decoder
        # for a new batch of texts. You should
        # - store properly tiled (repeated) `self.decoder_start` as the next input to the decoder,
        # - zero-initialize the decoder state (`h`) and memory cell (`c`) of the `self.decoder`.
        #raise NotImplementedError()
        self.batch_size=texts.shape[0]
        self.device=texts.device
        
        #decoder_start_expanded=self.decoder_start.unsqueeze(0).repeat(self.batch_size, 1).to(self.device)
        decoder_start_expanded=self.decoder_start.unsqueeze(0).expand(self.batch_size, -1).to(self.device)
        self.next_decoder_input=decoder_start_expanded
        self.decoder_h=torch.zeros(self.batch_size, self.decoder.hidden_size, device=self.device)
        self.decoder_c=torch.zeros(self.batch_size, self.decoder.hidden_size, device=self.device)
        

    def forward(self, context: torch.Tensor) -> tuple[torch.Tensor, torch.Tensor]:
        # TODO: Implement a single step of the decoder.
        #
        # - First run the `self.decoder` on the concatenation of the stored next decoder input and
        #   the given context vector, using and updating the stored decoder RNN state and memory cell values.
        # - Then pass the computed decoder RNN state through the `self.output_layer` to obtain
        #   the predicted `mel_frame` for the current step.
        # - The `mel_frame` is passed through the `self.prenet` to obtain the next input to the decoder,
        #   which should be stored as an instance variable of `self`.
        # - Finally, pass the decoder RNN state through the `self.gate_layer` and a sigmoid activation
        #   to obtain the gate output indicating whether the decoder should stop or continue.
        # Return the output mel spectrogram frame and the gate output.
        #mel_frame, gate = ...
        rnn_input=torch.cat((self.next_decoder_input, context), dim=-1)
        self.decoder_h, self.decoder_c=self.decoder(rnn_input, (self.decoder_h, self.decoder_c))
        mel_frame=self.output_layer(self.decoder_h)
        self.next_decoder_input=self.prenet(mel_frame)
        gate=torch.sigmoid(self.gate_layer(self.decoder_h))

        if npfl138.first_time("Decoder.forward"):
            print("The torch.std of the first batch returned by Decoder:",
                  f"({torch.std(mel_frame):.4f}, {torch.std(gate):.4f})")

        return mel_frame, gate


class Postnet(torch.nn.Module):
    def __init__(self, args: argparse.Namespace) -> None:
        super().__init__()
        # TODO: The post-net is composed of `args.postnet_layers` convolutional layers.
        # - The first `args.postnet_layers - 1` of them consist of
        #   - a 1D convolution with `args.postnet_dim` output channels, kernel size 5, padding 2, and no bias,
        #   - a batch normalization,
        #   - the tanh activation.
        # - The last layer consists of a 1D convolution with the same hyperparameters, but with `args.mels`
        #   output channels, followed by a batch normalization; no activation is applied.
        #raise NotImplementedError()
        postnet_layers_list=[]
        if args.postnet_layers==1:
            postnet_layers_list.append(
                torch.nn.Sequential(
                    torch.nn.Conv1d(args.mels, args.mels, kernel_size=5, padding=2, bias=False),
                    torch.nn.BatchNorm1d(args.mels)
                )
            )
        else:
            postnet_layers_list.append(
                torch.nn.Sequential(
                    torch.nn.Conv1d(args.mels, args.postnet_dim, kernel_size=5, padding=2, bias=False),
                    torch.nn.BatchNorm1d(args.postnet_dim),
                    torch.nn.Tanh()
                )
            )
            for _ in range(args.postnet_layers-2): 
                postnet_layers_list.append(
                    torch.nn.Sequential(
                        torch.nn.Conv1d(args.postnet_dim, args.postnet_dim, kernel_size=5, padding=2, bias=False),
                        torch.nn.BatchNorm1d(args.postnet_dim),
                        torch.nn.Tanh()
                    )
                )
            postnet_layers_list.append(
                torch.nn.Sequential(
                    torch.nn.Conv1d(args.postnet_dim, args.mels, kernel_size=5, padding=2, bias=False),
                    torch.nn.BatchNorm1d(args.mels)
                )
            )
        self.postnet_cnn = torch.nn.Sequential(*postnet_layers_list)

    def forward(self, spectrograms: torch.Tensor) -> torch.Tensor:
        # TODO: Given a batch of mel spectrograms with shape `[batch_size, max_spectrogram_len, mels]`,
        # - move the channels to the front (i.e., dim=1),
        # - pass the spectrograms through the post-net,
        # - move the channels back to the last dimension.
        # Finally, return the sum of the original and processed spectrograms.
        #result = ...
        original_spectrograms_for_addition = spectrograms 
        spectrograms_permuted=spectrograms.permute(0, 2, 1)
        processed_spectrograms=self.postnet_cnn(spectrograms_permuted)
        processed_spectrograms=processed_spectrograms.permute(0, 2, 1)
        result=original_spectrograms_for_addition + processed_spectrograms

        if npfl138.first_time("Postnet.forward"):
            print(f"The torch.std of the first batch returned by Postnet: {torch.std(result):.4f}")

        return result


class Tacotron(npfl138.TrainableModule):
    def __init__(self, args: argparse.Namespace, num_characters: int) -> None:
        super().__init__()
        # TODO: Create the Tacotron 2 model consisting of the encoder, attention, decoder, and post-net modules.
        self.encoder = Encoder(args, num_characters)
        self.attention = Attention(args)
        self.decoder = Decoder(args)
        self.postnet = Postnet(args)

    def forward(self, texts: torch.Tensor, spectrograms_len: int) -> tuple[torch.Tensor, torch.Tensor, torch.Tensor]:
        ###WRONG FORWARD FUNCTION###

        # TODO: Start by encoding the texts using the encoder.
        encoded_texts = self.encoder(texts)

        # TODO: Then, reset the attention and decoder modules using the `reset` method with
        # appropriate arguments.
        self.attention.reset(texts, encoded_texts)
        self.decoder.reset(texts)

        # Now, compute the sequence of mel spectrogram frames and the gate outputs.
        mel_frames_list=[]
        gates_list=[]
        #spectrograms_max= spectrograms_len.item() if spectrograms_len.numel() == 1 else spectrograms_len.max().item()
        for _ in range(spectrograms_len):
            # TODO: Run the `self.attention` module on the current decoder input (which
            # is stored somewhere in the `self.decoder` instance) to obtain the context vector.
            context = self.attention(self.decoder.next_decoder_input)

            # TODO: Then run the `self.decoder` module on the obtained context vector.
            mel_frame, gate = self.decoder(context)

            # TODO: Append the obtained mel frame and gate output to the `mel_frames` and `gates` lists.
            mel_frames_list.append(mel_frame)
            gates_list.append(gate)

        # TODO: Stack the `mel_frames` and `gates` lists into tensors; the first two dimensions of
        # the resulting tensors should be `[batch_size, max_spectrogram_len]`.
        mel_frames = torch.stack(mel_frames_list, dim=1)
        gates = torch.stack(gates_list, dim=1)

        # TODO: Finally, compute `mel_frames_post` by passing `mel_frames` through the post-net.
        mel_frames_post = self.postnet(mel_frames)
        #attention_logits = torch.stack(self.attention.attention)
        attention_logits = torch.stack(self.attention.attention_logits_list, dim=0)	

        return mel_frames_post, mel_frames, gates, attention_logits

        ###

    def compute_loss(self, y_pred: tuple[torch.Tensor, torch.Tensor, torch.Tensor], y_true: tuple[torch.Tensor, torch.Tensor],
        texts: torch.Tensor, spectograms_len: torch.Tensor,
    ) -> torch.Tensor:
        # Unpack the predicted and true values.
        mel_frames_post, mel_frames, gates, attention_logits = y_pred
        spectrograms, spectrogram_lens = y_true

        # TODO: We need to ignore padding values during loss computation; therefore, use
        # `torch.masked_select` to select only the non-padding values from predicted and true values.

        # TODO: The loss is a sum of the following three terms:
        # - the mean squared error between the predicted `mel_frames_post` and true `spectrograms`,
        # - the mean squared error between the predicted `mel_frames` and true `spectrograms`,
        # - the binary cross-entropy between the predicted `gates` and true values derived
        #   from `spectrogram_lens`. As an example, if a spectrogram has length 3, the gates should
        #   be 0 for the first frame and second frame, and 1 for the third frame.
        #mse_loss_post, mse_loss, bce_loss = ...
        ###
        #WRONG LOSS FUNCTION#

        batch_size, max_spectrogram_len, mels=mel_frames_post.shape
        
        mask=torch.arange(max_spectrogram_len, device=mel_frames_post.device).unsqueeze(0) < spectrogram_lens.unsqueeze(1)
        spectrogram_mask = mask.unsqueeze(-1).expand_as(spectrograms)

        masked_postnet_mel_frames=torch.masked_select(mel_frames_post, spectrogram_mask)
        masked_pre=torch.masked_select(mel_frames,spectrogram_mask)
        masked_spectrograms=torch.masked_select(spectrograms, spectrogram_mask)

        mse_loss_post = F.mse_loss(masked_postnet_mel_frames, masked_spectrograms, reduction='mean')
        mse_loss=F.mse_loss(masked_pre, masked_spectrograms, reduction='mean')

        target_gates = torch.zeros_like(gates)
        for i, length in enumerate(spectrogram_lens):
            if length > 0:
                target_gates[i, length - 1, 0] = 1.0 

        gates_mask_expanded = mask.unsqueeze(-1).expand_as(gates)
        masked_gates_pred = torch.masked_select(gates, gates_mask_expanded)
        masked_gates_target = torch.masked_select(target_gates, gates_mask_expanded)
        
        bce_loss = F.binary_cross_entropy(masked_gates_pred, masked_gates_target, reduction='mean')
        ###
        # TODO: Additionally, maximize the sum of probabilities of all monotonic alignments between
        # the mel spectrogram frames and the text characters. To this end:
        # - Obtain all (masked) attention logits computed in the `Attention.forward` method.
        #   You need to store them in the `self.attention` instance during `Attention.forward`
        #   (or return them from `Attention.forward` instead of storing them to `self.attention`)
        #   and collect all of them in `self.forward`. The resulting tensor should have shape
        #   `[max_spectrogram_length, batch_size, max_text_length]`.
        # - Then, you need to include the logit for the blank token required by the CTC loss:
        #   prepend a fixed logit of -1 as the first "row" of the attention logits, obtaining
        #   attention tensor with shape `[max_spectrogram_length, batch_size, max_text_length + 1]`.
        # - Compute the log softmax of the attention logits along a suitable dimension.
        #   Together with `spectrogram_lens`, this will be the predicted input to the CTC loss.
        # - The CTC loss targets are sequences `[1, 2, ..., text_length]`, with the length
        #   being equal to the (non-padding) length of the input texts.
        # - Finally, compute the CTC loss using `torch.nn.functional.ctc_loss`, with the
        #   `zero_infinity=True` argument, and add it to the `loss`.

        blank_logits = torch.full((attention_logits.size(0), attention_logits.size(1),1), fill_value=-1.0,device=attention_logits.device, dtype=attention_logits.dtype)
        
        ctc_input = torch.cat((blank_logits, attention_logits), dim=2)
        log_probs =  F.log_softmax(ctc_input, dim=2)

        #input_lenght = spectrogram_lens.repeat(1)
        #taget_lenght = texts.ne(TTSDataset.PAD).sum(dim=1)

        input_lengths = spectrogram_lens.repeat(1)
        target_lengths = (texts != TTSDataset.PAD).sum(dim=1).cpu()  # [B]
        targets = [torch.arange(1, l + 1, dtype=torch.long) for l in target_lengths]
        targets = torch.cat(targets)

        ctc_loss = torch.nn.functional.ctc_loss(log_probs, targets,input_lengths=input_lengths,target_lengths=target_lengths,blank=0, zero_infinity=True)

        #if npfl138.first_time("Tacotron.compute_loss"):
        #    print("The first batch loss values:",
        #          f"(mse_post={mse_loss_post:.4f}, mse={mse_loss:.4f}, bce={bce_loss:.4f})")
	#
        #return mse_loss_post + mse_loss + bce_loss

        if npfl138.first_time("Tacotron.compute_loss"):
             print("The first batch loss values:",
                   f"(mse_post={mse_loss_post:.4f}, mse={mse_loss:.4f}, bce={bce_loss:.4f}, ctc={ctc_loss:.4f})")

        return mse_loss_post + mse_loss + bce_loss + ctc_loss


def main(args: argparse.Namespace) -> dict[str, float]:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads, recodex=args.recodex)
    npfl138.global_keras_initializers()

    # Load the TTS data.
    tts_dataset = TTSDataset(args.dataset, args.sample_rate, args.window_length, args.hop_length, args.mels)
    train = Dataset(tts_dataset.train).dataloader(args.batch_size, shuffle=True, seed=args.seed)

    # Create the model.
    tacotron = Tacotron(args, len(tts_dataset.train.char_vocab))

    # Train the model.
    tacotron.configure(
        optimizer=torch.optim.Adam(tacotron.parameters()),
        logdir=npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args)),
    )
    logs = tacotron.fit(train, epochs=args.epochs)

    # Return the logs for ReCodEx to validate.
    return logs


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)

