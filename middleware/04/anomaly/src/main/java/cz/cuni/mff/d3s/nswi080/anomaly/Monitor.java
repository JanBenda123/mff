package cz.cuni.mff.d3s.nswi080.anomaly;

import oshi.SystemInfo;
import oshi.hardware.HardwareAbstractionLayer;
import oshi.hardware.Sensors;

import java.time.Duration;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Random;

/**
 * The monitor program.
 */
public class Monitor {
    /**
     * The period between taking the measurements.
     */
    private static final Duration SAMPLE_PERIOD = Duration.ofSeconds(3);

    /**
     * The topic where measurements are sent.
     */
    private static final String MONITOR_TOPIC = "monitor";

    public static void main(String[] args) throws InterruptedException {
        if (args.length == 0) {
            throw new IllegalArgumentException("Usage: <program> hostname");
        }
        String hostname = args[0];
        SystemInfo si = new SystemInfo();
        HardwareAbstractionLayer hal = si.getHardware();
        Sensors sensors = hal.getSensors();
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss.SSS");
        Random random = new Random();
        String bootstrapServers = "localhost:9092";

        // TODO (part 1): Carefully select the key and value and create a producer.

        while (true) {
            LocalDateTime now = LocalDateTime.now();
            double cpuTemp = sensors.getCpuTemperature();
            // Simulate the temperature sensor if it doesn't work.
            if (cpuTemp == 0) {
                cpuTemp = 75 + (random.nextDouble() * 2 - 1);
            }
            // Simulate random failures of the sensor (do not remove this).
            if (random.nextInt() % 31 == 0) {
                cpuTemp = Double.longBitsToDouble(random.nextLong());
            }
            System.out.printf("%s monitor [%s]: measured %s%n", formatter.format(now), hostname, cpuTemp);

            // TODO (part 1): Send the data to the monitor topic.

            Thread.sleep(SAMPLE_PERIOD);
        }
    }
}
