package MultiThreading.SharedResource;

public class Main {

    static void main(String[] args) {
        SharedResource resource = new SharedResource();

        Thread producerThread = new Thread(() -> {
            try {
                Thread.sleep(2000);
            } catch (Exception _) {
            }
            resource.addItem();
        });
        Thread consumerThread = new Thread(resource::consumeItem);

        producerThread.start();
        consumerThread.start();
    }
}
