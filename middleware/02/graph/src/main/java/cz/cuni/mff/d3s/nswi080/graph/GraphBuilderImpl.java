package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.RemoteException;
import java.util.Random;

public class GraphBuilderImpl implements GraphBuilder {
    private Node[] nodes;

    @Override
    public Node[] CreateNodes(int nodeCount) throws RemoteException {
        nodes = new Node[nodeCount];
        for (int i = 0; i < nodeCount; i++) {
            nodes[i] = new NodeImpl();
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
}
