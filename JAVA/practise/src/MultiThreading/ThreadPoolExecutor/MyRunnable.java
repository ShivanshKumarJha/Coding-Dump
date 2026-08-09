package MultiThreading.ThreadPoolExecutor;

import java.util.List;

public class MyRunnable implements Runnable {
    List<Integer> list;

    public MyRunnable(List<Integer> list) {
        this.list = list;
    }

    @Override
    public void run() {
        // Thread has to do something
        list.add(200);
    }
}
