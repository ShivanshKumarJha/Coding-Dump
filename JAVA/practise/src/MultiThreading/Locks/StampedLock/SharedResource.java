package MultiThreading.Locks.StampedLock;

import java.util.concurrent.locks.StampedLock;

// 1. Read/ Write Lock functionality like ReadWriteLock
public class SharedResource {

    boolean isAvailable = false;
    StampedLock lock = new StampedLock();

    public void produce() {
        long stamp = lock.readLock();
        try {
            System.out.println("Read lock acquired by: " + Thread.currentThread().getName());
            isAvailable = false;
            Thread.sleep(6000);
        } catch (Exception _) {
        } finally {
            lock.unlockRead(stamp);
            System.out.println("Read lock released by: " + Thread.currentThread().getName());
        }
    }

    public void consume() {
        long stamp = lock.writeLock();
        try {
            System.out.println("Write lock acquired by: " + Thread.currentThread().getName());
            isAvailable = true;
        } catch (Exception _) {
        } finally {
            lock.unlockWrite(stamp);
            System.out.println("Write lock released by: " + Thread.currentThread().getName());
        }
    }
}

