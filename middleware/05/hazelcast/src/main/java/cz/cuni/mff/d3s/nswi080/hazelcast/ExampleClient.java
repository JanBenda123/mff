package cz.cuni.mff.d3s.nswi080.hazelcast;

import com.hazelcast.client.HazelcastClient;
import com.hazelcast.client.config.ClientConfig;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.map.IMap;

public class ExampleClient {
    public static void main(String[] args) {
        // Use the default configuration.
        ClientConfig config = new ClientConfig();

        // Connect to the Hazelcast cluster.
        // As a client, we can query and modify the data,
        // but we do not store any data.
        HazelcastInstance hazelcast = HazelcastClient.newHazelcastClient(config);

        // Get the "TheMap" distributed hash map.
        IMap<String, String> map = hazelcast.getMap("TheMap");

        // Print each entry on the member that stores it.
        map.executeOnEntries((k) -> {
            System.out.println("This member owns key " + k.getKey() + " with value " + k.getValue());
            return null;
        });

        // Disconnect from the cluster.
        hazelcast.shutdown();
    }
}
