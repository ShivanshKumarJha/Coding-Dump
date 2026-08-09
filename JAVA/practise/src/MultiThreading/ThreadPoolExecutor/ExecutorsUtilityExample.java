package MultiThreading.ThreadPoolExecutor;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

public class ExecutorsUtilityExample {

    static void main(String[] args) {
        // There are 3 methods : shutdown(), shutdownNow(), awaitTermination()

        ExecutorService poolObj = Executors.newFixedThreadPool(5);

        poolObj.submit(() -> {
            try {
                Thread.sleep(5000);
            } catch (Exception _) {
                // handle exception here
            }
            System.out.println("Task processed by " + Thread.currentThread().getName());
        });

        poolObj.shutdown();
        try {
            boolean isTerminated = poolObj.awaitTermination(6, TimeUnit.SECONDS);
            System.out.println("isTerminated : " + isTerminated);
        } catch (Exception e) {
            // handle exception here
        }
        System.out.println("Main Thread is getting closed!");
    }
}
