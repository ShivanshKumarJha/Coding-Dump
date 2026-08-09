package MultiThreading.ThreadPoolExecutor;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.*;

public class FutureExample {

    static void main(String[] args) {

        // Futures and Callables
        /*ThreadPoolExecutor poolExecutor = new ThreadPoolExecutor(
                1, 1, 10, TimeUnit.MINUTES, new ArrayBlockingQueue<>(2), Executors.defaultThreadFactory(), new CustomRejectionHandler()
        );

        Future<?> futureObj1 = poolExecutor.submit(() -> System.out.println("Do something in Future"));

        Future<Integer> futureObj2 = poolExecutor.submit(() -> {
            System.out.println("Do something in Future with return value");
            return 123;
        });*/

        // USE CASES FOR THE CALLABLE
        ThreadPoolExecutor poolExecutor = new ThreadPoolExecutor(
                3, 3, 10, TimeUnit.MINUTES, new ArrayBlockingQueue<>(10), Executors.defaultThreadFactory(), new CustomRejectionHandler()
        );

        //  UseCase 1
        Future<?> futureObj1 = poolExecutor.submit(() -> System.out.println("Task with runnable"));

        try {
            Object object = futureObj1.get();
            System.out.println(object == null);
        } catch (Exception _) {
            // handle exception here
        }

        // UseCase 2
        List<Integer> output = new ArrayList<>();
        Future<List<Integer>> futureObj2 = poolExecutor.submit(new MyRunnable(output), output);

        try {
            futureObj2.get();
            // 1st way
            System.out.println(output);

            // 2nd way
            List<Integer> ans = futureObj2.get();
            System.out.println(ans);
        } catch (Exception e) {
            // handle exception here
        }

        // UseCase 3
        Future<List<Integer>> futureObj3 = poolExecutor.submit(() -> {
            System.out.println("Task with callable");
            List<Integer> listObj = new ArrayList<>();
            listObj.add(200);
            return listObj;
        });

        try {
            List<Integer> outputFromFutureObj3 = futureObj3.get();
            System.out.println(outputFromFutureObj3);
        } catch (Exception e) {
            // handle exception here
        }
    }
}
