package FileHandling;

import java.io.*;
import java.nio.charset.StandardCharsets;

public class IOStreamWriterReader {

    public static void main(String[] args) throws IOException {
        OutputStreamWriter writer = new OutputStreamWriter(new FileOutputStream("Sample.txt"), StandardCharsets.UTF_8);
        writer.write("Hello from Shivansh $$$$");
        writer.close();
        System.out.println("File written successfully!");

        // -------------------------------------------------------------------------------------------------

        InputStreamReader reader = new InputStreamReader(new FileInputStream("Sample.txt"), StandardCharsets.UTF_8);
        int ch;

        while ((ch = reader.read()) != -1) {
            System.out.print((char) ch);
        }
        reader.close();
        System.out.println("\nFile read successfully!");
    }
}
