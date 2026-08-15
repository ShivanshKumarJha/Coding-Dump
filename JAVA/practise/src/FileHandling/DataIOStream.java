package FileHandling;

import java.io.*;

public class DataIOStream {

    static void main(String[] args) throws IOException {

        DataOutputStream dos = new DataOutputStream(new BufferedOutputStream(new FileOutputStream("Sample.txt")));

        dos.writeInt(123);
        dos.writeDouble(87.5);
        dos.writeBoolean(true);
        dos.writeLong(123456789L);
        dos.writeChar('A');
        dos.close();
        System.out.println("File written successfully!");

        // Must read in the same order as it was written
        DataInputStream dis = new DataInputStream(new BufferedInputStream(new FileInputStream("Sample.txt")));
        int id = dis.readInt();
        double health = dis.readDouble();
        boolean isAlive = dis.readBoolean();
        long timeStamp = dis.readLong();
        long score = dis.readChar();
        dis.close();

        System.out.println("ID: " + id);
        System.out.println("Health: " + health);
        System.out.println("Is Alive: " + isAlive);
        System.out.println("Time Stamp: " + timeStamp);
        System.out.println("Score: " + score);

        dis.close();
    }
}
