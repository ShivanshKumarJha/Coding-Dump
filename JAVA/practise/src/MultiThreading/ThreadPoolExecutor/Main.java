package MultiThreading.ThreadPoolExecutor;

import java.util.concurrent.*;

public class Main {

    public static void main() {

        ThreadPoolExecutor executor = new ThreadPoolExecutor(
                2, 4, 10, TimeUnit.MINUTES, new ArrayBlockingQueue<>(2), new CustomThreadFactory(), new CustomRejectionHandler()
        );
        executor.allowCoreThreadTimeOut(true);

        for (int i = 0; i < 7; i++) {
            executor.submit(() -> {
                try {
                    Thread.sleep(5000);
                } catch (Exception _) {
                    // handle exception here
                }
                System.out.println("Task processed by " + Thread.currentThread().getName());
            });
        }

        executor.shutdown();
    }
}

class CustomThreadFactory implements ThreadFactory {

    @Override
    public Thread newThread(Runnable r) {
        Thread thread = new Thread(r);
        thread.setPriority(Thread.NORM_PRIORITY);
        thread.setDaemon(false);
        thread.setName("CustomThread-" + thread.getId());
        return thread;
    }
}

class CustomRejectionHandler implements RejectedExecutionHandler {

    @Override
    public void rejectedExecution(Runnable r, ThreadPoolExecutor executor) {
        System.out.println("Task " + r.toString() + " rejected from " + executor.toString());
    }
}