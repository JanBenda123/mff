#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e

import argparse

import numpy as np
import torch
import torch.utils.tensorboard

import npfl138
npfl138.require_version("2526.2")
from npfl138.datasets.mnist import MNIST

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--batch_size", default=50, type=int, help="Batch size.")
parser.add_argument("--epochs", default=10, type=int, help="Number of epochs.")
parser.add_argument("--hidden_layer_size", default=100, type=int, help="Size of the hidden layer.")
parser.add_argument("--learning_rate", default=0.1, type=float, help="Learning rate.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
parser.add_argument("--seed", default=42, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
# If you add more arguments, ReCodEx will keep them with your default values.


class Model(torch.nn.Module):
    def __init__(self, args: argparse.Namespace) -> None:
        super().__init__()
        self._args = args

        self._W1 = torch.nn.Parameter(
            torch.randn(MNIST.C * MNIST.H * MNIST.W, args.hidden_layer_size) * 0.1,
            requires_grad=True,  # This is the default.
        )
        self._b1 = torch.nn.Parameter(torch.zeros(args.hidden_layer_size))

        # DONE(sgd_backpropagation): Create the rest of the parameters:
        # - _W2, which is a parameter of size `[args.hidden_layer_size, MNIST.LABELS]`,
        #   initialized to `torch.randn` value with standard deviation 0.1,
        # - _b2, which is a parameter of size `[MNIST.LABELS]` initialized to zeros.
        self._W2 = torch.nn.Parameter(
            torch.randn(args.hidden_layer_size, MNIST.LABELS) * 0.1,
        )
        self._b2 = torch.nn.Parameter(torch.zeros(MNIST.LABELS))

    def forward(self, inputs: torch.Tensor) -> tuple[torch.Tensor, torch.Tensor, torch.Tensor]:
        # DONE(sgd_backpropagation): Define the computation of the network. Notably:
        # - start by casting the input uint8 images to float32 using `.to(torch.float32)`,
        # - then divide the tensor by 255 to normalize it to the `[0, 1]` range,
        # - then reshape it to the shape `[inputs.shape[0], -1]`;
        #   the -1 is a wildcard which is computed so that the number
        #   of elements before and after the reshape is preserved,
        # - then multiply it by `self._W1` and then add `self._b1`,
        # - apply `torch.tanh`,
        # - finally, multiply the result by `self._W2` and then add `self._b2`.
        x = inputs.to(torch.float) /255
        x = x.reshape([inputs.shape[0], -1])
        in_layer=x
        x = x @ self._W1 +self._b1
        x = torch.tanh(x)
        hid_layer=x
        x = x @ self._W2 +self._b2

        # DONE: In order to support manual gradient computation, you should
        # return not only the output layer, but also the hidden layer after applying
        # tanh, and the input layer after reshaping.

        return in_layer, hid_layer, x
    



    def train_epoch(self, dataset: MNIST.Dataset) -> None:
        self.train()
        for batch in dataset.batches(self._args.batch_size, shuffle=True):
            # The batch contains
            # - batch["images"] with shape [?, MNIST.C, MNIST.H, MNIST.W]
            # - batch["labels"] with shape [?]
            # Size of the batch is `self._args.batch_size`, except for the last, which
            # might be smaller.

            # DONE(sgd_backpropagation): Start by moving the batch data to the device where the model is.
            # This is needed, because the data is currently on CPU, but the model might
            # be on a GPU. You can move the data using the `.to(device)` method, and you
            # can obtain the device of the model using for example `self._W1.device`.
            images = batch["images"].to(self._W1.device)
            labels = batch["labels"].to(self._W1.device)

            # DONE: Contrary to `sgd_backpropagation`, the goal here is to compute
            # the gradient manually, without calling `.backward()`. ReCodEx disables
            # PyTorch automatic differentiation during evaluation.
            #
            # Start by computing the input layer, the hidden layer, and the output layer
            # of the batch images using `self(...)`.
            inputs, hidden, logits = self(images)

            # DONE(sgd_backpropagation): Compute the probabilities of the batch images using `torch.softmax`.
            probabilities = torch.softmax(logits, dim=1)

            # Compute the gradient of the loss with respect to all
            # parameters. The loss is computed as in `sgd_backpropagation`.
            labels = torch.nn.functional.one_hot(labels.to(torch.int64),num_classes=MNIST.LABELS)
            loss = -torch.mean(torch.sum(labels * torch.log(probabilities), dim=1))
            parameters = [self._W1, self._b1, self._W2, self._b2]

            # During the gradient computation, you will need to compute
            # a batched version of a so-called outer product
            #   `C[a, i, j] = A[a, i] * B[a, j]`,
            # which you can achieve by using for example
            #   `A[:, :, torch.newaxis] * B[:, torch.newaxis, :]`
            # or with
            #   `torch.einsum("bi,bj->bij", A, B)`.
            dz = probabilities - labels
            db2 = torch.mean(dz, dim=0)
            dW2 = torch.mean((hidden[:, :, torch.newaxis] * dz[:, torch.newaxis, :]), dim=0)
            dh = (dz @ self._W2.T) * (1-hidden**2)
            db1 = torch.mean(dh, dim=0)
            dW1 =  torch.mean((inputs[:, :, torch.newaxis] * dh[:, torch.newaxis, :]), dim=0)

            gradients = [dW1, db1, dW2, db2]
            with torch.no_grad():
                for parameter, gradient in zip(parameters, gradients):
                    # DONE: Perform the SGD update with learning rate `self._args.learning_rate`
                    # for the parameter and computed gradient. You can modify the
                    # parameter value directly with `-=`, or you can use `parameter.sub_`.
                    parameter -= self._args.learning_rate * gradient 


    def evaluate(self, dataset: MNIST.Dataset) -> float:
        self.eval()
        with torch.no_grad():
            # Compute the accuracy of the model prediction
            correct = 0
            for batch in dataset.batches(self._args.batch_size):
                # Compute the logits of the batch images as in the training,
                # and then convert them to Numpy with `.numpy(force=True)`.
                images = batch["images"].to(self._W1.device)
                labels = batch["labels"].to(self._W1.device)
                logits = self(images)[-1]
                prediction = torch.argmax(logits, dim=1)

                # (sgd_backpropagation): Evaluate how many batch examples were predicted
                # correctly and increase `correct` variable accordingly, assuming
                # the model predicts the class with the highest logit/probability.
                correct += torch.sum(prediction == labels).item()

        return correct / len(dataset)


def main(args: argparse.Namespace) -> tuple[float, float]:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads, args.recodex)
    npfl138.global_keras_initializers()

    # Load raw data.
    mnist = MNIST()

    # Create the TensorBoard writer
    writer = torch.utils.tensorboard.SummaryWriter(
        npfl138.format_logdir("logs/{file-}{timestamp}{-config}", **vars(args))
    )

    # Create the model
    model = Model(args)

    # Try using an accelerator if available.
    if torch.cuda.is_available():
        model = model.to(device="cuda")
    elif torch.mps.is_available():
        model = model.to(device="mps")
    elif torch.xpu.is_available():
        model = model.to(device="xpu")

    for epoch in range(args.epochs):
        # TODO(sgd_backpropagation): Run the `train_epoch` with `mnist.train` dataset
        model.train_epoch(mnist.train)

        # TODO(sgd_backpropagation): Evaluate the dev data using `evaluate` on `mnist.dev` dataset
        dev_accuracy = model.evaluate(mnist.dev)
        print(f"Dev accuracy after epoch {epoch + 1} is {100 * dev_accuracy:.2f}", flush=True)
        writer.add_scalar("dev/accuracy", 100 * dev_accuracy, epoch + 1)

    # TODO(sgd_backpropagation): Evaluate the test data using `evaluate` on `mnist.test` dataset
    test_accuracy = model.evaluate(mnist.test)
    print(f"Test accuracy after epoch {epoch + 1} is {100 * test_accuracy:.2f}", flush=True)
    writer.add_scalar("test/accuracy", 100 * test_accuracy, epoch + 1)

    # Return dev and test accuracies for ReCodEx to validate.
    return dev_accuracy, test_accuracy


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    main(main_args)
