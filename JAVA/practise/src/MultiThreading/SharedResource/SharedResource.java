package MultiThreading.SharedResource;

public class SharedResource {

    boolean itemAvailable = false;

    public synchronized void addItem() {
        itemAvailable = true;
        System.out.println("Item added by: " + Thread.currentThread().getName() + " and invoking");
        notifyAll();
    }

    public synchronized void consumeItem() {
        System.out.println("ConsumeItem method invoked by: " + Thread.currentThread().getName());

        // Using while loop to avoid spurious wakeup, sometimes a thread can wake up without being notified,
        // so we need to check the condition again
        while (!itemAvailable) {
            try {
                System.out.println("Thread " + Thread.currentThread().getName() + " is waiting for item to be available");
                wait();  // releases the monitor locks
            } catch (Exception _) {

            }
        }
        System.out.println("Item consumed by: " + Thread.currentThread().getName());
        itemAvailable = false;
    }
}
