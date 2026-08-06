package MultiThreading.Locks.ReentrantLock;

import java.util.concurrent.locks.ReentrantLock;

public class Main {

    static void main(String[] args) {

        ReentrantLock lock = new ReentrantLock();
        SharedResource resource1 = new SharedResource();
        SharedResource resource2 = new SharedResource();

        Thread th1 = new Thread(() -> {
            System.out.println("Thread1 calling producer method");
            resource1.producer(lock);
        });

        Thread th2 = new Thread(() -> {
            System.out.println("Thread2 calling producer method");
            resource2.producer(lock);
        });

        th1.start();
        th2.start();
    }
}
