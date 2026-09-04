package cz.cuni.mff.d3s.nswi080.documents;

import java.util.List;
import java.util.Map;

import com.hazelcast.map.EntryProcessor;

public class RemoveFromFavoritesProcessor implements EntryProcessor<String, List<String>, Void> {
    private final String documentName;

    public RemoveFromFavoritesProcessor(String documentName) {
        this.documentName = documentName;
    }
    
    @Override
    public Void process(Map.Entry<String, List<String>> entry) {
        List<String> favorites = entry.getValue();
        if(favorites.contains(this.documentName)){
            favorites.remove(this.documentName);
            entry.setValue(favorites);
            System.out.println("user "+entry.getKey() +  " removed " + this.documentName + " from favorites");
        }
        else{
            System.out.println("user "+entry.getKey() +  " does not have " + this.documentName + " in favorites");
        }
        return null;
    }
}