# Timer

The project contains a simple RMI server and client. The server exports a `TimerProvider`, which the client
can use to create `Timer` objects. The `Timer` objects can be used to measure time intervals.

# Build and run

Build the project with Maven:

```sh
mvn install
```

Run the server with the below command. The server also creates an RMI registry on port 5000.

```sh
mvn exec:exec@run-server
```

Run the client with:

```sh
mvn exec:java@run-client
```
