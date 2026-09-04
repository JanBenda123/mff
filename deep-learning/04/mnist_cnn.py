#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e


import argparse

import torch
import torchmetrics

import npfl138
npfl138.require_version("2526.4")
from npfl138.datasets.mnist import MNIST

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--batch_size", default=50, type=int, help="Batch size.")
parser.add_argument("--cnn", default=None, type=str, help="CNN architecture.")
parser.add_argument("--epochs", default=10, type=int, help="Number of epochs.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
# If you add more arguments, ReCodEx will keep them with your default values.


class Dataset(npfl138.TransformedDataset):
    def transform(self, example):
        image = example["image"]  # a torch.Tensor with torch.uint8 values in [0, 255] range
        image = image.to(torch.float32) / 255  # image converted to float32 and rescaled to [0, 1]
        label = example["label"]  # a torch.Tensor with a single integer representing the label
        return image, label  # return an (input, target) pair

def string_to_list(string):
        if string == None:
            return []
        layer_list = []
        beginning = 0
        i = 0
        while i<len(string):   
            if string[i] == "[":
                beginning = i+1
                while string[i]!="]":
                    i += 1
                layer_list.append(["R",[layer.split("-") for layer in string[beginning:i].split(",")]])
                beginning = i + 2
                i += 2
            elif string[i] == ",":
                layer_list.append(string[beginning:i].split("-"))
                beginning = i + 1
                i += 1
            elif i+1==len(string):
                layer_list.append(string[beginning:].split("-"))
                i +=1
            else:
                i += 1       
        return layer_list   

class Residual(torch.nn.Module):
    def __init__(self, layers):
        super().__init__()
        self.layers = torch.nn.Sequential(*layers)

    def forward(self, x):
        return x + self.layers(x)


class Model(npfl138.TrainableModule):
    def __init__(self, args: argparse.Namespace) -> None:
        # Add CNN layers specified by `args.cnn`, which contains
        # transforms string with layers into a list


        model = []

        layer_list = string_to_list(args.cnn)
        # a comma-separated list of the following layers:

        for layer in layer_list:
            layer_type = layer[0]

        # - `C-filters-kernel_size-stride-padding`: Add a convolutional layer with ReLU
        #   activation and specified number of filters, kernel size, stride and padding.
            if layer_type == "C":
                model.append(torch.nn.LazyConv2d(int(layer[1]), int(layer[2]), stride=int(layer[3]), padding=layer[4]))
                model.append(torch.nn.ReLU())

        # - `CB-filters-kernel_size-stride-padding`: Same as `C`, but use batch normalization.
        #   In detail, start with a convolutional layer **without bias** and activation,
        #   then add a batch normalization layer, and finally the ReLU activation.
            elif layer_type == "CB":
                model.append(torch.nn.LazyConv2d(int(layer[1]), int(layer[2]), stride=int(layer[3]), padding=layer[4], bias=False))
                model.append(torch.nn.LazyBatchNorm2d())
                model.append(torch.nn.ReLU())

        # - `M-pool_size-stride`: Add max pooling with specified size and stride, using
        #   the default padding of 0 (the "valid" padding).
            elif layer_type == "M":
                model.append(torch.nn.MaxPool2d(int(layer[1]),stride=int(layer[2])))

        # - `R-[layers]`: Add a residual connection. The `layers` contain a specification
        #   of at least one convolutional layer (but not a recursive residual connection `R`).
        #   The input to the `R` layer should be processed sequentially by `layers`, and the
        #   produced output (after the ReLU nonlinearity of the last layer) should be added
        #   to the input (of this `R` layer).        
            elif layer_type == "R":
                sublayers = []
                for sublayer in layer[1]:
                    sublayer_type = sublayer[0]
                    if sublayer_type == "C":
                        sublayers.append(torch.nn.LazyConv2d(int(sublayer[1]), int(sublayer[2]), stride=int(sublayer[3]), padding=sublayer[4]))
                        sublayers.append(torch.nn.ReLU())
                    elif sublayer_type == "CB":
                        sublayers.append(torch.nn.LazyConv2d(int(sublayer[1]), int(sublayer[2]), stride=int(sublayer[3]), padding=sublayer[4], bias=False))
                        sublayers.append(torch.nn.LazyBatchNorm2d())
                        sublayers.append(torch.nn.ReLU())
                model.append(Residual(sublayers))

        # - `F`: Flatten inputs. Must appear exactly once in the architecture.            
            elif layer_type == "F":
                model.append(torch.nn.Flatten())     
                
        # - `H-hidden_layer_size`: Add a dense layer with ReLU activation and the specified size.
            elif layer_type == "H":
                model.append(torch.nn.LazyLinear(int(layer[1])))
                model.append(torch.nn.ReLU())

        # - `D-dropout_rate`: Apply dropout with the given dropout rate.
            elif layer_type == "D":
                model.append(torch.nn.Dropout(float(layer[1])))

        # You can assume the resulting network is valid; it is fine to crash if it is not.
        #
        # To implement the residual connections, you can use various approaches, for example:
        # - you can create a specialized `torch.nn.Module` subclass representing a residual
        #   connection that gets the inside layers as an argument, and implement its forward call.
        #   This allows you to have the whole network in a single `torch.nn.Sequential`.
        # - you could represent the model module as a `torch.nn.ModuleList` of `torch.nn.Sequential`s,
        #   each representing one user-specified layer, keep track of the positions of residual
        #   connections, and manually perform them in the forward pass.
        #
        # It might be difficult to compute the number of features after the `F` layer. You can
        # nevertheless use the `torch.nn.LazyLinear`, `torch.nn.LazyConv2d`, and `torch.nn.LazyBatch2d`
        # layers, which do not require the number of input features to be specified in the constructor.
        # During `__init__`, these layers do not allocate their parameters, and only do so when
        # they are first called on a tensor, at which point the number of input features is known.
        # During this first call they also change themselves to the corresponding `torch.nn.Linear` etc.

        # Finally, add the final Linear output layer with `MNIST.LABELS` units.
        model.append(torch.nn.LazyLinear(MNIST.LABELS))
        mod = torch.nn.Sequential(*model)
        super().__init__(mod)


def main(args: argparse.Namespace) -> dict[str, float]:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads, args.recodex)
    npfl138.global_keras_initializers()
    

    # Load the data and create dataloaders.
    mnist = MNIST()

    train = torch.utils.data.DataLoader(Dataset(mnist.train), batch_size=args.batch_size, shuffle=True)
    dev = torch.utils.data.DataLoader(Dataset(mnist.dev), batch_size=args.batch_size)

    # Create the model and train it.
    model = Model(args)

    model.configure(
        optimizer=torch.optim.Adam(model.parameters()),
        loss=torch.nn.CrossEntropyLoss(),
        metrics={"accuracy": torchmetrics.Accuracy("multiclass", num_classes=MNIST.LABELS)},
        logdir=npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args)),
    )

    logs = model.fit(train, dev=dev, epochs=args.epochs)

    # Return development metrics for ReCodEx to validate.
    return {metric: value for metric, value in logs.items() if metric.startswith("dev:")}


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
