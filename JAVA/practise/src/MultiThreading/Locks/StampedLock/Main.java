package MultiThreading.Locks.StampedLock;

public class Main {

    static void main(String[] args) {

        SharedResourceOptimistic resource = new SharedResourceOptimistic();

        Thread th1 = new Thread(resource::produce);
        Thread th2 = new Thread(resource::consume);

        th1.start();
        th2.start();
    }
}
