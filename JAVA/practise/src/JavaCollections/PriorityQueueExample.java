package JavaCollections;

//It is of two types:
//    Minimum Priority Queue
//    Maximum Priority Queue
//Elements are ordered according to either Natural Ordering(by default) or by Comparator


import java.util.PriorityQueue;

public class PriorityQueueExample {
    public static void main(String[] args) {
        // Minimum Priority Queue
        PriorityQueue<Integer> minPQ = new PriorityQueue<>();
        minPQ.add(5);
        minPQ.add(1);
        minPQ.add(3);
        System.out.println("Minimum Priority Queue: " + minPQ);

        // Maximum Priority Queue
        PriorityQueue<Integer> maxPQ = new PriorityQueue<>((Integer a, Integer b)->b-a);
        maxPQ.add(5);
        maxPQ.add(1);
        maxPQ.add(3);
        System.out.println("Maximum Priority Queue: " + maxPQ);

        minPQ.forEach(System.out::println);
        maxPQ.forEach(System.out::println);

        while(!minPQ.isEmpty()){
            Integer ele = minPQ.poll();
            System.out.println("Removed element: " + ele);
        }
        while(!maxPQ.isEmpty()){
            Integer ele = maxPQ.poll();
            System.out.println("Removed element: " + ele);
        }
    }
}