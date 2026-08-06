package MultiThreading.Locks.MonitorLock;

public class MonitorLockExample {

    public synchronized void task1() {
        try {
            System.out.println("Inside task1");
            Thread.sleep(10000);
            System.out.println("Exiting task1");
        } catch (InterruptedException e) {

        }
    }

    public void task2() {
        System.out.println("Inside task2 before synchronized block");
        synchronized (this) {
            System.out.println("Inside task2, synchronized block");
        }
    }

    public void task3() {
        System.out.println("Inside task3");
    }
}