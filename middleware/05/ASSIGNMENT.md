# Assignment 05 - Hazelcast

Implement a distributed application for providing documents to users, with features such as tracking view count, comments, and favorite lists.

The application will consist of a cluster of servers responsible for all the data and a client application.

For the application to achieve a low response time, all data should be kept in memory on the server. To do this, we will use Hazelcast Platform. Parts of the implementation are provided in the `documents` directory.

## Prerequisites

- The basic setup of a Hazelcast cluster.
- Understand the `Map` distributed data structure in Hazelcast, its properties, interface, and configuration.
- Understand the options to process map entries on the cluster (`EntryProcessor`) and how to prevent data races.
- Know how to submit tasks from a client to the cluster (`ExecutorService`).

The following links may be particularly relevant:

- [Overview](https://docs.hazelcast.com/hazelcast/5.4/),
- [Map](https://docs.hazelcast.com/hazelcast/5.4/data-structures/map) and its [javadoc](https://docs.hazelcast.org/docs/5.4.0/javadoc/com/hazelcast/map/IMap.html),
- [Java Client](https://docs.hazelcast.com/hazelcast/5.4/clients/java),
- [Entry Processor](https://docs.hazelcast.com/hazelcast/5.4/computing/entry-processor) and its [javadoc](https://docs.hazelcast.org/docs/5.4.0/javadoc/com/hazelcast/map/EntryProcessor.html).
- [Executor Service](https://docs.hazelcast.com/hazelcast/5.4/computing/executor-service) and its [javadoc](https://docs.hazelcast.org/docs/5.4.0/javadoc/com/hazelcast/core/IExecutorService.html).

## Your Task

Extended the implementation in the `documents` directory. The client application must provide the following functionality and satisfy the requirements below.

- The server part of the application consists of one or more members of the Hazelcast cluster. The client application is launched with a specified user name. The client displays a simple command prompt and performs the commands entered by the user.
- Implement a **cache for documents** that are viewed by the users. The client can request a document by the document name, using the `s` command.
    - Suppose that the application needs to perform expensive computations to generate the document. For this task, we only simulate the long computation by waiting a few seconds. There is no need to change this code.
    - The documents should be generated on the cluster (not on the clients). The documents should be stored in a cache in the cluster, so subsequent access to the same document (by any user) should be fast. However, assume that the documents may be large, so not all documents ever generated will fit into memory at the same time. It is not a problem if a document has to be generated again due to cache eviction.
- For each user, remember the name of the last document that has been shown to them (we will call this the **selected document**). This value should be stored in the cluster, not on the clients - that means, it will be remembered even if the user quits the client application.
- For every document, store the number of **views** (number of times it has been shown). This number should be exact (under normal operation). Users can view this number by first selecting the document, and then using an `i` command.
- For every document, store a **list of comments**. Users can use the `c` command to enter a comment that is added to the list of comments for the selected document. The `i` command should display the view count and all the comments of the selected document. All comments are visible to all users.
- For every user, store a list of names of their **favorite documents**. The user can add the name of the selected document to the list by the `a` command and remove it by the `r` command. The `l` command will show the names in the list of favorites.
    - The `n` command can be used to quickly show documents in the favorite list. It selects and shows the next (relative to the selected document) document in the list of favorites. Using this command repeatedly will cyclically show all the favorite documents. This command should have the same effects as the `s` command (putting the document into cache, increasing view count, storing the name of the selected document).
- You may assume the number of comments and favorites is small and the cluster will have more than enough memory to store all comments, view counts, and user data.
- **Configure** the distributed maps that you used to store the data. **Compare** the different requirements that the application has on the maps in terms of reliability and access speed. Explain, why the default configuration might not be the best fit when using the map as a cache for the documents. Choose a configuration that might be better and explain the benefits. Submit your answers in a file named `SOLUTION.md`.

## Notes

### Application Structure

- The clients and cluster members (servers) are applications that are started independently.
- Documents should be generated on the servers and all data should be stored on the servers, not on clients.
- If one user quits and restarts the client, it should continue where it left off.
- A user can connect using multiple clients with the same username at the same time. The commands should work the same regardless of which client they are entered in.

### Data

- Implement a cache for documents.
- Store data per document:
    - access count,
    - comments.
- Store data per user:
    - selected document name,
    - list of favorite document names.
- Use multiple distributed hash maps indexed by user names and document names.
- Decide what type of values are stored in a map (string/list/custom objects).

### Configuration

- Hazelcast allows configuring parameters of maps:
    - backup,
    - evicition,
    - data format.
- Cache and data have different access patterns and different requirements.
- Look through the features of `Map` in the Hazelcast manual.

### Scope

To keep the assignment simple, you don't need to consider:

- Security - not available in the open-source edition of Hazelcast.
- Persistent data storage.
- JCache API - using a `Map` is sufficient.
- Deploying user code - you can use the same classpath for both servers and clients.

### Tips

- Avoid race conditions.
    - Naively running `viewCountMap.put(documentName, viewCountMap.get(documentName) + 1)` on the client is not correct. This is because the increment above is not atomic.
- Hazelcast executes certain tasks, such as entry processors, on partition threads. These are not suited for long-running computations because that may create a bottleneck in the application.
- Hazelcast supports other data structures, such as lists, but they are not partitioned and are not needed for this task.
- Create only a fixed number of distributed data structures (i.e., do not create a new map for each user, each document, etc.).

## Submission Instructions

- Submit in your GitLab repository by committing all necessary files and pushing the tag `done-05`.
- In your submission, please include:
    - A working implementation (source code) of all the subtasks. Do not commit generated files.
    - **Documentation** and **reasoning** about the chosen features and configuration.
        - Submit this in a file named `SOLUTION.md`.
    - If you change the build scripts: include instructions on how to build and run your code.
