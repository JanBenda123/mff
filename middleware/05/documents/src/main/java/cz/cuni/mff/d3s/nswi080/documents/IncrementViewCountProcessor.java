package cz.cuni.mff.d3s.nswi080.documents;

import java.util.Map;

import com.hazelcast.map.EntryProcessor;

public class IncrementViewCountProcessor implements EntryProcessor<String, Integer, Object> {
    @Override
    public Object process(Map.Entry<String, Integer> entry) {
        Integer count = entry.getValue();
        entry.setValue(count == null ? 1 : count + 1);
        return null;
    }
}