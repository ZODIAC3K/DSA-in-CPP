import java.util.concurrent.BlockingQueue;
import java.util.concurrent.LinkedBlockingQueue;

public class Semaphore {
    private static final BlockingQueue<Integer> queue = new LinkedBlockingQueue<>(10);

    public static void main(String[] args) {
        new Thread(new Producer()).start();
        new Thread(new Consumer()).start();
    }

    private static class Producer implements Runnable {
        @Override
        public void run() {
            for (int i = 0; i < 100; i++) {
                try {
                    queue.put(i);
                    System.out.println("Produced: " + i);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }

    private static class Consumer implements Runnable {
        @Override
        public void run() {
            while (true) {
                try {
                    int item = queue.take();
                    System.out.println("Consumed: " + item);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
            }
        }
    }
}
