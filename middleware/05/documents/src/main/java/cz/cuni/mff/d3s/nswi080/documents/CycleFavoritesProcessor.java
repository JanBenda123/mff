package cz.cuni.mff.d3s.nswi080.documents;

import java.util.List;
import java.util.Map;

import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.core.HazelcastInstanceAware;
import com.hazelcast.map.EntryProcessor;
import com.hazelcast.map.IMap;

public class CycleFavoritesProcessor implements EntryProcessor<String, List<String>, String>, HazelcastInstanceAware {
    
    private transient HazelcastInstance hazelcastInstance;

    @Override
    public void setHazelcastInstance(HazelcastInstance hazelcastInstance) {
        this.hazelcastInstance = hazelcastInstance;
    }

    @Override
    public String process(Map.Entry<String, List<String>> entry) {
        // Used on MapOfUserFavorites
        String username = entry.getKey();
        List<String> favorites = entry.getValue();
        
        IMap<String, Integer> CyclingFavoritesId = hazelcastInstance.getMap("CyclingFavoritesId");
        Integer id = CyclingFavoritesId.get(username);
        if (id == null) {
            id = 0;
        }
        id = id % favorites.size();
        CyclingFavoritesId.put(username, id + 1);
        String documentName = favorites.get(id);
        
        
        return documentName;

    }
}