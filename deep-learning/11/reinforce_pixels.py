#!/usr/bin/env python3
# Made by:
# Jan Benda             465aae63-030f-11eb-9574-ea7484399335
# Veronika Borková      8f7b6d5d-adcc-41af-9ea0-6744c950079e
import argparse

import gymnasium as gym
import numpy as np
import torch

import npfl138
npfl138.require_version("2526.11")

parser = argparse.ArgumentParser()
# These arguments will be set appropriately by ReCodEx, even if you change them.
parser.add_argument("--recodex", default=False, action="store_true", help="Running in ReCodEx")
parser.add_argument("--render_each", default=0, type=int, help="Render some episodes.")
parser.add_argument("--seed", default=67, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
# For these and any other arguments you add, ReCodEx will keep your default value.

import pickle
parser.add_argument("--batch_size", default=50, type=int, help="Batch size.")
parser.add_argument("--episodes", default=2200, type=int, help="Training episodes.")
parser.add_argument("--hidden_layer_size", default=128, type=int, help="Size of hidden layer.")
parser.add_argument("--learning_rate", default=0.0003 )

###

class Agent:
    # Use an accelerator if available.
    device = npfl138.trainable_module.get_auto_device()

    def __init__(self, env: npfl138.rl_utils.EvaluationEnv, args: argparse.Namespace) -> None:

        input_size = env.observation_space.shape[0]
        output_size = env.action_space.n

        self._policy = torch.nn.Sequential(
            torch.nn.Conv2d(3, 16, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Conv2d(16, 32, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Conv2d(32, 32, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Flatten(),
            torch.nn.LazyLinear(128),
            torch.nn.ReLU(),
            torch.nn.Linear(128, 128),
            torch.nn.ReLU(),
            torch.nn.Linear(128, output_size)
        ).to(self.device)

        dummmy_input = torch.zeros(1, 3, 80, 80).to(self.device)
        self._policy(dummmy_input)

        self._baseline = torch.nn.Sequential(
            torch.nn.Conv2d(3, 16, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Conv2d(16, 32, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Conv2d(32, 32, kernel_size=5, stride=2),
            torch.nn.ReLU(),
            torch.nn.Flatten(),
            torch.nn.LazyLinear(128),
            torch.nn.ReLU(),
            torch.nn.Linear(128, 128),
            torch.nn.ReLU(),
            torch.nn.Linear(128, 1)
        ).to(self.device)

        self._baseline(dummmy_input)


        # TODO: Define an optimizer. Using `torch.optim.Adam` optimizer with
        # the given `args.learning_rate` is a good default.
        self._policy_optimizer = torch.optim.Adam(self._policy.parameters(), args.learning_rate)

        self._baseline_optimizer = torch.optim.Adam(self._baseline.parameters(), args.learning_rate)

        self._loss = torch.nn.CrossEntropyLoss(reduction="none")

    # The `npfl138.rl_utils.typed_torch_function` automatically converts input arguments
    # to PyTorch tensors of given type, and converts the result to a NumPy array.
    @npfl138.rl_utils.typed_torch_function(device, torch.float32, torch.int64, torch.float32)
    def train(self, states: torch.Tensor, actions: torch.Tensor, returns: torch.Tensor) -> None:

        states = states.to(self.device)
        actions = actions.to(self.device)
        returns = returns.to(self.device)
        pred_baseline = self._baseline(states).squeeze().float()

        advantage = (returns - pred_baseline).detach()
        advantage = (advantage - advantage.mean()) / (advantage.std() + 1e-8)
        logits = self._policy(states)
        # policy_losses = self._loss(logits, actions)
        # print(policy_losses)
        log_probs = torch.nn.functional.log_softmax(logits, dim=-1)
        selected_log_probs = log_probs[range(len(actions)), actions]
        # policy_loss = -(selected_log_probs * advantage).mean()

        probs = torch.nn.functional.softmax(logits, dim=-1)
        entropy = -(probs * torch.log(probs + 1e-10)).sum(dim=1)
        policy_loss = -(selected_log_probs * advantage).mean()
        policy_loss -= 0.01 * entropy.mean()

        # weighted_losses = policy_losses * advantage
        #
        # # Final loss is mean of weighted losses
        # policy_loss = weighted_losses.mean()

        self._policy_optimizer.zero_grad()
        policy_loss.backward()
        torch.nn.utils.clip_grad_norm_(self._policy.parameters(), 1)
        self._policy_optimizer.step()

        self._baseline_optimizer.zero_grad()
        baseline_loss = torch.nn.functional.mse_loss(pred_baseline, returns)
        baseline_loss.backward()
        torch.nn.utils.clip_grad_norm_(self._baseline.parameters(), 1)
        self._baseline_optimizer.step()

    @npfl138.rl_utils.typed_torch_function(device, torch.float32)
    def predict(self, states: torch.Tensor) -> np.ndarray:
        states = states.to(self.device)

        if states.ndim == 1:
            states = states.unsqueeze(0)

        with torch.no_grad():  #
            logits = self._policy(states)

        probabilities = torch.nn.functional.softmax(logits, dim=-1)
        return probabilities



# def compute_returns(rewards: np.ndarray) -> np.ndarray:
#     returns = np.zeros_like(rewards)
#     returns[-1] = rewards[-1]
#     for i in range(len(rewards) - 2, -1, -1):
#         returns[i] = rewards[i] + returns[i + 1]
#     returns = (returns - returns.mean()) / (returns.std() + 1e-8)
#     return returns

def make_returns(rewards: np.ndarray, gamma: float = 0.98) -> np.ndarray:
    returns = np.zeros_like(rewards, dtype=np.float32)
    R = 0
    for i in reversed(range(len(rewards))):
        R = rewards[i] + gamma * R
        returns[i] = R
    return returns


####



def main(env: npfl138.rl_utils.EvaluationEnv, args: argparse.Namespace) -> None:
    # Set the random seed and the number of threads.
    npfl138.startup(args.seed, args.threads)
    npfl138.global_keras_initializers()

    # Assuming you have pre-trained your agent locally, perform only evaluation in ReCodEx
    device = npfl138.trainable_module.get_auto_device()
    if args.recodex:
        # TODO: Load the agent.
        agent = pickle.load(open("reinforce_pixels_agent.pkl", 'rb'))

        # Final evaluation.
        while True:
            state, done = env.reset(start_evaluation=True)[0], False
            while not done:
                # TODO: Choose a greedy action.
                action = np.argmax(agent.predict([torch.tensor(state.transpose(2, 0, 1))])[0])
                state, reward, terminated, truncated, _ = env.step(action)
                done = terminated or truncated

    # TODO: Perform training
    #raise NotImplementedError()
    agent = Agent(env, args)
    for _ in range(args.episodes // args.batch_size):
        batch_states, batch_actions, batch_returns = [], [], []
        for _ in range(args.batch_size):
            # Perform an episode.
            states, actions, rewards = [], [], []
            state, done = env.reset()[0], False
            state = torch.tensor(state.transpose(2, 0, 1)).unsqueeze(0).to(device)
            while not done:

                # TODO(reinforce): Choose `action` according to probabilities
                # distribution (see `np.random.choice`), which you
                # can compute using `agent.predict` and current `state`.
                pr=agent.predict(state).squeeze()

                action = np.random.choice(len(pr), p=pr)


                next_state, reward, terminated, truncated, _ = env.step(action)
                done = terminated or truncated

                states.append(state.squeeze(0).cpu().numpy())
                actions.append(action)
                rewards.append(reward)

                next_state_tensor = torch.tensor(next_state.transpose(2, 0, 1)).unsqueeze(0).to(device)
                state = next_state_tensor
                state = state.to(device)

            returns = make_returns(np.array(rewards))

            batch_states.append(states)
            batch_actions.append(actions)
            batch_returns.append(returns)

        batch_states = np.concatenate(batch_states)
        batch_actions = np.concatenate(batch_actions)
        batch_returns = np.concatenate(batch_returns)

        batch_states = torch.from_numpy(batch_states)
        batch_actions = torch.from_numpy(batch_actions)
        batch_returns = torch.from_numpy(batch_returns)

        agent.train(batch_states, batch_actions, batch_returns)
    pickle.dump(agent, open("reinforce_pixels_agent.pkl", 'wb'))


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)

    # Create the environment
    main_env = npfl138.rl_utils.EvaluationEnv(
        gym.make("npfl138/CartPolePixels-v1"), main_args.seed, main_args.render_each)

    main(main_env, main_args)
