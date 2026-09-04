# Install and run

First, download and unpack ActiveMQ Artemis from https://activemq.apache.org/components/artemis/download/.

Set up the broker using the command below. This configures the broker in the `broker` directory.

```sh
./apache-artemis-*/bin/artemis create --user user --password password --allow-anonymous broker
```

Start the broker using the command:

```sh
./broker/bin/artemis run
```

Now, install the project using Maven.

```sh
mvn install
```

Run the consumer:

```sh
mvn exec:java@consumer
```

Run the producer:

```sh
mvn exec:java@producer
```

Note: If you cannot send messages due to high disk usage, edit the `./broker/etc/broker.xml` file and change the `max-disk-usage` property to 99.

Complete the lab activity by editing `LabActivity.java` and running:

```sh
mvn install exec:java@lab-activity
```
