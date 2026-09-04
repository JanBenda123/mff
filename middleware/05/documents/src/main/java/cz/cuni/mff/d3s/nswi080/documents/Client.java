package cz.cuni.mff.d3s.nswi080.documents;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ExecutionException;

import com.hazelcast.client.HazelcastClient;
import com.hazelcast.client.config.ClientConfig;
import com.hazelcast.core.HazelcastInstance;
import com.hazelcast.core.IExecutorService;
import com.hazelcast.map.IMap;


public class Client {
    // Reader from the standard input.
    private final BufferedReader in = new BufferedReader(new InputStreamReader(System.in));

    // Connection to the cluster.
    private final HazelcastInstance hazelcast;

    // The name of the user.
    private final String userName;

    // Do not keep any other state here - all data should be in the cluster.

    /**
     * Creates a client for the specified user.
     * @param userName username to identify the user
     */
    public Client(String userName) {
        this.userName = userName;
        // Connect to the Hazelcast cluster.
        ClientConfig config = new ClientConfig();
        hazelcast = HazelcastClient.newHazelcastClient(config);

        // Initialize favorites list for the user.
        IMap<String, List<String>> mapOfUserFavorites = hazelcast.getMap("MapOfUserFavorites");
        if(!mapOfUserFavorites.containsKey(userName)){
            mapOfUserFavorites.put(userName, new ArrayList<String>());
        }
        
    }

    // Disconnect from the Hazelcast cluster.
    public void disconnect() {

        // Disconnect from the Hazelcast cluster
        hazelcast.shutdown();
    }

    // DONE: Reads a name of a document, selects it as the current document of the user, and shows the document content.
    private void showCommand() throws IOException{
        System.out.println("Enter document name:");
        String documentName = in.readLine();

        // Currently, the document is generated directly on the client.
        // DONE: Change it, so that the document is generated in the cluster and stored (cached) in the cluster.
        // DONE: Set the current selected document for the user.
        IMap<String, String> selectedDocuments = hazelcast.getMap("SelectedDocuments");
        selectedDocuments.put(userName, documentName);
        // DONE: Get the document (from the cache, or generated).
        IExecutorService executor = hazelcast.getExecutorService(documentName);
        Document document = null;
        try{
            document = executor.submitToKeyOwner(
                new GenerateDocumentCallable(documentName),
                "doc1"
            ).get();
        }
        catch(InterruptedException | ExecutionException e){
            System.err.println("Error generating document");
            e.printStackTrace();
        }

        IMap<String, List<String>> documentComments = hazelcast.getMap("DocumentComments");
        documentComments.putIfAbsent(documentName, new ArrayList<>());
        // DONE: Increment the view count.
        IMap<String, Integer> viewCounts = hazelcast.getMap("ViewCounts");

        viewCounts.executeOnKey(documentName, new IncrementViewCountProcessor());
        

        // Show the document content.
        System.out.println("The document is:");
        System.out.println(document.getContent());
    }

    // DONE: Shows the next document in the list of favorites of the user.
    // Selects the next document, so that running this command repeatedly will cyclically show all favorite documents of the user.
    private void nextFavoriteCommand() {
        // DONE: Select the next document form the list of favorites.
        IMap<String, List<String>> mapOfUserFavorites = hazelcast.getMap("MapOfUserFavorites");

        String nextFavoriteDocumentName = mapOfUserFavorites.executeOnKey(userName, new CycleFavoritesProcessor());

        IExecutorService executor = hazelcast.getExecutorService(nextFavoriteDocumentName);
        Document document = null;
        try{
            document = executor.submitToKeyOwner(
                new GenerateDocumentCallable(nextFavoriteDocumentName),
                "doc1"
            ).get();
        }
        catch(InterruptedException | ExecutionException e){
            System.err.println("Error generating document");
            e.printStackTrace();
        }
        
        
        
        // DONE: Increment the view count, get the document
        //  (from the cache, or generated) and show the document content.
        IMap<String, Integer> viewCounts = hazelcast.getMap("ViewCounts");
        viewCounts.executeOnKey(nextFavoriteDocumentName, new IncrementViewCountProcessor());


        System.out.println("The document is:");
        System.out.println(document.getContent());
    }

    // DONE: Adds the current selected document name to the list of favorite documents of the user.
    // If the list already contains the document name, do nothing.
    private void addFavoriteCommand() {
        // DONE: Add the name of the selected document to the list of favorites.
        IMap<String, String> selectedDocuments = hazelcast.getMap("SelectedDocuments");
        String selectedDocumentName = selectedDocuments.get(userName);

        if (selectedDocumentName == null) {
            System.out.println("No document selected.");
            return;
        }
        IMap<String, List<String>> mapOfUserFavorites = hazelcast.getMap("MapOfUserFavorites");

        mapOfUserFavorites.executeOnKey(userName, new AddToFavoritesProcessor(selectedDocumentName));

        System.out.printf("Added %s to favorites%n", selectedDocumentName);
    }

