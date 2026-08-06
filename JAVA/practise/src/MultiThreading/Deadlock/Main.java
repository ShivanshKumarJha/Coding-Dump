package MultiThreading.Deadlock;

public class Main {

    static void main(String[] args) {
        // This will be deadlock as thread2 will never be able to acquire the lock as thread1 will not release
        // the lock when it is being suspended

        /*
        SharedResource resource = new SharedResource();
        System.out.println("Main thread started");

        Thread th1 = new Thread(() -> {
            System.out.println("Thread1 calling produce method");
            try {
                resource.produce();
            } catch (Exception _) {
            }
        });

        Thread th2 = new Thread(() -> {
            try {
                Thread.sleep(1000);
            } catch (Exception _) {
            }
            System.out.println("Thread2 calling produce method");
            try {
                resource.produce();
            } catch (Exception _) {
            }
        });

        th1.start();
        th2.start();

        try {
            Thread.sleep(3000);
        } catch (Exception _) {
        }

        System.out.println("Main thread suspending thread1");
        th1.suspend();

        System.out.println("Main thread finishing");
        */

        // JOIN method
        /*SharedResource resource = new SharedResource();

        System.out.println("Main thread started");

        Thread th1 = new Thread(() -> {
            System.out.println("Thread1 calling produce method");
            try {
                resource.produce();
            } catch (Exception _) {
            }
        });
        th1.start();

        System.out.println("Main thread is finishing its work");

        output :    Main thread started
                    Main thread is finishing its work
                    Thread1 calling produce method
                    Lock acquired
                    Lock released*/

        /*SharedResource resource = new SharedResource();

        System.out.println("Main thread started");

        Thread th1 = new Thread(() -> {
            System.out.println("Thread1 calling produce method");
            try {
                resource.produce();
            } catch (Exception _) {
            }
        });
        th1.start();

        try {
            th1.join();
        } catch (Exception _) {

        }
        System.out.println("Main thread is finishing its work");*/

        // Daemon Thread
        SharedResource resource = new SharedResource();

        System.out.println("Main thread started");

        Thread th1 = new Thread(() -> {
            System.out.println("Thread1 calling produce method");
            try {
                resource.produce();
            } catch (Exception _) {
            }
        });

        th1.setDaemon(true);
        th1.start();

        System.out.println("Main thread is finishing its work");
    }
}
