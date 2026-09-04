# Assignment 02 - RMI

This assignment tests the basic understanding of distributed objects and remote procedure invocation (RPC).

Modify a simple provided application, which works with a graph data structure, to make use of remote objects. Measure, analyze, and answer questions about how choices in working with distributed objects can affect the performance of the application.

# Preparation

The task requires an understanding of the following:

- Definition of a remotely accessible interface (interface `java.rmi.Remote`, exception `java.rmi.RemoteException`).
- Implementation of a remotely accessible object (class `java.rmi.server.UnicastRemoteObject`, inheriting from this class, method `exportObject`)
- Connecting the client and server using the RMI registry (class `java.rmi.Naming`, the `rmiregistry` application)
- Visualizing the measured data in charts.

# Part 1 - Explore the Code

The task is based on computing distances between pairs of nodes in a graph, simulating work with dynamic data structures.

The provided Java application consists of these parts:

- Definition of a graph.
- Implementation of an algorithm to measure distance between nodes.
- A benchmark application, which:
    - Generates a random graph.
    - Runs multiple searches between random nodes and measures the time each search takes.

## Graph

The node objects are instances of the `NodeImpl` class, and implement the interface `Node`:

```java
public interface Node {
    Set<Node> getDirectSuccessors();
    Map<Node, Integer> getTransitiveSuccessors(int distance);
    void addDirectSuccessor(Node successor);
}
```

A node `V` is a direct successor of node `U` if there exists an edge from `U` to `V`. The `addDirectSuccessor(Node)` method adds the argument node to the successor set of the receiver node object. The `getDirectSuccessors()` method returns a set of all direct successors of the receiver node and is used by the distance computation algorithm. Method `getTransitiveSuccessors(int)` returns all transitively reachable successors of a node up to some distance.

The `Graph` class is a wrapper for an array of nodes.

```java
public class Graph {
    private final Node[] nodes;
}
```

The actual distance computation is done by a `Searcher` interface:

```java
public interface Searcher {
    int DISTANCE_INFINITE = -1;
    int getDistance(Node from, Node to);
    int getDistanceTransitive(int successorDistance, Node from, Node to);
}
```

This interface is implemented by the `SearcherImpl` class. The `getDistance(Node, Node)` method computes and returns the distance between nodes `from` and `to`. It uses a simple breadth-first-search algorithm to measure the distance between two nodes in the graph. If `to` is not reachable from `from`, it returns `DISTANCE_INFINITE`.

There is a variant of this method called `getDistanceTransitive`, which uses a modified algorithm described later.

## Benchmark

The `main` method is in the `Main` class. First, it generates a graph with a fixed number of nodes and randomly generated edges. Then, it runs a benchmark, selecting random pairs of nodes in the graph, measuring the distance between them and showing the time it takes to run the search.

## Part 2 - Implement and Answer

Convert the program into an RMI client-server application, implement several configurations (local measurement, remote searcher, remote nodes, both remote, transitive algorithm) and measure their performance according to the following steps.

**Notes:**

- The program should allow performing all measurements without needing to be recompiled.
- When comparing different approaches on randomly generated graphs, use the same graphs. You can measure multiple variants within one run, but if you need to run your application multiple times to get all measurements, then use a fixed random seed.

### 1. Local measurement

Explore the provided implementation of the task that works locally.

**Measure** the speed of execution on several randomly generated graphs of different sizes (this is just the first of 5 variants).

Create a chart visualizing how the time to complete a query depends on the distance between the nodes and the density of the graph (number of edges). Run the benchmarks with 1000 nodes and compare variants with 2000, 10000, and 50000 edges.

**Notes:**

- The provided implementation formats the output for viewing in the terminal. It's recommended to change the output format to separate fields by commas instead of spaces and save the output to a CSV file.
- It's recommended to process the CSV file and create the charts using a language such as Python or R, e.g., in a Jupyter Notebook. You can directly commit the rendered charts or a notebook with the rendered charts.

### 2. Remote Searcher

Create a server that provides a remotely accessible object with the `Searcher` interface. Update the `Searcher` interface so that it can be used with Java RMI. Extend the provided benchmark implementation to measure searching using the remote searcher object through the `Searcher` remote interface. The server object with the `Searcher` interface should accept node objects from the client. The nodes implement the `Node` interface, and they must **not** be remotely accessible.

**Measure** the speed of the implemented variants and show how the times depend on the distance and density (number of edges).

**Question:** How does the server `Searcher` object access the `Node` objects and the set of their successors? What parts of RMI are involved in this process?

**Notes:**

- The application will now consist of a client and a server. The client will look up a reference to the remote `Searcher` at startup using `java.rmi.Naming.lookup(path)`.
- Make sure the client application does not export any objects.
- The client should terminate normally after doing the task. Do not use `System.exit(0)`.
- Either run `rmiregistry` in the background or start the registry on the server (`createRegistry`).
- Modify the `Searcher` interface (see `Timer` from the lab activity), using the `java.rmi.Remote` interface and add the exception `java.rmi.RemoteException`.`
- The remotely accessible object (see `TimerImpl`) must be exported. There are two options to achieve this:
    - Derive from `java.rmi.server.UnicastRemoteObject`.
    - Call `UnicastRemoteObject.exportObject(obj)` manually.
- You can use the same class to implement the local searcher on the client and the remote one on the server. But make sure that the client does not export any local objects.
- Keep the possibility to measure searches using the local searcher. You can simply use both `Searcher` implementations after each other on the same pair of nodes in the graph to measure both variants. Add a call to remote `Searcher.getDistance()` with local `Node` objects to the `searchBenchmark()` method.
- Just print an additional row or add a column to the results in `searchBenchmark`()`.
- You may encounter a `StackOverflowError` when using a large graph. In that case, you can increase the stack size limit using the `-Xss` option. To set the stack size to 200 MB, use the option `-Xss200m`.

