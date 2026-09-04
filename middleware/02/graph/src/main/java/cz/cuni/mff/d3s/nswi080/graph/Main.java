package cz.cuni.mff.d3s.nswi080.graph;

import java.io.IOException;
import java.rmi.RemoteException;
import java.util.Random;

public class Main {
    /**
     * Create a randomly connected graph and measure the time of the search
     * operation.
     *
     * @param graphBuilder graph builder
     * @param searcher     searcher
     * @param nodeCount    number of nodes
     * @param edgeCount    number of edges
     * @param attemptCount number of measurements
     * @param seed         seed for random number generator
     */
    private static void searchBenchmark(GraphBuilder graphBuilder, Searcher searcher, int nodeCount, int edgeCount,
            int attemptCount, long seed, String fileName)
            throws RemoteException, IOException {
        Graph graph = new Graph(nodeCount, graphBuilder);
        graph.addRandomEdges(edgeCount, seed);

        System.out.printf("%7s %7s %7s %8s %13s %13s%n", "Nodes", "Edges", "Attempt",
                "Distance", "Time", "TransitiveTime");

        CsvWriter csvWriter = null;
        if (fileName != "" && fileName != null) {
            String[] headers = { "Nodes", "Edges", "Attempt", "Distance", "Time", "TransitiveTime" };
            csvWriter = new CsvWriter(fileName, headers, ";");
        }
        // "Random number" to decorrelate graph generation and node choice
        Random random = new Random(seed + 42);
        for (int i = 0; i < attemptCount; i++) {
            // Select two random nodes.
            int idxFrom = random.nextInt(graph.getNodeCount());
            int idxTo = random.nextInt(graph.getNodeCount());

            // Calculate distance, measure operation time
            long startTimeNs = System.nanoTime();
            int distance = searcher.getDistance(graph.getNode(idxFrom), graph.getNode(idxTo));
            long durationNs = System.nanoTime() - startTimeNs;

            // Calculate transitive distance, measure operation time
            long startTimeTransitiveNs = System.nanoTime();
            int distanceTransitive = searcher.getDistanceTransitive(4, graph.getNode(idxFrom),
                    graph.getNode(idxTo));
            long durationTransitiveNs = System.nanoTime() - startTimeTransitiveNs;

            if (distance != distanceTransitive) {
                System.out.printf("Standard and transitive algorithms inconsistent (%d != %d)%n",
                        distance,
                        distanceTransitive);
            } else {
                System.out.printf("%7d %7d %7d %8d %13d %13d%n", nodeCount, edgeCount, i, distance,
                        durationNs / 1000,
                        durationTransitiveNs / 1000);
                if (csvWriter != null) {
                    csvWriter.writeRow(new String[] { String.valueOf(nodeCount), String.valueOf(edgeCount),
                            String.valueOf(i), String.valueOf(distance), String.valueOf(durationNs / 1000),
                            String.valueOf(durationTransitiveNs / 1000) });
                }
            }
        }
        if (csvWriter != null) {
            csvWriter.close();
        }
    }

    private static void runExerciseBenchmarks(GraphBuilder gb, Searcher s, int attemptCount, long seed)
            throws RemoteException, IOException {
        // Ugly but working
        String gbType = gb.getClass().getName().contains("Proxy") ? "R" : "L";
        String sType = s.getClass().getName().contains("Proxy") ? "R" : "L";
        String exerciseType = gbType + sType;
        searchBenchmark(gb, s, 1000, 2000, attemptCount, seed, "export_" + exerciseType + "_2k.csv");
        searchBenchmark(gb, s, 1000, 10000, attemptCount, seed, "export_" + exerciseType + "_10k.csv");
        searchBenchmark(gb, s, 1000, 50000, attemptCount, seed, "export_" + exerciseType + "_50k.csv");
    }

    public static void main(String[] args) throws RemoteException, IOException {
        String mode = args.length > 0 ? args[0] : "";
        int attemptCount = args.length > 1 ? Integer.parseInt(args[1]) : 500;
        String host = args.length > 2 ? args[2] : "localhost"; // "u-pl1.ms.mff.cuni.cz";

        long seed = 1337;

        int port = 1099;

        // init global implementations
        GraphBuilder RemoteGraphBuilder = GraphBuilderRemoteImpl.getProxy(host, port);
        Searcher RemoteSearcher = SearcherRemoteImpl.getProxy(host, port);

        // Init local implementations
        GraphBuilder LocalGraphBuilder = new GraphBuilderImpl();
        Searcher LocalSearcher = new SearcherImpl();

        switch (mode) {
            case "AllLocal":
                runExerciseBenchmarks(LocalGraphBuilder, LocalSearcher, attemptCount, seed);
                break;
            case "RemoteSearch":
                runExerciseBenchmarks(LocalGraphBuilder, RemoteSearcher, attemptCount, seed);
                break;
            case "RemoteNodes":
                runExerciseBenchmarks(RemoteGraphBuilder, LocalSearcher, attemptCount, seed);
                break;
            case "AllRemote":
                runExerciseBenchmarks(RemoteGraphBuilder, RemoteSearcher, attemptCount, seed);
                break;
            case "AllBenchmarks":
                runExerciseBenchmarks(LocalGraphBuilder, LocalSearcher, attemptCount, seed);
                runExerciseBenchmarks(LocalGraphBuilder, RemoteSearcher, attemptCount, seed);
                runExerciseBenchmarks(RemoteGraphBuilder, LocalSearcher, attemptCount, seed);
                runExerciseBenchmarks(RemoteGraphBuilder, RemoteSearcher, attemptCount, seed);
                break;
            default:
                System.out.print("""
                        Error: First argument not recognized. Try one of the following:

                        AllLocal      - Everything runs locally
                        RemoteSearch  - Search is remote, nodes are serialized
                        RemoteNodes   - Nodes are remote, search is local
                        AllRemote     - Everything runs remotely
                        AllBenchmarks - Run all benchmarks
                        """);
                break;
        }
    }
}
