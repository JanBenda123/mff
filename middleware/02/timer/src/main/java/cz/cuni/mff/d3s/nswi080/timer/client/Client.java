package cz.cuni.mff.d3s.nswi080.timer.client;

import cz.cuni.mff.d3s.nswi080.timer.Timer;
import cz.cuni.mff.d3s.nswi080.timer.TimerProvider;

import java.net.MalformedURLException;
import java.rmi.Naming;
import java.rmi.NotBoundException;
import java.rmi.RemoteException;
import java.time.Duration;

public class Client {
    public static void main(String[] args) throws MalformedURLException, NotBoundException, RemoteException, InterruptedException {
        TimerProvider provider = (TimerProvider) Naming.lookup("rmi://lab.d3s.mff.cuni.cz:6002/TimerProvider");
        System.out.println("Creating the timer");
        Timer timer = provider.createTimer();
        System.out.println("Starting the timer");
        timer.start();
        System.out.printf("Elapsed time: %d ms%n", timer.elapsedTime().toMillis());
        System.out.println("Sleeping...");
        Thread.sleep(Duration.ofSeconds(1));
        System.out.println("Stopping the timer");
        timer.stop();
        System.out.printf("Elapsed time: %d ms%n", timer.elapsedTime().toMillis());

        // TODO Lab Activity: Connect to lab.d3s.mff.cuni.cz:6002 and submit your SIS username to complete the activity.
        provider.submitLabActivity("bendaja1");
        System.out.println("Lab activity completed.");
    }
}
