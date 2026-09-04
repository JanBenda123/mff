package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface GraphBuilder extends Remote {
    Node[] CreateNodes(int nodeCount) throws RemoteException;

    void AddRandomEdges(int edgeCount, long seed) throws RemoteException;
}
