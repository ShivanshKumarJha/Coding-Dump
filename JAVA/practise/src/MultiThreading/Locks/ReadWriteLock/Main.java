package MultiThreading.Locks.ReadWriteLock;

import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;

public class Main {

    static void main(String[] args) {

        SharedResource resource = new SharedResource();
        ReadWriteLock lock = new ReentrantReadWriteLock();

        Thread th1 = new Thread(() -> {
            resource.produce(lock);
        });

        Thread th2 = new Thread(() -> {
            resource.produce(lock);
        });

        SharedResource resource2 = new SharedResource();
        Thread th3 = new Thread(() -> {
            resource2.consume(lock);
        });

        th1.start();
        th2.start();
        th3.start();
    }
}
