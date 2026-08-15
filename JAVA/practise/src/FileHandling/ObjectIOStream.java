package FileHandling;

import java.io.*;

class Player implements Serializable {
    private final String name;
    private final double health;
    private final int score;

    public Player(String name, double health, int score) {
        this.name = name;
        this.health = health;
        this.score = score;
    }

    public String getName() {
        return name;
    }

    public double getHealth() {
        return health;
    }

    public int getScore() {
        return score;
    }
}

public class ObjectIOStream {

    static void main(String[] args) throws IOException, ClassNotFoundException {

        Player player1 = new Player("Shivansh", 100.0, 500);

        // Writing the object to a file
        ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("player.dat"));
        oos.writeObject(player1);
        oos.close();
        System.out.println("Object written successfully!");

        // Reading the object from the file
        ObjectInputStream ois = new ObjectInputStream(new FileInputStream("player.dat"));
        Player readPlayer = (Player) ois.readObject();
        ois.close();

        System.out.println("Name: " + readPlayer.getName());
        System.out.println("Health: " + readPlayer.getHealth());
        System.out.println("Score: " + readPlayer.getScore());
    }
}
