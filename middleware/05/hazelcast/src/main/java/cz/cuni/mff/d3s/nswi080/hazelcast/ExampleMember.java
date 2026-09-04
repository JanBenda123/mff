package cz.cuni.mff.d3s.nswi080.hazelcast;

import com.hazelcast.config.ClasspathYamlConfig;
import com.hazelcast.config.Config;
import com.hazelcast.core.Hazelcast;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.map.IMap;

import java.io.IOException;

public class ExampleMember {
    public static void main(String[] args) throws IOException {
        // The command-line argument is a prefix for entries created by this member.
        if (args.length != 1) {
            System.err.println("Usage: java ExampleMember <prefix>");
            return;
        }
        String prefix = args[0];

        // Load the configuration from hazelcast.yaml.
        // You can also use XML format
        // or creating empty configuration object by new Config()
        // and setting properties of this object.
        Config config = new ClasspathYamlConfig("hazelcast.yaml");

        // Create a Hazelcast member.
        // This will either create a new cluster or join an existing one
        // according to the join section in the configuration.
        HazelcastInstance hazelcast = Hazelcast.newHazelcastInstance(config);

        // Get the distributed map named "TheMap". Create it if it does not exist.
        IMap<String, String> map = hazelcast.getMap("TheMap");

        // Get the name of this member. The name is automatically generated.
        String memberName = hazelcast.getName();

        // Insert keys prefix0 ... prefix9 into the distributed map.
        for (int i = 0; i < 10; ++i) {
            map.put(prefix + i, memberName);
        }

        // Keep the member running until enter is pressed.
        System.out.println("Press enter to exit");
        System.in.read();

        // Leave the cluster.
        hazelcast.shutdown();
    }
}
