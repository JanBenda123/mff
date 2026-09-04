# Assignment 03 - JMS

Implement an online trading application. Each running instance communicates with other running instances and also with the bank.

The assignment describes a message-based communication protocol that implements a simple trading system. Understanding the assignment requires no special knowledge.

Parts of the implementation are provided in the directory `trading`.

## Prerequisites

The chosen messaging standard is JMS (Java Message Service), using the ActiveMQ Artemis implementation. The following knowledge is needed for the implementation:

- Basic classes and methods provided by the JMS specification, and their application (creating objects of type `Connection`, `Session`, `Queue`, `Topic` etc.).
- The method of implementing message producers and consumers (`MessageProducer` and `MessageConsumer` objects).
- The method of creating and parsing messages of different types (`TextMessage`, `ObjectMessage`, `MapMessage` etc.), knowledge of criteria for choosing an appropriate message type.
- Executing the JMS infrastructure (service provider).

- Reference: the JMS spec https://jcp.org/aboutJava/communityprocess/mrel/jsr343/index.html (159 pages).

## Explore the Sources

The source code (directory `trading`) is a base for your solution. You will need to design the application protocol and implement the missing parts.

### Bank

- A standalone Java application.
- Consumes messages from queue `BankQueue`.
- Supports the following commands:
    - Create a new account -- the bank responds with an account number.
    - Send money -- sends a confirmation message to the sender and also the receiver.

### Goods

- A simple data class representing goods (it has a name and a price).

### Client

- A standalone Java application.
- Has a randomly generated list of goods to sell.
- Creates an account by sending a message to the bank.
- Sets up some receivers.
- Missing parts need to be implemented.
- Enters a loop to process commands from the standard input, accepting the commands:
    - `p` - publish the list of goods to other clients
    - `l` - print goods lists of other clients
    - `b` - buy goods -- asks for seller name and goods name

## Your Task

Starting from the provided code, finish the implementation of the following application:

A distributed application, where multiple clients can trade goods with each other, and a bank that keeps track of money transactions.

- Implement a client of a trading system, starting from a provided partial implementation.
- Clients must communicate with each other and with the bank we provide.
- Clients publish their lists of goods and buy goods from each other on user request.
- The payments go through the bank.
- The clients communicate with each other and with the bank using JMS.

### The Client Application

1. Upon startup, the client application creates a list of goods, that the user offers to sell. Each item has a random price. This list should be sent as a message via the `Offers` topic to other running instances.
2. **User accounts.** Upon startup, the client application should also send a message to the bank, requesting account creation. The bank will respond with a message containing the account number. Some parts of the implementation are provided. Finish the implementation and extend it with the following features:
    - **Keep proper account balances.** For simplicity, newly created accounts can have a fixed balance. The balance is updated when money is transferred. If the sender's account does not have enough money to be transferred, the bank should refuse the transfer.
    - **Support for account balance queries.** Add a new user command to the client to show the current balance.
3. **Showing a list of offered goods.** The application shows the list of goods and prices offered by the other running instances. This list should be updated, whenever a new message from the `Offers` topic arrives, and any items no longer offered by the sending instance should be removed from the list. Some parts of the implementation are provided. Finish the implementation, and extend it with the following feature:
  - **Improve the availability of the goods offered.** After a new client connects, it should immediately see offers of all other clients without any user action on those clients.
4. **Buying goods.** The client application can be used to buy goods from other instances.
    - A sale is realized as follows:
        - The buyer sends a message to the seller, containing the name of the requested item and the buyer's account number.
        - The seller sends a message to the buyer, containing the seller's account number, or indicating a refusal to sell (the item was already sold etc.).
        - The buyer sends a message to the bank, requesting transfer of an appropriate amount of money from the buyer's account to the seller's account.
        - The bank sends a message to the seller, notifying the seller of the money transfer from the buyer's account.
        - The seller removes the item from its list and sends a message to the buyer, confirming the finished sale.
        - The buyer will not offer the bought item for sale. Therefore, after a successful sale, the item will no longer be available anywhere. If the sale fails for some reason, the item is not sold and the seller must offer the item for sale again.
    - **More robust sell/buy protocol.** Some parts of the implementation are provided. Finish the implementation, and extend it with the following features:
        - Consider the buyer's account balance. Refuse the sale if the buyer does not have enough money. In that case, the item should return to the seller's offer and be available for others again.
        - Considering that the buyer may transfer less money than the actual price of the required item (assuming the price is fixed). In that case, the sale should be canceled as well.

