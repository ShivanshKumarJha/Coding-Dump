package JavaCollections;
import java.util.*;

public class ListExample {
    public static void main(String[] args) {

        // ==========================
        // Creating Lists
        // ==========================
        List<Integer> list = new ArrayList<>();

        // add(E element)
        list.add(10);
        list.add(20);
        list.add(30);
        System.out.println("After add(): " + list);

        // add(index, element)
        list.add(1, 15);
        System.out.println("After add(index, element): " + list);

        // addAll(Collection)
        List<Integer> another = new ArrayList<>();
        another.add(40);
        another.add(50);
        list.addAll(another);
        System.out.println("After addAll(): " + list);

        // addAll(index, Collection)
        list.addAll(2, Arrays.asList(100, 200));
        System.out.println("After addAll(index): " + list);

        // ==========================
        // Accessing Elements
        // ==========================

        System.out.println("get(2): " + list.get(2));

        // set(index, element)
        list.set(2, 999);
        System.out.println("After set(): " + list);

        // ==========================
        // Searching
        // ==========================

        System.out.println("contains(20): " + list.contains(20));
        System.out.println("indexOf(20): " + list.indexOf(20));
        System.out.println("lastIndexOf(20): " + list.lastIndexOf(20));

        list.add(20);
        System.out.println("After duplicate 20: " + list);
        System.out.println("lastIndexOf(20): " + list.lastIndexOf(20));

        // ==========================
        // Removing
        // ==========================

        // remove(index)
        list.remove(0);
        System.out.println("After remove(index): " + list);

        // remove(Object)
        list.remove(Integer.valueOf(20));
        System.out.println("After remove(Object): " + list);

        // removeAll(Collection)
        list.removeAll(Arrays.asList(40, 50));
        System.out.println("After removeAll(): " + list);

        // ==========================
        // Size & Empty
        // ==========================

        System.out.println("size(): " + list.size());
        System.out.println("isEmpty(): " + list.isEmpty());

        // ==========================
        // Iteration
        // ==========================

        System.out.println("\nFor Loop:");
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }

        System.out.println("\nEnhanced For Loop:");
        for (Integer num : list) {
            System.out.print(num + " ");
        }

        System.out.println("\nIterator:");
        Iterator<Integer> it = list.iterator();
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }

        System.out.println("\nListIterator Forward:");
        ListIterator<Integer> listIt = list.listIterator();
        while (listIt.hasNext()) {
            System.out.print(listIt.next() + " ");
        }

        System.out.println("\nListIterator Backward:");
        while (listIt.hasPrevious()) {
            System.out.print(listIt.previous() + " ");
        }

        // forEach()
        System.out.println("\nforEach():");
        list.forEach(System.out::println);

        // ==========================
        // Conversion
        // ==========================

        Object[] objArray = list.toArray();
        System.out.println("toArray(): " + Arrays.toString(objArray));

        Integer[] intArray = list.toArray(new Integer[0]);
        System.out.println("Typed Array: " + Arrays.toString(intArray));

        // ==========================
        // SubList
        // ==========================

        List<Integer> sub = list.subList(0, Math.min(2, list.size()));
        System.out.println("subList(): " + sub);

        // ==========================
        // Sorting
        // ==========================

        List<Integer> nums = new ArrayList<>(Arrays.asList(4, 2, 7, 1, 9));

        Collections.sort(nums);
        System.out.println("Collections.sort(): " + nums);

        nums.sort(Comparator.reverseOrder());
        System.out.println("sort(reverse): " + nums);

        // ==========================
        // Reverse
        // ==========================

        Collections.reverse(nums);
        System.out.println("reverse(): " + nums);

        // ==========================
        // Shuffle
        // ==========================

        Collections.shuffle(nums);
        System.out.println("shuffle(): " + nums);

        // ==========================
        // Binary Search
        // ==========================

        Collections.sort(nums);
        int index = Collections.binarySearch(nums, 7);
        System.out.println("binarySearch(7): " + index);

        // ==========================
        // Min & Max
        // ==========================

        System.out.println("min(): " + Collections.min(nums));
        System.out.println("max(): " + Collections.max(nums));

        // ==========================
        // Frequency
        // ==========================

        List<Integer> freq = Arrays.asList(1,2,2,3,3,3);
        System.out.println("frequency(3): " + Collections.frequency(freq,3));

        // ==========================
        // Replace All
        // ==========================

        nums.replaceAll(x -> x * 10);
        System.out.println("replaceAll(): " + nums);

        // ==========================
        // removeIf()
        // ==========================

        nums.removeIf(x -> x > 50);
        System.out.println("removeIf(): " + nums);

        // ==========================
        // retainAll()
        // ==========================

        List<Integer> retain = new ArrayList<>(Arrays.asList(10,20,30,40));
        retain.retainAll(Arrays.asList(20,40));
        System.out.println("retainAll(): " + retain);

        // ==========================
        // equals()
        // ==========================

        List<Integer> l1 = Arrays.asList(1,2,3);
        List<Integer> l2 = Arrays.asList(1,2,3);
        System.out.println("equals(): " + l1.equals(l2));

        // ==========================
        // clear()
        // ==========================

        List<Integer> temp = new ArrayList<>(Arrays.asList(1,2,3));
        temp.clear();
        System.out.println("After clear(): " + temp);

        // ==========================
        // Copy Constructor
        // ==========================

        List<Integer> copy = new ArrayList<>(nums);
        System.out.println("Copied List: " + copy);

        // ==========================
        // Immutable List
        // ==========================

        List<Integer> immutable = List.of(1,2,3);
        System.out.println("Immutable List: " + immutable);

        // ==========================
        // Arrays.asList()
        // ==========================

        List<String> names = Arrays.asList("John", "Alice", "Bob");
        System.out.println("Arrays.asList(): " + names);

        // ==========================
        // Streams
        // ==========================

        List<Integer> streamList = Arrays.asList(1,2,3,4,5);

        System.out.println("Even Numbers:");
        streamList.stream()
                .filter(x -> x % 2 == 0)
                .forEach(System.out::println);

        int sum = streamList.stream()
                .mapToInt(Integer::intValue)
                .sum();

        System.out.println("Sum using Stream: " + sum);

        // ==========================
        // containsAll()
        // ==========================

        List<Integer> a = Arrays.asList(1,2,3,4);
        List<Integer> b = Arrays.asList(2,3);

        System.out.println("containsAll(): " + a.containsAll(b));
    }
}

// For thread safe, use CopyOnWriteArrayList and rest all methods are same.