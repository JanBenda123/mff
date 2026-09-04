# Lab Activity 04 - Kafka

Your task is to run a Kafka broker in a Docker container, capture its output, and submit it in your student repository.

First, install Docker Engine according to the instructions in https://docs.docker.com/engine/. Docker Desktop or Podman should also work.

Now, we will pull the image `apache/kafka:4.0.0` from Docker Hub. You can find documentation about the image in https://hub.docker.com/r/apache/kafka.

```shell
docker pull apache/kafka:4.0.0
```

Then, we will run a container based on the image using the `docker run` command.

```shell
docker run --rm \
     --name kafka-broker \
     -p 9092:9092 \
     -e KAFKA_NODE_ID=1 \
     -e KAFKA_PROCESS_ROLES=broker,controller \
     -e KAFKA_LISTENERS=PLAINTEXT://:9092,CONTROLLER://:9093 \
     -e KAFKA_ADVERTISED_LISTENERS=PLAINTEXT://localhost:9092 \
     -e KAFKA_CONTROLLER_LISTENER_NAMES=CONTROLLER \
     -e KAFKA_LISTENER_SECURITY_PROTOCOL_MAP=CONTROLLER:PLAINTEXT,PLAINTEXT:PLAINTEXT \
     -e KAFKA_CONTROLLER_QUORUM_VOTERS=1@localhost:9093 \
     -e KAFKA_OFFSETS_TOPIC_REPLICATION_FACTOR=1 \
     -e KAFKA_TRANSACTION_STATE_LOG_REPLICATION_FACTOR=1 \
     -e KAFKA_TRANSACTION_STATE_LOG_MIN_ISR=1 \
     -e KAFKA_GROUP_INITIAL_REBALANCE_DELAY_MS=0 \
     -e KAFKA_NUM_PARTITIONS=3 \
     apache/kafka:4.0.0
```

The `--rm` argument tells Docker to remove the container after it exits (or we stop it with Ctrl-C). This is good for development, since we always start from a clean slate.

The `--name` argument provides a name for the container.

The `-p` argument maps the port 9092 from inside the container to the outside port 9092, so that we can connect to the broker.

The `-e` argument are environment variables for the broker. The variable `KAFKA_NUM_PARTITIONS` sets the default number of partitions for newly created topic to 3.

To fulfill the lab activity, start a fresh container and capture all output in a text file named `broker_capture.txt` in the `04` directory of your student repository. You can achieve it using the `tee` command (change `student-$LOGIN/04` to the appropriate path).

```shell
docker run --rm \
     --name kafka-broker \
     -p 9092:9092 \
     -e KAFKA_NODE_ID=1 \
     -e KAFKA_PROCESS_ROLES=broker,controller \
     -e KAFKA_LISTENERS=PLAINTEXT://:9092,CONTROLLER://:9093 \
     -e KAFKA_ADVERTISED_LISTENERS=PLAINTEXT://localhost:9092 \
     -e KAFKA_CONTROLLER_LISTENER_NAMES=CONTROLLER \
     -e KAFKA_LISTENER_SECURITY_PROTOCOL_MAP=CONTROLLER:PLAINTEXT,PLAINTEXT:PLAINTEXT \
     -e KAFKA_CONTROLLER_QUORUM_VOTERS=1@localhost:9093 \
     -e KAFKA_OFFSETS_TOPIC_REPLICATION_FACTOR=1 \
     -e KAFKA_TRANSACTION_STATE_LOG_REPLICATION_FACTOR=1 \
     -e KAFKA_TRANSACTION_STATE_LOG_MIN_ISR=1 \
     -e KAFKA_GROUP_INITIAL_REBALANCE_DELAY_MS=0 \
     -e KAFKA_NUM_PARTITIONS=3 \
     apache/kafka:4.0.0 | tee student-$LOGIN/04/broker_capture.txt
```

Wait until it prints `Kafka Server started`, then stop it with Ctrl-C.

Commit the `broker_capture.txt` file (with the exact same name and location), create the tag `activity-04`, and push it. The fulfillment of the activity will be recorded in SIS.

You can try out the examples in the `kafka` directory. It is not required to run the examples to fulfill the lab activity.
