package MultiThreading.Locks.StampedLock;

import java.util.concurrent.locks.StampedLock;

// 2. Optimistic Read Lock functionality
public class SharedResourceOptimistic {

    boolean isAvailable = false;
    StampedLock lock = new StampedLock();

    public void produce() {
        long stamp = lock.tryOptimisticRead();
        try {
            System.out.println("Optimistic Read lock acquired by: " + Thread.currentThread().getName());
            isAvailable = false;
            Thread.sleep(6000);

            if (lock.validate(stamp)) {
                System.out.println("Optimistic Read lock validation succeeded for: " + Thread.currentThread().getName());
            } else {
                System.out.println("Optimistic Read lock validation failed for: " + Thread.currentThread().getName());
            }
            System.out.println("Optimistic Read lock released by: " + Thread.currentThread().getName());
        } catch (Exception _) {
        } finally {
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
