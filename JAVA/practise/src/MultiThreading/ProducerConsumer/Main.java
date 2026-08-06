package MultiThreading.ProducerConsumer;

public class Main {

    static void main(String[] args) {

        SharedResource sharedBuffer = new SharedResource(3);

        Thread producerThread = new Thread(() -> {
            try {
                for (int i = 0; i <= 6; i++) {
                    sharedBuffer.produce(i);
                }
            } catch (Exception _) {
            }
        });

        Thread consumerThread = new Thread(() -> {
            try {
                for (int i = 0; i <= 6; i++) {
                    int item = sharedBuffer.consume();
                }
            } catch (Exception _) {
            }
        });

        producerThread.start();
        consumerThread.start();
    }
}
