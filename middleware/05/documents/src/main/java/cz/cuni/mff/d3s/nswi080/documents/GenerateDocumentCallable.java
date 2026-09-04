package cz.cuni.mff.d3s.nswi080.documents;
import java.io.Serializable;
import java.util.concurrent.Callable;

import com.hazelcast.core.Hazelcast;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.map.IMap;



public class GenerateDocumentCallable implements Callable<Document>, Serializable {
    private final String documentName;

    public GenerateDocumentCallable(String documentName) {
        this.documentName = documentName;
    }

    @Override
    public Document call() {
        HazelcastInstance hazelcast = Hazelcast.getAllHazelcastInstances().iterator().next();
        IMap<String, Document> cache = hazelcast.getMap("DocumentCache");
        
        cache.lock(documentName);
        Document document = cache.get(documentName);
        if (document == null) {
            document = DocumentGenerator.generateDocument(documentName);
            
            cache.put(documentName, document);
            
            System.out.println("Generated document " + documentName);
        }
        else {
            System.out.println("Using cached document " + documentName);
        }
        cache.unlock(documentName);
        return document;
    }
}