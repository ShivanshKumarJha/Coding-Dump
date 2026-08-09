package MultiThreading.ThreadPoolExecutor;

import java.util.concurrent.ForkJoinPool;
import java.util.concurrent.Future;
import java.util.concurrent.RecursiveTask;

public class WorkStealingPoolExecutor {

    static void main(String[] args) {

        try {
            ForkJoinPool pool = ForkJoinPool.commonPool();
            Future<Integer> futureObj = pool.submit(new ComputeTask(0, 10));
            System.out.println(futureObj.get());
        } catch (Exception e) {
            // handle exception here
        }
    }
}

class ComputeTask extends RecursiveTask<Integer> {

    int start;
    int end;

    ComputeTask(int start, int end) {
        this.start = start;
        this.end = end;
    }

    @Override
    protected Integer compute() {
        if (end - start <= 4) {
            int sum = 0;
            for (int i = start; i <= end; i++) {
                sum += i;
            }
            return sum;
        } else {
            // Split the task
            int mid = (start + end) / 2;
            ComputeTask leftTask = new ComputeTask(start, mid);
            ComputeTask rightTask = new ComputeTask(mid + 1, end);

            // Fork the subtasks for parallel execution
            leftTask.fork();
            rightTask.fork();

            // Combine the results of the subtasks
            int leftResult = leftTask.join();
            int rightResult = rightTask.join();

            // Return the combined result
            return leftResult + rightResult;
        }
    }
}