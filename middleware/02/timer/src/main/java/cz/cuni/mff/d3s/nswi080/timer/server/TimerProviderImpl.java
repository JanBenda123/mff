package cz.cuni.mff.d3s.nswi080.timer.server;

import cz.cuni.mff.d3s.nswi080.timer.Timer;
import cz.cuni.mff.d3s.nswi080.timer.TimerProvider;

import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;

public class TimerProviderImpl extends UnicastRemoteObject implements TimerProvider {
    TimerProviderImpl() throws RemoteException {
    }

    @Override
    public Timer createTimer() throws RemoteException {
        return new TimerImpl();
    }

    @Override
    public void submitLabActivity(String sisUsername) throws RemoteException {
        throw new UnsupportedOperationException("Connect to lab.d3s.mff.cuni.cz:6002 to complete the lab activity.");
    }
}
