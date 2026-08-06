package JavaCollections;

/*
Deque implements Queue interface
Queue has following methods : add(), offer(), poll(), remove(), peek(), element()
Deque has following methods : addFirst(), addLast(), offerFirst(), offerLast(), pollFirst(), pollLast(), peekFirst(), peekLast(), getFirst(), peekFirst(), getLast(), peekLast()

ArrayQueue and Stack implements Deque interface
To use it as a Stack, push() and pop() methods are used

For Deque, the methods which are defined in the Queue behaves as following:
    add() - calls addLast() method
    offer() - calls offerLast() method
    poll() - calls pollFirst() method
    remove() - calls pollFirst() method
    peek() - calls peekFirst() method
    element() - calls element() method

So, by default it will behave like a Queue
 */

import java.util.ArrayDeque;

public class QueueListExample {
    static void main(String[] args){
        // This is the queue implementation
        ArrayDeque<Integer> q = new ArrayDeque<>();
        q.addLast(1);
        q.addLast(2);
        q.addLast(3);

        int element = q.removeFirst();
        System.out.println("Removed element: " + element);

        // This is the stack implementation
        ArrayDeque<Integer> stack = new ArrayDeque<>();
        stack.push(1);
        stack.push(2);
        stack.push(3);

        int poppedElement = stack.pop();
        System.out.println("Popped element: " + poppedElement);
    }
}

/*
Thread safe version of Deque is ConcurrentLinkedDeque
Thread safe version of PriorityQueue is PriorityBlockingQueue
 */