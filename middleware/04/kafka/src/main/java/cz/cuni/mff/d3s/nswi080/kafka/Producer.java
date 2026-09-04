package cz.cuni.mff.d3s.nswi080.kafka;

import org.apache.kafka.clients.producer.KafkaProducer;
import org.apache.kafka.clients.producer.ProducerConfig;
import org.apache.kafka.clients.producer.ProducerRecord;
import org.apache.kafka.common.serialization.IntegerSerializer;
import org.apache.kafka.common.serialization.StringSerializer;

import java.util.Properties;
import java.util.concurrent.ExecutionException;

public class Producer {
    public static void main(String[] args) throws ExecutionException, InterruptedException {
        String bootstrapServers = "localhost:9092";
        Properties properties = new Properties();
        properties.setProperty(ProducerConfig.BOOTSTRAP_SERVERS_CONFIG, bootstrapServers);
        properties.setProperty(ProducerConfig.KEY_SERIALIZER_CLASS_CONFIG, IntegerSerializer.class.getName());
        properties.setProperty(ProducerConfig.VALUE_SERIALIZER_CLASS_CONFIG, StringSerializer.class.getName());
        try (KafkaProducer<Integer, String> producer = new KafkaProducer<>(properties)) {
            for (int i = 0; i < 1000; i++) {
                ProducerRecord<Integer, String> producerRecord = new ProducerRecord<>("example-topic", i, "Hello, world!");
                producer.send(producerRecord).get();
                System.out.printf("Sent %d -> '%s' to topic %s.%n", producerRecord.key(), producerRecord.value(), producerRecord.topic());
            }
        }
    }
}
