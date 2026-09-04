#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e

import argparse

import numpy as np

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--data_path", default="numpy_entropy_data_4.txt", type=str, help="Data distribution path.")
parser.add_argument("--model_path", default="numpy_entropy_model_4.txt", type=str, help="Model distribution path.")
parser.add_argument("--recodex", default=False, action="store_true", help="Evaluation in ReCodEx.")
# If you add more arguments, ReCodEx will keep them with your default values.


def main(args: argparse.Namespace) -> tuple[float, float, float]:
    # TODO: Load data distribution, each line containing a datapoint -- a string.
    
    dd_dict = dict()
    with open(args.data_path, "r") as data:
        for line in data:
            line = line.rstrip("\n")
            # TODO: Process the line, aggregating data with built-in Python
            # data structures (not NumPy, which is not suitable for incremental
            # addition and string mapping).
            if line in dd_dict:
                dd_dict[line] += 1
            else:
                dd_dict[line] = 1
    dd_dict = dict(sorted(dd_dict.items()))


    # TODO: Create a NumPy array containing the data distribution. The
    # NumPy array should contain only data, not any mapping. Alternatively,
    # the NumPy array might be created after loading the model distribution.
    
    dd = np.array(list(dd_dict.values()))
    dd = dd / np.sum(dd)


    # TODO: Load model distribution, each line `string \t probability`.
    dm_dict = dict()
    with open(args.model_path, "r") as model:
        for line in model:
            line = line.rstrip("\n")
            # TODO: Process the line, aggregating using Python data structures.
            line = line.split("\t")
            dm_dict[line[0]] = float(line[1])
            if float(line[1]) < 0 or float(line[1]) > 1:
                print(float(line[1]), "error") 
    dm_dict = dict(sorted(dm_dict.items()))
    dm = np.array(list(dm_dict.values()))
    dm = dm / np.sum(dm)
    
            

    # TODO: Create a NumPy array containing the model distribution.

    # TODO: Compute the entropy H(data distribution). You should not use
    # manual for/while cycles, but instead use the fact that most NumPy methods
    # operate on all elements (for example `*` is vector element-wise multiplication).
    entropy = -np.sum(dd*np.log(dd))

    # TODO: Compute cross-entropy H(data distribution, model distribution).
    # When some data distribution elements are missing in the model distribution,
    # the resulting crossentropy should be `np.inf`.
    
    

    crossentropy = 0
    if set(dd_dict.keys()) <= set(dm_dict.keys()):
        mask = [k in dd_dict.keys() for k in dm_dict.keys()]
        masked_dm = dm[mask]
        crossentropy = -np.sum(dd*np.log(masked_dm))
    else:
        crossentropy = np.inf


    # TODO: Compute KL-divergence D_KL(data distribution, model_distribution),
    # again using `np.inf` when needed.
    kl_divergence = crossentropy - entropy

    # Return the computed values for ReCodEx to validate.
    return entropy, crossentropy, kl_divergence


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)
    entropy, crossentropy, kl_divergence = main(main_args)
    print(f"Entropy: {entropy:.2f} nats")
    print(f"Crossentropy: {crossentropy:.2f} nats")
    print(f"KL divergence: {kl_divergence:.2f} nats")
