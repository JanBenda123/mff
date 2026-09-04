#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse

import gymnasium as gym
import numpy as np
import torch
import torch.nn.functional as F

import npfl138
npfl138.require_version("2526.11")

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--recodex", default=False, action="store_true", help="Running in ReCodEx")
parser.add_argument("--render_each", default=0, type=int, help="Render some episodes.")
parser.add_argument("--seed", default=None, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
# For these and any other arguments you add, ReCodEx will keep your default value.
parser.add_argument("--batch_size", default=10, type=int, help="Batch size.")
parser.add_argument("--episodes", default=2000, type=int, help="Training episodes.")
parser.add_argument("--hidden_layer_size", default=128, type=int, help="Size of hidden layer.")
parser.add_argument("--learning_rate", default=0.003, type=float)


def make_returns(rewards: np.ndarray) -> np.ndarray:
    returns=np.zeros_like(rewards)
    returns[-1]=rewards[-1]
    for i in range(len(rewards)-2,-1,-1):
        returns[i]=rewards[i]+returns[i+1]
    returns=(returns-returns.mean())/(returns.std()+1e-9)
    return returns


class Agent:
    # Use an accelerator if available.
    device = npfl138.trainable_module.get_auto_device()

    def __init__(self, env: npfl138.rl_utils.EvaluationEnv, args: argparse.Namespace) -> None:
        # TODO: Create a suitable model of the policy. Note that the shape
        # of the observations is available in `env.observation_space.shape`
        # and the number of actions in `env.action_space.n`.
        no_of_inp =env.observation_space.shape[0]
        no_of_out =env.action_space.n
        no_of_hidden =args.hidden_layer_size
  
        self._policy =torch.nn.Sequential(
            torch.nn.Linear(no_of_inp, no_of_hidden),
            torch.nn.ReLU(),
            torch.nn.Linear(no_of_hidden, no_of_hidden),
            torch.nn.ReLU(),
            torch.nn.Linear(no_of_hidden, no_of_out),
        ).to(self.device)

        # TODO: Define an optimizer; using `torch.optim.Adam` optimizer is a good default.
        self._optimizer =torch.optim.Adam(self._policy.parameters(), lr=args.learning_rate)

        # TODO: Define the loss (most likely some `torch.nn.*Loss`).
        self._loss = torch.nn.CrossEntropyLoss(reduction="none")

    # The `npfl138.rl_utils.typed_torch_function` automatically converts input arguments
    # to PyTorch tensors of given type, and converts the result to a NumPy array.
    @npfl138.rl_utils.typed_torch_function(device, torch.float32, torch.int64, torch.float32)
    def train(self, states: torch.Tensor, actions: torch.Tensor, returns: torch.Tensor) -> None:
        # TODO: Perform training, using the loss from the REINFORCE algorithm.
        # The easiest approach is to construct the cross-entropy loss with
        # `reduction="none"` argument and then weight the losses of the individual
        # examples by the corresponding returns.

        logits = self._policy(states)
        log_probs = F.log_softmax(logits, dim=-1)
        selected_log_probs = log_probs[range(len(actions)), actions]
        loss = -(selected_log_probs * returns).mean()

        self._optimizer.zero_grad()
        loss.backward()
        torch.nn.utils.clip_grad_norm_(self._policy.parameters(), 1)
        self._optimizer.step()
        #raise NotImplementedError()

    @npfl138.rl_utils.typed_torch_function(device, torch.float32)
    def predict(self, states: torch.Tensor) -> np.ndarray:
        # TODO: Define the prediction method returning policy probabilities.

        if states.ndim == 1:
            states=states.unsqueeze(0)

        with torch.no_grad():
            logits=self._policy(states)
        
        probabilities=F.softmax(logits, dim=-1)
        return probabilities
        #raise NotImplementedError()


def main(env: npfl138.rl_utils.EvaluationEnv, args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Construct the agent.
    agent = Agent(env, args)

    # Training
    for _ in range(args.episodes // args.batch_size):
        batch_states, batch_actions, batch_returns = [], [], []
        for _ in range(args.batch_size):
            # Perform an episode.
            states, actions, rewards = [], [], []
            state, done = env.reset()[0], False
            while not done:
                # TODO: Choose `action` according to probabilities
                # distribution (see `np.random.choice`), which you
                # can compute using `agent.predict` and current `state`.
                pr=agent.predict([state])[0]
                action = np.random.choice(len(pr), p=pr)
                
                next_state, reward, terminated, truncated, _ = env.step(action)
                done = terminated or truncated

                states.append(state)
                actions.append(action)
                rewards.append(reward)

                state = next_state

            # TODO: Compute returns by summing rewards.
            returns=make_returns(np.array(rewards))


            # TODO: Append states, actions and returns to the training batch.
            batch_states.append(states)
            batch_actions.append(actions)
            batch_returns.append(returns)

        # TODO: Train using the generated batch.
        batch_states = np.concatenate(batch_states)
        batch_actions = np.concatenate(batch_actions)
        batch_returns = np.concatenate(batch_returns)

        batch_states = np.array(batch_states)
        batch_actions = np.array(batch_actions)
        batch_returns = np.array(batch_returns)

        batch_states = torch.from_numpy(batch_states).to(agent.device)
        batch_actions = torch.from_numpy(batch_actions).to(agent.device)
        batch_returns = torch.from_numpy(batch_returns).to(agent.device)
        #agent.train(
        agent.train(batch_states, batch_actions, batch_returns)

    # Final evaluation
    while True:
        state, done = env.reset(start_evaluation=True)[0], False
        while not done:
            # TODO: Choose a greedy action.
            action = np.argmax(agent.predict([state])[0])
            state, reward, terminated, truncated, _ = env.step(action)
            done = terminated or truncated


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)

    # Create the environment
    main_env = npfl138.rl_utils.EvaluationEnv(gym.make("CartPole-v1"), main_args.seed, main_args.render_each)

    main(main_env, main_args)
