package cz.cuni.mff.d3s.nswi080.anomaly.analyzer;

import org.apache.kafka.clients.consumer.ConsumerRebalanceListener;
import org.apache.kafka.common.TopicPartition;

import java.util.Collection;

/**
 * Listens to monitor partition reassignment events and stores/restores the partition offsets and analyzer states.
 */
class MonitorRebalanceListener implements ConsumerRebalanceListener {
    private final Logger logger;

    MonitorRebalanceListener(Logger logger) {
        this.logger = logger;
    }

    @Override
    public void onPartitionsRevoked(Collection<TopicPartition> partitions) {
        // TODO (part 2): Store partition offsets and analyzer states.
        for (TopicPartition partition : partitions) {
            // TODO (part 2): Call logger#monitorPartitionStateCommitted for every committed partition.
        }
        // Call logger#monitorPartitionsRevoked at the end.
        logger.monitorPartitionsRevoked(partitions);
    }

    @Override
    public void onPartitionsAssigned(Collection<TopicPartition> partitions) {
        // TODO (part 2): Restore partition offsets and analyzer states.
        for (TopicPartition partition : partitions) {
            // TODO Call (part 2): logger#monitorPartitionStateRestored for every restored partition.
        }
        // Call logger#monitorPartitionsAssigned at the end.
        logger.monitorPartitionsAssigned(partitions);
    }
}