    // DONE: Removes the current selected document name from the list of favorite documents of the user.
    // If the list does not contain the document name, do nothing.
    private void removeFavoriteCommand() {
        // DONE: Remove the name of the selected document from the list of favorites.
        IMap<String, String> selectedDocuments = hazelcast.getMap("SelectedDocuments");
        String selectedDocumentName = selectedDocuments.get(userName);

        if (selectedDocumentName == null) {
            System.out.println("No document selected.");
            return;
        }

        IMap<String, List<String>> mapOfUserFavorites = hazelcast.getMap("MapOfUserFavorites");

        mapOfUserFavorites.executeOnKey(userName, new RemoveFromFavoritesProcessor(selectedDocumentName));
        System.out.printf("Removed %s from favorites%n", selectedDocumentName);
    }

    // DONE: Prints the list of the user's favorite documents.
    private void listFavoritesCommand() {
        // DONE: Get the list of favorite documents of the user
        IMap<String, List<String>> mapOfUserFavorites = hazelcast.getMap("MapOfUserFavorites");
        List<String> favoriteList = mapOfUserFavorites.get(userName);

        // Print the list of favorite documents
        System.out.println("Your list of favorite documents:");
        for(String favoriteDocumentName: favoriteList)
        	System.out.println(favoriteDocumentName);
    }

    // DONE: Shows the view count and comments of the current selected document.
    private void infoCommand() {
        // DONE: Get the view count and list of comments of the selected document.
        IMap<String, String> selectedDocuments = hazelcast.getMap("SelectedDocuments");
        String selectedDocumentName = selectedDocuments.get(userName);

        if (selectedDocumentName == null) {
            System.out.println("No document selected.");
            return;
        }

        IMap<String, Integer> viewCounts = hazelcast.getMap("ViewCounts");
        Integer viewCount = viewCounts.get(selectedDocumentName);
        if (viewCount == null) {
            viewCount = 0;
        }

        IMap<String, List<String>> documentComments = hazelcast.getMap("DocumentComments");
        List<String> comments = documentComments.get(selectedDocumentName);
        if (comments == null) {
            comments = new ArrayList<>();
        }

        // Print the information.
        System.out.printf("Info about %s:%n", selectedDocumentName);
        System.out.printf("Viewed %d times.%n", viewCount);
        System.out.printf("Comments (%d):%n", comments.size());
        for(String comment: comments)
            System.out.println(comment);
    }

    // DONE: Adds a comment to the current selected document.
    private void commentCommand() throws IOException {

        IMap<String, String> selectedDocuments = hazelcast.getMap("SelectedDocuments");
        String selectedDocumentName = selectedDocuments.get(userName);
        if (selectedDocumentName == null) {
            System.out.println("No document selected.");
            return;
        }

        System.out.println("Enter comment text:");
        String commentText = in.readLine();

        // DONE: Add the comment to the list of comments of the selected document


        IMap<String, List<String>> documentComments = hazelcast.getMap("DocumentComments");
        documentComments.executeOnKey(selectedDocumentName, new AddCommentProcessor(commentText));
        
        System.out.printf("Added a comment about %s.%n", selectedDocumentName);
    }

    // DONE: Runs the main interactive loop.
    public void run() throws IOException{
        loop: while (true) {
            System.out.println("\nAvailable commands (type and press enter):");
            System.out.println(" s - select and show document");
            System.out.println(" i - show document view count and comments");
            System.out.println(" c - add comment");
            System.out.println(" a - add to favorites");
            System.out.println(" r - remove from favorites");
            System.out.println(" n - show next favorite");
            System.out.println(" l - list all favorites");
            System.out.println(" q - quit");
            String line = in.readLine();
            if (line.isEmpty()) {
                continue;
            }
            switch (line.charAt(0)) {
                case 'q': // Quit the application.
                    break loop;
                case 's': // Select and show a document.
                    showCommand();
                    break;
                case 'i': // Show view count and comments of the selected document.
                    infoCommand();
                    break;
                case 'c': // Add a comment to the selected document.
                    commentCommand();
                    break;
                case 'a': // Add the selected document to favorites.
                    addFavoriteCommand();
                    break;
                case 'r': // Remove the selected document from favorites.
                    removeFavoriteCommand();
                    break;
                case 'n': // Select and show the next document in the list of favorites.
                    nextFavoriteCommand();
                    break;
                case 'l': // Show the list of favorite documents.
                    listFavoritesCommand();
                    break;
                default:
                    break;
            }
        }
    }

    // DONE: Main method, creates a client instance and runs its loop.
    public static void main(String[] args) throws IOException {
        if (args.length != 1) {
            System.err.println("Usage: java Client <userName>");
            return;
        }

        Client client = new Client(args[0]);
        try {
            client.run();
        } finally {
            client.disconnect();
        }
    }
}
