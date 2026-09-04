package cz.cuni.mff.d3s.nswi080.graph;

import java.io.BufferedWriter;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.charset.StandardCharsets;

public class CsvWriter implements AutoCloseable {
    private final BufferedWriter writer;
    private final String separator;

    public CsvWriter(String fileName, String[] headers, String separator) throws IOException {
        this.separator = separator;
        this.writer = new BufferedWriter(new FileWriter(fileName, StandardCharsets.UTF_8));

        writeRow(headers);
    }

    public void writeRow(String[] columns) throws IOException {
        StringBuilder row = new StringBuilder();
        for (int i = 0; i < columns.length; i++) {
            row.append(columns[i]);
            if (i < columns.length - 1) {
                row.append(separator);
            }
        }
        writer.write(row.toString());
        writer.newLine();
    }

    @Override
    public void close() throws IOException {
        if (writer != null) {
            writer.flush();
            writer.close();
        }
    }
}