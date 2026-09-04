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
parser.add_argument("--seed", default=None, type=int, help="Random seed.")
parser.add_argument("--threads", default=1, type=int, help="Maximum number of threads to use.")
# For these and any other arguments you add, ReCodEx will keep your default value.
parser.add_argument("--batch_size", default=10, type=int, help="Batch size.")
parser.add_argument("--episodes", default=200, type=int, help="Training episodes.")
parser.add_argument("--hidden_layer_size", default=128, type=int, help="Size of hidden layer.")
parser.add_argument("--learning_rate", default=0.0045, type=float)

class Agent:
    # Use an accelerator if available.
    device = npfl138.trainable_module.get_auto_device()

    def __init__(self, env: npfl138.rl_utils.EvaluationEnv, args: argparse.Namespace) -> None:
        # TODO: Create a suitable model of the policy. Note that the shape
        # of the observations is available in `env.observation_space.shape`
        # and the number of actions in `env.action_space.n`.
        #
        # Apart from the policy network defined in `reinforce` assignment, you
        # also need a value network for computing the baseline, returning
        # a single output with no activation.
        #
        # Using Adam optimizer for both models is a good default.
        #raise NotImplementedError()
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

        self._policy_optimizer = torch.optim.Adam(self._policy.parameters(), args.learning_rate)

        self._baseline = torch.nn.Sequential(torch.nn.Linear(no_of_inp, no_of_hidden),torch.nn.ReLU(),torch.nn.Linear(no_of_hidden, no_of_hidden),torch.nn.ReLU(),torch.nn.Linear(no_of_hidden, 1)).to(self.device)

        self._baseline_optimizer = torch.optim.Adam(self._baseline.parameters(), args.learning_rate)


        # TODO: Define the loss (most likely some `torch.nn.*Loss`).
        self._loss = torch.nn.CrossEntropyLoss(reduction="none")
        

    # The `npfl138.rl_utils.typed_torch_function` automatically converts input arguments
    # to PyTorch tensors of given type, and converts the result to a NumPy array.
    @npfl138.rl_utils.typed_torch_function(device, torch.float32, torch.int64, torch.float32)
    def train(self, states: torch.Tensor, actions: torch.Tensor, returns: torch.Tensor) -> None:
        # TODO: Perform training.
        # You should:
        # - compute the predicted baseline using the baseline model,
        # - train the policy model, using `returns` - `predicted_baseline` as
        #   advantage estimate,
        # - train the baseline model to predict `returns`.
        #
        # Note that predicting returns in 0-500 range is challenging for the network, given
        # that the default initialization tries to keep variance -- it might be helpful for
        # the network if you predict returns in a smaller range.
        #raise NotImplementedError()

        pre_base = self._baseline(states).squeeze()

        advantage = (returns - pre_base).detach()
        log_probs = torch.nn.functional.log_softmax(self._policy(states), dim=-1)
        sele_log_probs = log_probs[range(len(actions)), actions]
        policyLoss = (-1*(sele_log_probs*advantage)).mean()

        #self._policy_optimizer.detach()
        self._policy_optimizer.zero_grad()
        
        policyLoss.backward()
        torch.nn.utils.clip_grad_norm_(self._policy.parameters(), 1)
        self._policy_optimizer.step()

        self._baseline_optimizer.zero_grad()
        baseloss = torch.nn.functional.mse_loss(pre_base, returns)
        baseloss.backward()
        torch.nn.utils.clip_grad_norm_(self._baseline.parameters(), 1)
        self._baseline_optimizer.step()

    @npfl138.rl_utils.typed_torch_function(device, torch.float32)
    def predict(self, states: torch.Tensor) -> np.ndarray:
        # TODO(reinforce): Define the prediction method returning policy probabilities.
        #raise NotImplementedError()
        if states.ndim == 1:
            states=states.unsqueeze(0)

        with torch.no_grad():
            logits=self._policy(states)
        
        probabilities=torch.nn.functional.softmax(logits, dim=-1)
        return probabilities




def make_returns(rewards: np.ndarray) -> np.ndarray:
    returns=np.zeros_like(rewards)
    returns[-1]=rewards[-1]
    for i in range(len(rewards)-2,-1,-1):
        returns[i]=rewards[i]+returns[i+1]
    returns=(returns-returns.mean())/(returns.std()+1e-9)
    return returns

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
                # TODO(reinforce): Choose `action` according to probabilities
                # distribution (see `np.random.choice`), which you
                # can compute using `agent.predict` and current `state`.
                action=np.random.choice(len(agent.predict([state])[0]), p=agent.predict([state])[0])
                
                next_state, reward, terminated, truncated, _ = env.step(action)
                done=terminated or truncated

                states.append(state)
                actions.append(action)
                rewards.append(reward)

                state=next_state

                """next_state, reward, terminated, truncated, _ = env.step(action)
                done = terminated or truncated

                states.append(state)
                actions.append(action)
                rewards.append(reward)

                state = next_state"""

            # TODO(reinforce): Compute returns by summing rewards.
            returns=make_returns(np.array(rewards))
            

            # TODO(reinforce): Append states, actions and returns to the training batch.
            batch_states.append(states)
            batch_actions.append(actions)
            batch_returns.append(returns)

        # TODO(reinforce): Train using the generated batch.
        batch_states = np.concatenate(batch_states)
        batch_actions = np.concatenate(batch_actions)
        batch_returns = np.concatenate(batch_returns)


        batch_states = torch.from_numpy(batch_states)
        batch_actions = torch.from_numpy(batch_actions)
        batch_returns = torch.from_numpy(batch_returns)
        #agent.train(
        agent.train(batch_states, batch_actions, batch_returns)

    # Final evaluation
    while True:
        state, done = env.reset(start_evaluation=True)[0], False
        while not done:
            # TODO(reinforce): Choose a greedy action.
            action = np.argmax(agent.predict([state])[0])
            state, reward, terminated, truncated, _ = env.step(action)
            done = terminated or truncated


if __name__ == "__main__":
    main_args = parser.parse_args([] if "__file__" not in globals() else None)

    # Create the environment
    main_env = npfl138.rl_utils.EvaluationEnv(gym.make("CartPole-v1"), main_args.seed, main_args.render_each)

    main(main_env, main_args)
