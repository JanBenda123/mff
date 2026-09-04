package cz.cuni.mff.d3s.nswi080.documents;

import java.util.List;
import java.util.Map;

import com.hazelcast.map.EntryProcessor;

public class AddToFavoritesProcessor implements EntryProcessor<String, List<String>, Void> {
    private final String documentName;

    public AddToFavoritesProcessor(String documentName) {
        this.documentName = documentName;
    }
    
    @Override
    public Void process(Map.Entry<String, List<String>> entry) {
        List<String> favorites = entry.getValue();
        if(!favorites.contains(this.documentName)){
            favorites.add(this.documentName);
            entry.setValue(favorites);
            System.out.println("user "+entry.getKey() +  " added " + this.documentName + " to favorites");
        }
        else{
            System.out.println("user "+entry.getKey() +  " already has " + this.documentName + " in favorites");
        }
        return null;
    }
}