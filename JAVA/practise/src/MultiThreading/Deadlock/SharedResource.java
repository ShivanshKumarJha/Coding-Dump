package MultiThreading.Deadlock;

public class SharedResource {

    boolean isAvailable = false;

    public synchronized void produce() throws Exception {
        System.out.println("Lock acquired");
        isAvailable = true;
        try {
            Thread.sleep(8000);
        } catch (InterruptedException _) {
        }
        System.out.println("Lock released");
    }
}
