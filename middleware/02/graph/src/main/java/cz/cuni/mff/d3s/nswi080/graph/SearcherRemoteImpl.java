package cz.cuni.mff.d3s.nswi080.graph;

import java.rmi.Naming;
import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.rmi.NotBoundException;
import java.net.MalformedURLException;

class SearcherRemoteImpl extends UnicastRemoteObject implements Searcher {
    public SearcherRemoteImpl() throws RemoteException {
        super();
    }

    static Searcher getProxy(String host, int port) throws RemoteException {
        try {
            Searcher remote = (Searcher) Naming.lookup(
                    "rmi://" + host + ":" + port + "/Searcher");
            return remote;
        } catch (NotBoundException | MalformedURLException e) {
            throw new RuntimeException(e);
        }
    }
}
