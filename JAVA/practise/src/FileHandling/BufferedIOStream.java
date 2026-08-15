package FileHandling;

import java.io.*;

public class BufferedIOStream {

    static void main(String[] args) throws IOException {

        // Without buffering, every write goes to OS immediately
        // With buffering, writes go to an internal buffer first, and only when the buffer is full or when flush() is called, the data is written to disk
        BufferedOutputStream bos = new BufferedOutputStream(new FileOutputStream("Sample.txt"));

        for (int i = 0; i < 1000; i++) {
            bos.write(("Line " + i + "\n").getBytes());
            // These go to the internal buffer, not to disk yet
        }

        // This closes, also flushes the write from buffer to disk too
        bos.close();
        System.out.println("File written successfully!");

        // ------------------------------------------------------------------------------------------------------------------

        // We wrap FileInputStream inside BufferedInputStream
        // It does not replace FileInputStream
        // It adds buffering on top of it. Same API -> just faster

        BufferedInputStream bis = new BufferedInputStream(new FileInputStream("Sample.txt"));

        // Reading byte by byte but from buffer first and when buffer is empty then also goes to OS
        int byteValue;
        while ((byteValue = bis.read()) != -1) {
            System.out.println((char) byteValue);
        }

        bis.close();
    }
}
