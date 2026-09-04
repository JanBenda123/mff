# Assignment 04 - Kafka

Suppose that we manage a large number of devices with sensors. The sensors take periodic measurements and store them in a database. We will store these measurements in Kafka. Some of these measurements may be anomalous. To detect these anomalies, we will execute an algorithm that analyzes the measurements from each single device in a sequence and report an anomaly if a measurement deviates from the rest.

Assume we will execute the analyzer program on a dedicated server (or a container/virtual machine). A single analyzer server does not have the computing power to process the measurements from all devices in time. Therefore, we must design an analyzer program that can run on multiple servers in paralell and divide the work between the programs.

Moreover, the anomaly analysis algorithm is stateful: it processes the measurements from each device in sequence and it keeps an internal per-device state. An analyzer server may not have enough memory to keep the internal states of all devices at once - so the program can process measurements from only a subset of devices at a time.

Finally, we may need to occassionally restart the server executing the analyzer and it may also crash. Therefore, we must ensure that when an analyzer program is restarted, it continues from where it left off and no anomalies are missed. In case of a crash, it is fine to reprocess some of the measurements and get duplicate anomaly reports. In contrast, the analyzer should not miss any existing anomalies (every one of them should be reported).

To sum up, the goal of this task is to integrate a monitoring program and a provided anomaly detection algorithm with Kafka in a way that is scalable and fault tolerant.

## Preliminaries

- Understand the basic Kafka concepts: events, broker, producers, consumers, topics, partitions, partiton assignment, partition offsets, consumer groups, consumer rebalancing, committing partition offsets, and manual offset management.
- We will not use Kafka streams.
- Start here and refer to the docs: https://kafka.apache.org/documentation/#gettingStarted
- Read the producer API: https://kafka.apache.org/40/javadoc/org/apache/kafka/clients/producer/KafkaProducer.html
- Read the consumer API: https://kafka.apache.org/40/javadoc/org/apache/kafka/clients/consumer/KafkaConsumer.html
    - You may be interested in the `position`, `endOffsets`, `assign`, `subscribe`, and `partitionsFor` methods.
