package MultiThreading.ThreadPoolExecutor;

import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;

public class ScheduledThreadPoolExecutor {

    static void main(String[] args) {

        ScheduledExecutorService poolObj = Executors.newScheduledThreadPool(5);

        // ---------------------------------------------------------------------------------------------------------------------------------------------------

        // 1. schedule() with Runnable interface
        poolObj.schedule(() -> {
            System.out.println("Task processed by " + Thread.currentThread().getName());
        }, 5, TimeUnit.SECONDS);

        // ---------------------------------------------------------------------------------------------------------------------------------------------------

        // 2. schedule() with Callable interface
        Future<String> futureObj = poolObj.schedule(() -> {
            System.out.println("Task processed by " + Thread.currentThread().getName());
            return "Task completed";
        }, 5, TimeUnit.SECONDS);

        try {
            String result = futureObj.get();
            System.out.println(result);
        } catch (Exception e) {
            // handle exception here
        }

        // ---------------------------------------------------------------------------------------------------------------------------------------------------

        // 3. scheduleAtFixedRate() with Runnable interface
        poolObj.scheduleAtFixedRate(() -> {
            System.out.println("Hello from " + Thread.currentThread().getName());
        }, 2, 5, TimeUnit.SECONDS);

        // ---------------------------------------------------------------------------------------------------------------------------------------------------

        // 4. scheduleWithFixedDelay() with Runnable interface
        poolObj.scheduleWithFixedDelay(() -> {
            System.out.println("Hello from " + Thread.currentThread().getName());
        }, 2, 5, TimeUnit.SECONDS);

        // ---------------------------------------------------------------------------------------------------------------------------------------------------
    }
}
