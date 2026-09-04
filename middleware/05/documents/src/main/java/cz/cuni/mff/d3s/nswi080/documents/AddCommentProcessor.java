package cz.cuni.mff.d3s.nswi080.documents;

import java.util.List;
import java.util.Map;

import com.hazelcast.map.EntryProcessor;

public class AddCommentProcessor implements EntryProcessor<String, List<String>, Void> {
    private final String comment;

    public AddCommentProcessor(String comment) {
        this.comment = comment;
    }
    
    @Override
    public Void process(Map.Entry<String, List<String>> entry) {
        List<String> comments = entry.getValue();
        comments.add(this.comment);
        entry.setValue(comments);
        System.out.println("comment "+ this.comment +  " added to document " + entry.getKey());
        return null;
    }
}