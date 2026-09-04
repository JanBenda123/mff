## How to run the solution

The solution can be run as specified in `README.md`. No changes were made

## Documentation

Not really sure about what should I write here. I just followed instructions in the code to complete the handout, using `clientSession` for action triggered by user, `eventSession` for async replies and using `synchronized` whenever I felt there was a possibility for race condition.

I have added three minor features.

- `Client.getBalance` which synchronously queries `Bank` for the account balance
- Offer discovery - upon entering the market client asks all participants to post their offers via `offerTopic`.
- `Bank` manage account balance. If client does not have the coverage, it will respond by sending $0 to the seller