- For part 2, read the Javadoc of `ConsumerRebalanceListener` to see how we can manually manage partition offsets: https://kafka.apache.org/40/javadoc/org/apache/kafka/clients/consumer/ConsumerRebalanceListener.html.
- You should also know about the idea of event sourcing (https://learn.microsoft.com/en-us/azure/architecture/patterns/event-sourcing) and it is worth knowing about log compaction in Kafka (https://docs.confluent.io/kafka/design/log_compaction.html).

## Explore the Sources

- `Monitor.java` - this is a program that runs on a device, takes periodic measurements, and sends them to Kafka. Each device has a unique hostname, which is passed as a program argument to the program. As an illustration, the provided implementation measures the temperature of the CPU. With a small probability, it records random bytes instead of the actual temperature (which should get detected as an anomaly). For development purposes, we can run multiple monitor programs on our computer in parallel.

- `Analyzer.java` - this is a program that runs the analysis: it reads the measurements from Kafka, runs the algorithm, and sends the detected anomalies back to Kafka. For development purposes, we can run multiple analyzers on our computer in parallel.

- `AnomalyAnalyzer.java` - an implementation of an anomaly analysis algorithm. An instance of this class processes (and keeps the state) for a single device. You can directly serialize this instance to store and restore the analyzer state for a device.

- `Anomaly.java` - represents a detected anomaly - we will send a serialized version of this object to a Kafka topic.

- `Logger.java` - logs information about important events from the analyzer program to the standard output. You must call every logger method from an appropriate place in the code to receive full points for the assignment.

- `JacksonKafkaSerializer.java` - a serializer for Kafka keys and values that are Java objects based on a Java library for JSON serialization - Jackson. You can use this out of the box to serialize lists, maps, and Java records that you want to send to Kafka topics. Read here for a quick tutorial https://github.com/FasterXML/jackson-databind/?tab=readme-ov-file#use-it.

- `JacksonKafkaDeserializer.java` - an abstract deserializer from Kafka keys/values to Java objects. See class `AnalyzerStateValueDeserializer` for a concrete implementation.

- `MonitorRebalanceListener.java`- a listener for partition rebalancing events, which we will need in part 2 to store and restore the state of anomaly analyzer and commit consumer offsets.

- `AnalyzerStateValue.java` - the state of multiple analyzers and a partition offset, which we will store to a Kafka topic (in part 2).

## Part 1 - Monitoring and Reporting

Think about what we should select as the key and what we should store as the value to ensure scalability for a large number of devices. Consider that we also need to ensure that the measurements from a single device are processed in order (we should not depend on timestamps).
Note that we can configure the Kafka cluster as required to ensure scalabity.

**TODO (implement 1)**: Store the measurements in the Kafka cluster (with an appropriate key and value) in topic `monitor`. Read the measurements in the analyzer, run the anomaly detection algorithm, and send the detected anomalies in the `anomaly` topic. Do not forget to log all relevant events using the provided `Logger` class.

**TODO (output 1)**: Create the directory `student-$LOGIN/04/solution` in you student repository. After implementing part 1 of the assignment, start a fresh Kafka broker instance while recording its output in `student-$LOGIN/04/solution/output_01_broker.txt` (using the docker command from the lab activity - make sure there are ~3 topic partitions for the purpose of this test). Then, run two monitors and a single analyzer, also recording their output.

```sh
mkdir -p student-$LOGIN/04/solution

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
     apache/kafka:4.0.0 | tee student-$LOGIN/04/solution/output_01_broker.txt

mvn exec:java@monitor -Dexec.args="alpha" | tee student-$LOGIN/04/solution/output_01_monitor_alpha.txt
mvn exec:java@monitor -Dexec.args="bravo" | tee student-$LOGIN/04/solution/output_01_monitor_bravo.txt
mvn exec:java@analyzer -Dexec.args="xray" | tee student-$LOGIN/04/solution/output_01_analyzer_xray.txt
```

Use correct paths for the text files. Keep the programs and the broker running for enough time (e.g., at least 30 seconds) and then kill them (Ctrl-C). To run these program concurrently, open multiple terminal instances/tabs (or use a multiplexer like `tmux`).

Submit all output files as part of the assignment. These output files should demonstrate that your implemention works - ensure that you call the relevant `Logger` methods.

## Part 2 - Rebalancing the Analyzers

As explained earlier, we need to run multiple analyzers to process the data from a large number of devices. When a new analyzer joins, Kafka rebalances the partitions. This means that partitions from an analyzer may be revoked and assigned to a different analyzer. However, the anomaly analysis algorithm is stateful: we must ensure every analyzer has the latest state of the anomaly analysis algorithm.

To transfer the states between the analyzer programs, we will store the states in Kafka. A `KafkaConsumer` allows adding a `ConsumerRebalanceListener`, notifying us about partition assignment and revokement - which is the exact time we need to restore and store the states (see: https://kafka.apache.org/40/javadoc/org/apache/kafka/clients/consumer/ConsumerRebalanceListener.html).

An analyzer state is bound to a consumer partition offset (it depends on how many events we already processed from a device). Therefore, to get correct results in case of crashes and failures, we will manually store the consumer partition offsets along the analyze states.

**TODO (implement 2)**: Store the analyzer states and monitor partition offsets when monitor partitions are revoked. Also delete any local program state related to the revoked partitions (to keep memory usage low). Restore the analyzer states and partition offsets when monitor partitions are assigned.

Store the states to a Kafka topic named `analyzer-state`. To restore the states from the `analyzer-state` topic, you can read the end offsets in the topic and read all events from the beginning to the end, materializing the state. Use manual partition assignment to read the states. Choose the key wisely. Note that this is an application of the event sourcing pattern. You can serialize the analyzer states of multiple devices in a single event (i.e., at least `#devices / #partitions` states) but not the states of all devices.

Since we are now managing partition offsets manually, we should turn off autocommit (controlled by the property `ENABLE_AUTO_COMMIT_CONFIG`). The property `AUTO_OFFSET_RESET_CONFIG` decides the initial offset when offsets are not managed by Kafka.

**TODO (output 2)**: Run a fresh broker, storing the output to `output_02_broker.txt` in the appropriate directory. Then, start four instances of the monitor program like below, storing the output of each.

```sh
docker run ... | tee student-$LOGIN/04/solution/output_02_broker.txt

mvn exec:java@monitor -Dexec.args="alpha"    | tee student-$LOGIN/04/solution/output_02_monitor_alpha.txt
mvn exec:java@monitor -Dexec.args="bravo"    | tee student-$LOGIN/04/solution/output_02_monitor_bravo.txt
mvn exec:java@monitor -Dexec.args="charlie"  | tee student-$LOGIN/04/solution/output_02_monitor_charlie.txt
mvn exec:java@monitor -Dexec.args="delta"    | tee student-$LOGIN/04/solution/output_02_monitor_delta.txt
```

Keep all programs running until the end. Start a single analyzer program, storing its output. Wait for the analyzer to start processing data from all partitions.

```sh
mvn exec:java@analyzer -Dexec.args="xray" | tee student-$LOGIN/04/solution/output_02_analyzer_xray.txt
```

Now add one more analyzer program, storing its output. Wait for Kafka to rebalance the partitions, so that every analyzer processes inputs from a subset of the monitors. If your implementation is correct, the second analyzer (`whisky`) should continue where the first one (`xray`) left off.

```sh
mvn exec:java@analyzer -Dexec.args="whisky" | tee student-$LOGIN/04/solution/output_02_analyzer_whisky.txt
```

Finally, kill all the programs and keep the outputs for submission.

## Part 3 - Committing State

We save the analyzer states and partition offsets to Kafka only when partitions are rebalanced. However, if an analyzer crashes, we lose all the progress it made. To solve this, we should also periodically save the states.

Note that Kafka periodically commits the states automatically (autocommit) when the offsets are managed by Kafka. We disabled autocommit since we manage the offsets ourselves. 

**TODO (implement 3)**: The analyzer should save all assigned partition offsets and analyzer states about every 30 seconds.

**TODO (output 3)***: Start a fresh broker, two monitors and a single analyzer. Let the analyzer run for a few minutes (so that states are committed).

```sh
docker run ... | tee student-$LOGIN/04/solution/output_03_broker.txt

mvn exec:java@monitor -Dexec.args="alpha"    | tee student-$LOGIN/04/solution/output_03_monitor_alpha.txt
mvn exec:java@monitor -Dexec.args="bravo"    | tee student-$LOGIN/04/solution/output_03_monitor_bravo.txt

mvn exec:java@analyzer -Dexec.args="xray" | tee student-$LOGIN/04/solution/output_03_analyzer_xray.txt
```

After a few minutes, kill the analyzer (e.g., with Ctrl-C) and keep everything else running. Then, start a second analyzer.

```sh
mvn exec:java@analyzer -Dexec.args="whisky" | tee student-$LOGIN/04/solution/output_03_analyzer_whisky.txt
```

Wait a few minutes until Kafka reassigns the partitions to the new analyzer. The new analyzer should continue where the previous one left off (from the last saved state). Finally, kill all programs and keep the output.

## Submission Instructions

- Submit in your GitLab repository by committing all necessary files and pushing the tag `done-04`.
- In your submission, please include:
    - A working implementation (source code) that satisfies all requirements from parts 1, 2, and 3.
    - The output files from the above three scenarios (part 1, 2, 3) in appropriate directories.

## Implementation Notes

- Carefully select the keys to ensure scalability and correctness.
- Ensure the solution is efficient (e.g, do not commit the offsets after every event).
- Do not assume there is a fixed number of partitions - the programs must work with any number of partitions.
- Do not store more states in a single analyzer program than required.
- Do not create more than a constant number of topics.
- Do not use Kafka streams or any other library that is not already included.
- Do not create race conditions that could lead to incorrect program behavior.
