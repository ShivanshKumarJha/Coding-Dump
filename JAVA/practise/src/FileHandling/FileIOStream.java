package FileHandling;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class FileIOStream {

    public static void main(String[] args) throws IOException {

        // Will create a new file if it does not exist, or overwrite the existing file but if
        // we want to append to the existing file then we can use the constructor FileOutputStream(String name, boolean append)
        FileOutputStream fos = new FileOutputStream("Sample.txt");

        // Writing byte by byte to a file
        fos.write(72);
        fos.write(105);
        fos.write('\n');

        // Writes an entire byte array at once
        byte[] message = "Hello from Shivansh".getBytes();
        fos.write(message);

        fos.close();
        System.out.println("File written successfully!");

        // -------------------------------------------------------------------------------------------------

        // Reading the content of the file
        File file = new File("Sample.txt");
        FileInputStream fis = new FileInputStream(file);

        if (!file.exists()) {
            System.out.println("File does not exist.");
        } else {

            // Reading byte by byte
            int byteValue;
            while ((byteValue = fis.read()) != -1) {
                System.out.println((char) byteValue);
            }
        }

        fis.close();
    }
}
