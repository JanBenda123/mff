package cz.cuni.mff.d3s.nswi080.graph;

import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.util.Random;

class GraphBuilderRemoteImpl extends UnicastRemoteObject implements GraphBuilder {
    private Node[] nodes;

    public GraphBuilderRemoteImpl() throws RemoteException {
        super();
    }

    @Override
    public Node[] CreateNodes(int nodeCount) throws RemoteException {
        nodes = new Node[nodeCount];
        for (int i = 0; i < nodeCount; i++) {
            nodes[i] = new NodeRemoteImpl();
        }
        return nodes;
    }

    @Override
    public void AddRandomEdges(int edgeCount, long seed) throws RemoteException {
        if (nodes == null) {
            return;
        }
        Random random = new Random(seed);
        for (int i = 0; i < edgeCount; i++) {
            int from = random.nextInt(nodes.length);
            int to = random.nextInt(nodes.length);
            nodes[from].addDirectSuccessor(nodes[to]);
        }
    }

    static GraphBuilder getProxy(String host, int port) throws RemoteException {
        try {
            GraphBuilder remote = (GraphBuilder) Naming.lookup(
                    "rmi://" + host + ":" + port + "/GraphBuilder");
            return remote;
        } catch (NotBoundException | MalformedURLException e) {
            throw new RuntimeException(e);
        }
    }
}
