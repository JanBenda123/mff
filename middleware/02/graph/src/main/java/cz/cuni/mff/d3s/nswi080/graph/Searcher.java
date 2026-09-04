package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.Remote;
import java.rmi.RemoteException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;

public interface Searcher extends Remote {
    /**
     * Value returned from {@link #getDistance(Node, Node)} when there is no path
     * between the two nodes.
     */
    int DISTANCE_INFINITE = -1;

    /**
     * Computes the distance between the source node and the target node using
     * breadth-first search.
     * Starting from the source node, the set of visited nodes is always extended by
     * immediate successors
     * of all visited nodes, until the target node is visited or no node is left.
     *
     * @param from the source node
     * @param to   the target node
     * @return the distance between the nodes, or {@link #DISTANCE_INFINITE} if
     *         there is no path between them
     */
    default int getDistance(Node from, Node to) throws RemoteException {
        Set<Node> visited = new HashSet<>();
        Set<Node> boundary = new HashSet<>();
        int distance = 0;
        boundary.add(from);
        while (!boundary.contains(to)) {
            if (boundary.isEmpty()) {
                return Searcher.DISTANCE_INFINITE;
            }
            Set<Node> traversing = new HashSet<>();
            visited.addAll(boundary);
            for (Node node : boundary) {
                traversing.addAll(node.getDirectSuccessors());
            }
            traversing.removeIf(visited::contains);
            boundary = traversing;
            distance++;
        }
        return distance;
    }

    /**
     * Computes the distance between the source node and the target node using a
     * transitive successors algorithm.
     * Starting from the source node, the set of visited nodes is always extended by
     * transitive successors
     * of all visited nodes (up to a specified distance), until the target node is
     * visited or no node is left.
     * This approach reduces network roundtrips by fetching multiple hops in a
     * single call.
     *
     * @param successorDistance the maximum distance of nodes to be returned in one
     *                          call
     * @param from              the source node
     * @param to                the target node
     * @return the distance between the nodes, or {@link #DISTANCE_INFINITE} if
     *         there is no path between them
     */
    default int getDistanceTransitive(int successorDistance, Node from, Node to) throws RemoteException {
        if (from.equals(to)) {
            return 0;
        }
        Set<Node> visited = new HashSet<>();
        Map<Node, Integer> boundary = new HashMap<>();
        boundary.put(from, 0);
        while (!boundary.isEmpty()) {
            Map<Node, Integer> traversing = new HashMap<>();
            for (Entry<Node, Integer> currentTuple : boundary.entrySet()) {
                Node currentNode = currentTuple.getKey();
                int currentDistance = currentTuple.getValue();
                if (visited.contains(currentNode)) {
                    continue;
                }
                Map<Node, Integer> partialGraph = currentNode.getTransitiveSuccessors(successorDistance);
                for (Entry<Node, Integer> searchedTuple : partialGraph.entrySet()) {
                    final Node searchedNode = searchedTuple.getKey();
                    final int newDistance = currentDistance + searchedTuple.getValue();
                    Integer oldDistance = traversing.get(searchedNode);
                    if (oldDistance == null || newDistance < oldDistance)
                        traversing.put(searchedNode, newDistance);
                }
                visited.add(currentNode);
            }
            Integer distance = traversing.get(to);
            if (distance != null) {
                return distance;
            }
            boundary = traversing;
        }
        return Searcher.DISTANCE_INFINITE;
    }
}
