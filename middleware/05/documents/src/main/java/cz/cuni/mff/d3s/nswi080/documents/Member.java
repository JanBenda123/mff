package cz.cuni.mff.d3s.nswi080.documents;

import java.io.IOException;

import com.hazelcast.config.ClasspathYamlConfig;
import com.hazelcast.config.Config;
import com.hazelcast.core.Hazelcast;
import com.hazelcast.core.HazelcastInstance;

public class Member {
    public static void main(String[] args) throws IOException {
        Config config = new ClasspathYamlConfig("hazelcast.yaml");
        HazelcastInstance hazelcast = Hazelcast.newHazelcastInstance(config);
        System.out.println("Document Server is running. Press enter to exit.");
        System.in.read();
        
        hazelcast.shutdown();
    }
}
