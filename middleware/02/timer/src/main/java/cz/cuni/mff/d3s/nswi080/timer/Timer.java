package cz.cuni.mff.d3s.nswi080.timer;

import java.rmi.Remote;
import java.rmi.RemoteException;
import java.time.Duration;

public interface Timer extends Remote {
    /**
     * Restarts the timer.
     */
    void start() throws RemoteException;

    /**
     * Stops a running timer.
     */
    void stop() throws RemoteException;

    /**
     * Returns the time elapsed between the start instant and the instant the timer
     * was stopped (or now if the timer is still running).
     */
    Duration elapsedTime() throws RemoteException;
}
