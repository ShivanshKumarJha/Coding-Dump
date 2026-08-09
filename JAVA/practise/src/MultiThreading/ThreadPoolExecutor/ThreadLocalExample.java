package MultiThreading.ThreadPoolExecutor;

public class ThreadLocalExample {

    static void main(String[] args) {
        ThreadLocal<Integer> threadLocal = new ThreadLocal<>();

        Runnable task = () -> {
            threadLocal.set((int) (Math.random() * 100D));
            try {
                Thread.sleep(2000);
            } catch (Exception e) {
                // handle exception here
            }
            System.out.println(Thread.currentThread().getName() + ": " + threadLocal.get());
            threadLocal.remove();  // Clean up the ThreadLocal variable to prevent memory leaks
        };

        Thread thread1 = new Thread(task);
        Thread thread2 = new Thread(task);

        thread1.start();
        thread2.start();
    }
}
