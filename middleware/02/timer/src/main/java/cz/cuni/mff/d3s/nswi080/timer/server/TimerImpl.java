package cz.cuni.mff.d3s.nswi080.timer.server;

import cz.cuni.mff.d3s.nswi080.timer.Timer;

import java.rmi.RemoteException;
import java.rmi.server.UnicastRemoteObject;
import java.time.Duration;
import java.time.Instant;
import java.util.Objects;

public class TimerImpl extends UnicastRemoteObject implements Timer {
    private Instant startInstant;
    private Instant stopInstant;

    TimerImpl() throws RemoteException {
    }

    @Override
    public synchronized void start() throws RemoteException {
        startInstant = Instant.now();
        stopInstant = null;
    }

    @Override
    public synchronized void stop() throws RemoteException {
        Objects.requireNonNull(startInstant);
        if (stopInstant != null) {
            throw new IllegalStateException("The timer is already stopped.");
        }
        stopInstant = Instant.now();
    }

    @Override
    public synchronized Duration elapsedTime() throws RemoteException {
        Objects.requireNonNull(startInstant);
        Instant stop = stopInstant == null ? Instant.now() : stopInstant;
        return Duration.between(startInstant, stop);
    }
}
