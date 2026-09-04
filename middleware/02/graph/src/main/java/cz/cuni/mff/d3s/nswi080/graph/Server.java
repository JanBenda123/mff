package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Server {
    public static void main(String[] args) {
        try {
            Searcher searcher = new SearcherRemoteImpl();
            GraphBuilder graphBuilder = new GraphBuilderRemoteImpl();

            Registry registry = LocateRegistry.createRegistry(1099);
            registry.rebind("Searcher", searcher);
            registry.rebind("GraphBuilder", graphBuilder);

            System.out.println("Server is running...");
        } catch (RemoteException e) {
            e.printStackTrace();
        }
    }
}
