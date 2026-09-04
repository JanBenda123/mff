package cz.cuni.mff.d3s.nswi080.timer;

import java.rmi.Remote;
import java.rmi.RemoteException;

public interface TimerProvider extends Remote {
    /**
     * Creates and returns a new timer.
     */
    Timer createTimer() throws RemoteException;

    /**
     * Submits the lab activity. Connect to lab.d3s.mff.cuni.cz:6002 and pass
     * your SIS username to complete the activity.
     *
     * @param sisUsername your SIS username
     */
    void submitLabActivity(String sisUsername) throws RemoteException;
}
