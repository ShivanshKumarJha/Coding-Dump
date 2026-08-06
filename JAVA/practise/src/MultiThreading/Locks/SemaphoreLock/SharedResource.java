package MultiThreading.Locks.SemaphoreLock;

import java.util.concurrent.Semaphore;

public class SharedResource {

    boolean isAvailable = false;
    Semaphore lock = new Semaphore(2);

    public void produce() {

        try {
            lock.acquire();
            System.out.println("Semaphore lock acquired by: " + Thread.currentThread().getName());
            isAvailable = false;
            Thread.sleep(6000);
        } catch (Exception _) {
        } finally {
            lock.release();
            System.out.println("Semaphore lock released by: " + Thread.currentThread().getName());
        }
    }
}