### 3. Remote Nodes

Update the server to provide remotely accessible objects with the `Node` interface that would be created upon client request. Update the provided implementation to allow computation of distance in the graph using a local `Searcher` working with server `Node` objects along the existing functionality.

To create and return `Node` instances for client requests, define and implement a new `NodeFactory` interface with the method `Node[] createNodes()` that constructs a graph on the server and returns its nodes. Note: implementing `createNode()` to return just a single node or `createGraph` is also accepted.

**Measure** the speed again and show how the times depend on the distance and density.

**Question:** How does the local `Searcher` object access the server `Node` objects? What exactly does the `NodeFactory` return to the client from `createNodes` (or `createNode`/`createGraph`)? What parts of RMI are involved in this process?

**Notes:**

- Modify the interface `Node` to support RMI (like `Searcher` in the previous step).
- `NodeFactory` is designed similarly to `Searcher` - it has an interface with RMI, an implementing class, create and call `Naming.bind` inside the existing server.
- The client gets the reference to the `NodeFactory` using `lookup`, then it creates the remote `Node` objects.
- The remote graph is just another array `Node[]` on the client, so it is easy to use both the local and remote graph. You can use `new Graph(nodes)` to create a graph from an array of remote nodes.
- Do not forget that it is necessary to measure the same graphs (local and remote ones) to get a relevant comparison. When generating the edges, add the same edges to both graphs (e.g., use the same random seed).
- Make sure you do not break the previous variants.
- Do not create a standalone server, we want just a single server for the next variant.

### 4. Remote Nodes and Searcher

Add another variant: compute the distance using the remote `Searcher` object on the server, to which you pass (from the client) the remote `Node` objects from the server's graph.

**Measure** the speed again and show how the times depend on the distance and density.

**Question:** How does the server `Searcher` access the server `Node` objects (on the same server)? What parts of RMI are involved in this process?

**Notes:**

- Everything is ready, just add this variant to `searchBenchmark()` and compare the speed

### 5. Passing by Value vs. Passing by Reference

Results of the previous measurements in variants 2 and 3 help to distinguish when it is faster to pass dynamic data structures by value and when it is faster to pass them by reference. The previous variants in this assignment demonstrate this in extreme all-or-nothing cases when either everything is passed by value or everything is passed by reference. But often a combination of both is the right choice.

In the provided implementation of the `Searcher` interface, there is another method for computing the distance, `getTransitiveDistance(int, Node, Node)`. This method in each step retrieves not only direct successors of a node but a whole set of successors that are at most as far from the node as specified by the first argument.

This algorithm uses the `getTransitiveSuccessors(int)` method of the `Node` interface that returns all successors that are close enough -- i.e. that are accessible by at most _n_ edges where _n_ is an argument to that method.

**Question:** In which one of the four variants (both local, remote searcher, remote nodes, both remote) does this parameter have a significant effect on network traffic (number of calls through the network)? Which variant do you expect to benefit from the transitive algorithm and why?

**Question:** How does the parameter affect the number of calls through the network during the execution of the algorithm? Compare it with the previous variants.

**Measure** this new variant -- choose the best local/remote configuration and a reasonable value of _n_, which you expect to perform differently from the previous variants.

### 6. Network Impact

So far, the client and server were running on the same machine, with the overhead of RMI communication, but no network latency.

**Compare** the speed of the five variants when both client and server are running on the same machine. Measure everything in one run to ease comparison. Plot the results into a chart with five data series corresponding to the five variants.

**Explain** the cause of the differences in the times, based on the role of RMI in each variant.

Do the same for a situation when the client and server are on different physical computers connected by a network. Test in a higher latency environment, e.g., between your computer and a computer in the school lab.

**Compare** the results of the two situations.

**Explain** the cause of the differences in the times, based on the role of RMI in each variant.

**Notes:**

- Change the paths in `getRegistry()` and `lookup()`, to the remote machine name instead of `localhost`. Ideally, use a program argument to allow specifying the hostname when starting the client.
- Run the `Server` (and `rmiregistry`) in an SSH session on the remote machine.
- Run the client locally.

## Common Problems

- Confusion about when an object instance is sent as a serialized object or a remote proxy.
    - It is sent as a remote proxy if the instance is exported (e.g., using `UnicastRemoteObject.exportObject`).
    - You can also `extend` from `UnicastRemoteObject`: however, this means all instances are always exported.
- You must only create one project that solves all parts of the assignment (without requiring recompilation for each part). The program can decide what part of the assignment to execute based on the value of a program argument. See `Server.java` and `pom.xml` from the `timer` example to see how to pass arguments.

## Submission Instructions

- Submit in your Gitlab repository by committing all necessary files and pushing the tag `done-02`.
- In your submission, please include:
    - A working implementation (source code) of the four variants as a single application.
    - Answers to all the questions from the assignment.
    - Instructions to build and run your code (how to run the client, the server etc).
    - Charts or a Jupyter Notebook with measurement results.
        - Please commit the rendered charts (you can also directly commit a rendered Jupyter Notebook).
        - Include an interpretation/explanation of the results.
