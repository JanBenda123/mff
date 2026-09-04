package cz.cuni.mff.d3s.nswi080.timer.server;

import cz.cuni.mff.d3s.nswi080.timer.TimerProvider;

import java.rmi.RemoteException;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;

public class Server {
    /**
     * The remotely accessible object. We need to keep a reference to it
     * to prevent it from being garbage collected.
     */
    private static TimerProvider timerProvider;

    public static void main(String[] args) throws RemoteException {
        // Create or locate the registry on the specified host and port.
        Registry registry;
        switch (args.length) {
            case 0 -> {
                System.out.println("Creating the registry on port 5000");
                registry = LocateRegistry.createRegistry(5000);
            }
            case 1 -> {
                String host = args[0];
                System.out.println("Locating the registry on " + host);
                registry = LocateRegistry.getRegistry(host);
            }
            case 2 -> {
                String host = args[0];
                int port = Integer.parseInt(args[1]);
                System.out.println("Locating the registry on " + host + ":" + port);
                registry = LocateRegistry.getRegistry(host, port);
            }
            default -> throw new IllegalArgumentException("Invalid number of arguments");
        }

        // Instantiate the remotely accessible object. The constructor
        // of the object automatically exports it for remote invocation.
        timerProvider = new TimerProviderImpl();

        // Use the registry on this host to register the exported object.
        System.out.println("Exporting the timer provider");
        registry.rebind("TimerProvider", timerProvider);
        // Alternative way to bind the object to an existing registry:
        // Naming.rebind("//localhost:5000/TimerProvider", timerProvider);

        // The virtual machine will not exit here because the export of
        // the remotely accessible object creates a new non-deamon thread that
        // keeps the application alive (until there exists a reference to an
        // exported object).
        System.out.println("Server is running");
    }
}
