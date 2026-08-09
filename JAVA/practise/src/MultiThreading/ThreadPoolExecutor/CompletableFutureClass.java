package MultiThreading.ThreadPoolExecutor;

import java.util.concurrent.*;

public class CompletableFutureClass {

    static void main(String[] args) {
        try {
// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            ThreadPoolExecutor poolExecutor = new ThreadPoolExecutor(
                    3, 3, 10, TimeUnit.MINUTES, new ArrayBlockingQueue<>(10), Executors.defaultThreadFactory(), new CustomRejectionHandler()
            );

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            // Method 1 : supplyAsync() method which initiate the async method and return the CompletableFuture object
            CompletableFuture<String> asyncTask1 = CompletableFuture.supplyAsync(() -> {
                return "Task 1 completed";
            }, poolExecutor);
            System.out.println(asyncTask1.get());

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            // Method 2 : thenApply and thenApplyAsync method which apply a function to the result of the previous stage and return a new CompletableFuture object
            // thenApply is synchronous execution means, it uses the same thread which completed the previous async tasks
            // thenApplySync is asynchronous execution means, it uses a different thread(from fork-join pool) from the thread pool to execute the next async task
            CompletableFuture<String> asyncTask2 = asyncTask1.thenApply(result -> {
                return result + " and Task 2 completed";
            }).thenApply(result -> {
                return result + " and Task 3 completed";
            });
            System.out.println(asyncTask2.get());

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            // Method 3 : thenCompose and thenComposeAsync method which apply a function to the result of the previous stage and return a new CompletableFuture object
            // thenCompose is synchronous execution means, it uses the same thread which completed the previous async tasks
            // thenComposeSync is asynchronous execution means, it uses a different thread(from fork-join pool) from the thread pool to execute the next async task
            CompletableFuture<String> asyncTask3 = asyncTask1.thenCompose(result -> {
                return CompletableFuture.supplyAsync(() -> {
                    return result + " and Task 4 completed";
                }, poolExecutor);
            }).thenCompose(result -> {
                return CompletableFuture.supplyAsync(() -> {
                    return result + " and Task 5 completed";
                }, poolExecutor);
            });
            System.out.println(asyncTask3.get());

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            // Method 4 : thenAccept and thenAcceptAsync method which accept a consumer to process the result of the previous stage and return a new CompletableFuture object
            // thenAccept is synchronous execution means, it uses the same thread which completed the previous async tasks
            // thenAcceptSync is asynchronous execution means, it uses a different thread(from fork-join pool) from the thread pool to execute the next async task
            CompletableFuture<Void> asyncTask4 = asyncTask1.thenAccept(result -> {
                System.out.println(result + " and Task 6 completed");
            }).thenAccept(result -> {
                System.out.println(result + " and Task 7 completed");
            });
            System.out.println(asyncTask4.get());

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

            // Method 5 : thenCombine and thenCombineAsync method which combine the result of two CompletableFuture objects and return a new CompletableFuture object
            // thenCombine is synchronous execution means, it uses the same thread which completed the previous async tasks
            // thenCombineSync is asynchronous execution means, it uses a different thread(from fork-join pool) from the thread pool to execute the next async task
            CompletableFuture<String> asyncTask5 = asyncTask1.thenCombine(asyncTask2, (result1, result2) -> {
                return result1 + " and " + result2 + " and Task 8 completed";
            }).thenCombine(asyncTask3, (result1, result2) -> {
                return result1 + " and " + result2 + " and Task 9 completed";
            });
            System.out.println(asyncTask5.get());

// -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        } catch (Exception e) {
            // handle exception here
        }
    }
}