### Implementation Requirements

- You are to choose the appropriate message types. (For example, the provided bank implementation uses `TextMessage` and `MapMessage`, you are free to choose different types for the communication between the client instances.) The messages used to implement the functionality may contain further information that might be needed but not mentioned above.
- The implementation should behave reasonably when possible -- refuse to sell an item already requested by a different buyer, etc.
- Always use the correct `Session`. In the client, you need two different `Session` instances
    - The first for asynchronous message handling, the second for synchronous (user-triggered) messages and waiting for their replies
    - A session cannot be used for both synchronous and asynchronous waiting.
    - `MessageProducer` from one `Session` should not be used in a different session
    - We need a dedicated `MessageProducer` for each `Session`.
- Do not forget the synchronization of access to shared data.
    - If multiple threads can access the same object and at least one thread can modify it, then locking is required.
    - A simple `synchronized` block is enough.
    - Keep the synchronized blocks small. Do not put long-running or potentially blocking operations, such as sending or receiving messages, into the synchronized block.

## Submission Instructions

- Submit in your Gitlab repository by committing all necessary files and pushing the tag `done-03`.
- In your submission, please include:
    - A working implementation (source code) of all the subtasks. Do not commit generated files.
    - Documentation: **Design** and **reasoning** about the communication **protocol** used.
    - If you change the build scripts: instructions to build and run your code (how to run the client, the bank etc).

## Notes

### Common Problems

- Using a wrong JMS session.
    - Make sure to use the correct JMS session.
    - This is the kind of error that may cause problems on random occasions, so you have to be careful. It is not enough that the application seems to work.
- Missing synchronization.
    - Make sure to synchronize all access to shared data from multiple threads.
    - This is the kind of error that may cause problems on random occasions, so you have to be careful. It is not enough that the application seems to work.
- Inability to buy goods after the previous attempt fails.
    - When the buyer did not have enough money.
    - Make sure to return the goods to the available state.
- No handling of "exceptional" cases.
    - For example, entering a wrong client name or goods name.
- Problem with recognizing message type.
    - Use `equals()` instead of `==` for `String` comparison.

### Exceptions at Client Start-Up

- Probably a message in the broker queue.
- Solution:
    1. Stop the bank, the client, and the broker
    2. Remove directory `data` and `activemq-data`
    3. Restart the broker and the bank.

### Provided Parts of the Solution

- `Bank.java`: bank implementation.
    - Supports creating accounts and transferring money, but does not keep account balances.
- `Client.java`: skeleton of the client.
    - Many parts already prepared:
        - JMS initialization, data structures, interaction with the user, and communication with the bank.
    - What is left to do: communication between clients.
        - Sending and receiving goods offers.
        - Buying goods (on user's request).
        - Selling goods (asynchronous reaction to other clients' requests).
        - The places are marked `TODO` in the code.

### How to Offer Goods

- Initialize a suitable channel for transferring offers and create a receiver of its messages.
    - Step 1 in the `connect()` method.
- Implement sending offers.
    - The `publishGoodsList()` method.
- Implement receiving offers.
    - The `processOffer()` method.

### How to Process Trades

- Initialize a suitable channel for receiving sale requests and create a receiver of its messages.
    - Step 2 in the `connect()` method.
- Choose suitable message types for communication between clients.
    - `MapMessage`? `ObjectMessage`?
- Sending messages requesting a sale.
    - Step 1 in the `buy()` method.
- Receiving messages requesting a sale.
    - Step 1 in the `processSale()` method.
- Reserve the requested item.
    - Step 2 in the `processSale()` method.
- Accept or refuse the sale.
    - Step 3 in the `processSale()` method.
- Receive the response to the sale request message.
    - Step 2 in the `buy()` method
- Money transfer request for the bank.
    - Step 3 in the `buy()` method (already implemented).
- After receiving the transaction notification from the bank (implemented), send a finished sale confirmation.
    - Step 3 in the `processBankReport()` method.
- Receive the confirmation and notify the user.
    - Step 4 in the `buy()` method,
