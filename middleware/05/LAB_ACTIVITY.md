# Lab Activity 05 - Hazelcast

In this lab and homework, we will use the Hazelcast Platform.

- Manual: https://docs.hazelcast.com/hazelcast/latest/
- Javadoc: https://docs.hazelcast.org/docs/5.4.0/javadoc/

You can find code examples here: https://github.com/hazelcast/hazelcast-code-samples/tree/master/clients

## Explore the Example

Hazelcast configuration (`hazelcast.yaml`) configures the cluster members.
- The members listen on 127.0.0.1, ports assigned sequentially starting from 5701.
- The join section indicates how members join an existing cluster - they connect to localhost:5701.
- After starting the first member, which is assigned localhost:5701, all subsequent members join the same cluster (but only as long as the first member is still running)

`ExampleMember.java`:

- Uses the `hazelcast.yaml` config file.
- Joins the Hazelcast cluster.
- Inserts a few entries into a distributed map named `TheMap`.
- If the map does not exist, it is created.
- The keys start with the string specified as the command-line argument.
- The value is the auto-generated name of the cluster member.
- Runs until enter is pressed.

`ExampleClient.java`:

- Connects to the cluster but does not join as a member.
- Executes an action on the members.
- For each entry in the `TheMap`, the code is executed at the member where the entry is located.

## Run the Example

The example is a Maven project in the directory `hazelcast`. First, install the project:

```sh
cd hazelcast
mvn install
```

After that, start a member. You can pass an argument to the member using `-Dexec.args=`.

```sh
mvn exec:java@member -Dexec.args=A
```

Finally, run a client:

```sh
mvn exec:java@client
```

Note that running the cluster on a publicly accessible machine is discouraged because other users could be able to join your cluster.
Authentication is available only in the commercial edition of Hazelcast.

## Lab Activity

To complete the lab activity follow the steps below:
1. Launch three members with arguments A, B, and C, respectively, so that they all run once.
2. Run a client.
3. Terminate member B.
4. Run another client again.

Note: after launching the members, wait until the cluster re-adjusts before running the client.

Save the outputs of these programs (three members and two clients) to text files named `member_A.txt`, `member_B.txt`, `member_C.txt`, `client_1.txt`, and `client_2.txt`. Create a new directory in your student repository: `student-$LOGIN/05/activity`, and save the text files in the directory. Commit the files and push the tag `activity-05`.

Note that the logs are printed to stderr. Make sure to include the logs, which you can achieve by redirecting stderr with `2>&1`:

```sh
mvn exec:java@member -Dexec.args=A 2>&1 | tee ../activity/member_A.txt
```
