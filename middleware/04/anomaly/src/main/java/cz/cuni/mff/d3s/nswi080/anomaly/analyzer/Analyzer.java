package cz.cuni.mff.d3s.nswi080.anomaly.analyzer;

import java.time.Duration;
import java.time.Instant;
import java.util.List;

/**
 * The analyzer program.
 */
public class Analyzer {
    /**
     * The topic with monitor measurements.
     */
    private static final String MONITOR_TOPIC = "monitor";

    /**
     * The topic with detected anomalies.
     */
    private static final String ANOMALY_TOPIC = "anomaly";

    /**
     * The topic with analyzer states and consumer partition offsets.
     */
    public static final String ANALYZER_STATE_TOPIC = "analyzer-state";

    /**
     * The period at which analyzer states and consumer partition offsets are manually committed.
     */
    public static final Duration COMMIT_PERIOD = Duration.ofSeconds(30);

    public static void main(String[] args) {
        if (args.length == 0) {
            throw new IllegalArgumentException("Usage: <program> hostname");
        }
        Logger logger = new Logger(args[0]);
        String bootstrapServers = "localhost:9092";

        // TODO (part 1, 2): Create the producers and consumers.
        // TODO (part 1): Subscribe to MONITOR_TOPIC and call logger#subscribingToMonitorTopic.
        // TODO (part 2): Subscribe to MONITOR_TOPIC with the MonitorRebalanceListener.
        Instant lastCommit = Instant.now();
        while (true) {
            for (var record : List.of()) {
                // TODO (part 1): Read the measurements and call logger#monitorRecordRead(record) for each.
                String hostname = null;
                AnomalyAnalyzer analyzer = null; // Find the appropriate instance.
                double temperature = 0;
                long timestamp = 0; // You can ise the timestamp from the Kafka record.
                Anomaly anomaly = analyzer.addRecordAndDetect(temperature, timestamp);
                if (anomaly != null) {
                    logger.anomalyDetected(anomaly);
                    // TODO (part 2): Send the detected anomaly to ANOMALY_TOPIC.
                    // You can use the JacksonKafkaSerializer to serialize it.
                }
            }

            // TODO (part 3): Save the analyzer states and consumer positions for all assigned partitions
            //  if it is more than COMMIT_PERIOD since they were saved last.
            if (Instant.now().isAfter(lastCommit.plus(COMMIT_PERIOD))) {
                // TODO (part 3): Call logger#periodicCommitOfStatesAndOffsets at the beginning.
                // TODO (part 3): Call logger#monitorPartitionStateCommitted for every committed partition.
                lastCommit = Instant.now();
            }
        }
    }
}
