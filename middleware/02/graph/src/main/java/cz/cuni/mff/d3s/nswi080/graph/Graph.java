package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.RemoteException;

/**
 * A directed graph.
 */
public class Graph {
    /**
     * Nodes in the graph.
     */
    private final Node[] nodes;
    private GraphBuilder graphBuilder;

    /**
     * Creates an empty graph with the specified number of nodes.
     *
     * @param nodeCount number of nodes
     */
    public Graph(int nodeCount, GraphBuilder graphBuilder) throws RemoteException {
        this.graphBuilder = graphBuilder;
        this.nodes = graphBuilder.CreateNodes(nodeCount);
    }

    /**
     * Creates a graph with the specified nodes.
     *
     * @param nodes nodes in the graph
     */
    public Graph(Node[] nodes) {
        this.nodes = nodes;
    }

    /**
     * Gets the number of nodes in the graph.
     */
    public int getNodeCount() {
        return nodes.length;
    }

    /**
     * Gets the node at the specified index.
     */
    public Node getNode(int index) {
        return nodes[index];
    }

    /**
     * Adds random edges to the graph.
     *
     * @param edgeCount number of edges
     * @param random    random number generator
     */
    public void addRandomEdges(int edgeCount, long seed) throws RemoteException {
        graphBuilder.AddRandomEdges(edgeCount, seed);
    }
}
