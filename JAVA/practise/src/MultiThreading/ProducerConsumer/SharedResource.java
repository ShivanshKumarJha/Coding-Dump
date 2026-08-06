package MultiThreading.ProducerConsumer;

import java.util.LinkedList;
import java.util.Queue;

public class SharedResource {

    private final Queue<Integer> sharedBuffer;
    private final int bufferSize;

    public SharedResource(int bufferSize) {
        this.bufferSize = bufferSize;
        this.sharedBuffer = new LinkedList<>();
    }

    public synchronized void produce(int item) throws Exception {
        while (sharedBuffer.size() == bufferSize) {
            System.out.println("Buffer is full, producer is waiting...");
            wait();
        }
        sharedBuffer.offer(item);
        System.out.println("Item produced by: " + Thread.currentThread().getName() + ": " + item);
        notify();
    }

    public synchronized int consume() throws Exception {
        while (sharedBuffer.isEmpty()) {
            System.out.println("Buffer is empty, consumer is waiting...");
            wait();
        }

        int item = sharedBuffer.poll();
        System.out.println("Item consumed by: " + Thread.currentThread().getName() + ": " + item);
        notify();
        return item;
    }
}

