package JavaCollections;
import java.util.*;
import java.util.concurrent.ConcurrentHashMap;

/*
It is an interface and its implementations are:
    HashMap : do not maintain the order
    HashTable : do not maintain the order, thread safe
    LinkedHashMap : maintain the insertion order
    TreeMap : maintain the sorted order
    ConcurrentHashMap : thread safe
Object that do not contain duplicate key

Methods in Map interface are :
    put(K key, V value)
    putAll(Map<? extends K, ? extends V> m)
    get(Object key)
    remove(Object key)
    containsKey(Object key)
    containsValue(Object value)
    size()
    isEmpty()
    clear()
    keySet()
    values()
    entrySet()


What happens when we use the command put
STEP 1 : The hashCode() method is called on the key to determine the hash code of the key.
This hash code is used to determine the index in the underlying array where the key-value pair will be stored.

STEP 2: If the index is empty, a new Entry object is created with the (key, value, hash code and next)
and it is stored at that index.
 */

public class Maps {
    public static void main(String[] args) {
        // Default size/capacity is 16
        // Array of Entry<K, V> with fields as hash, key, value, next
        Map<Integer, String> map = new HashMap<>();
        /*
             If collision happens, then chaining of hashmap occurs with the help of next
             There is contract between hash code and equal method, i.e:
                a. If obj1 == obj2 then their hash should also be same
                b. If 2 objects hash are same, it doesn't mean that they are equal.

             How O(1) for the insertion, deletion and finding -> Average Case
                This is due to load factor. It means that capacity of the hashmap is 16 and load factor is 0.75, so when the
                number of elements in the hashmap reaches 12, then the capacity of the hashmap is doubled to 32 and
                all the elements are rehashed to the new array.

             What if all the put requests are in the same key, there is concept called UNTREFYING, which means that if the
             number of elements in the hashmap is greater than 8 and the capacity of the hashmap is greater than 64,
             then the linked list is converted to a balanced binary search tree(Red Black Tree), so that the time complexity
             of the operations becomes O(log n) instead of O(n).

             O(logN) -> Worst Case Complexity
         */

        // ==========================
        // Creating Maps
        // ==========================

        Map<Integer, String> hashMap = new HashMap<>();
        Map<Integer, String> linkedHashMap = new LinkedHashMap<>();
        Map<Integer, String> treeMap = new TreeMap<>();
        Map<Integer, String> concurrentMap = new ConcurrentHashMap<>();
        Hashtable<Integer, String> hashtable = new Hashtable<>();


        // ============================================================
        // put(K,V)
        // Adds a key-value pair
        // If key already exists, value is replaced
        // ============================================================

        hashMap.put(1, "One");
        hashMap.put(2, "Two");
        hashMap.put(3, "Three");

        System.out.println(hashMap);

        hashMap.put(2, "Second");

        System.out.println(hashMap);


        // ============================================================
        // putIfAbsent(K,V)
        // Inserts only if key doesn't exist
        // ============================================================

        hashMap.putIfAbsent(2, "New Two");
        hashMap.putIfAbsent(4, "Four");

        System.out.println(hashMap);


        // ============================================================
        // get(key)
        // ============================================================

        System.out.println(hashMap.get(1));

        // key not present
        System.out.println(hashMap.get(100));


        // ============================================================
        // getOrDefault(key, defaultValue)
        // ============================================================

        System.out.println(hashMap.getOrDefault(5, "Not Found"));


        // ============================================================
        // containsKey()
        // ============================================================

        System.out.println(hashMap.containsKey(2));
        System.out.println(hashMap.containsKey(20));


        // ============================================================
        // containsValue()
        // ============================================================

        System.out.println(hashMap.containsValue("Three"));
        System.out.println(hashMap.containsValue("Ten"));


        // ============================================================
        // size()
        // ============================================================

        System.out.println(hashMap.size());


        // ============================================================
        // isEmpty()
        // ============================================================

        System.out.println(hashMap.isEmpty());


        // ============================================================
        // remove(key)
        // ============================================================

        hashMap.remove(4);

        System.out.println(hashMap);


        // ============================================================
        // remove(key,value)
        // Removes only if both match
        // ============================================================

        hashMap.remove(2, "Wrong");
        hashMap.remove(2, "Second");

        System.out.println(hashMap);


        // ============================================================
        // replace(key,value)
        // ============================================================

        hashMap.replace(1, "ONE");

        System.out.println(hashMap);


        // ============================================================
        // replace(key, oldValue, newValue)
        // ============================================================

        hashMap.replace(1, "ONE", "One");

        System.out.println(hashMap);


        // ============================================================
        // keySet()
        // ============================================================

        System.out.println(hashMap.keySet());


        // ============================================================
        // values()
        // ============================================================

        System.out.println(hashMap.values());


        // ============================================================
        // entrySet()
        // ============================================================

        System.out.println(hashMap.entrySet());


        // ============================================================
        // Iterating using entrySet()
        // Best way
        // ============================================================

        for (Map.Entry<Integer, String> entry : hashMap.entrySet()) {

            System.out.println(entry.getKey() + " -> " + entry.getValue());

        }


        // ============================================================
        // Iterating using keySet()
        // ============================================================

        for (Integer key : hashMap.keySet()) {

            System.out.println(key + " : " + hashMap.get(key));

        }


        // ============================================================
        // forEach()
        // Java 8
        // ============================================================

        hashMap.forEach((key, value) ->
                System.out.println(key + " => " + value));


        // ============================================================
        // putAll()
        // ============================================================

        Map<Integer, String> anotherMap = new HashMap<>();

        anotherMap.put(10, "Ten");
        anotherMap.put(20, "Twenty");

        hashMap.putAll(anotherMap);

        System.out.println(hashMap);


        // ============================================================
        // clear()
        // ============================================================

        Map<Integer, Integer> temp = new HashMap<>();

        temp.put(1, 10);
        temp.put(2, 20);

        System.out.println(temp);

        temp.clear();

        System.out.println(temp);


        // ============================================================
        // compute()
        // ============================================================

        hashMap.compute(10, (k, v) -> v + " Updated");

        System.out.println(hashMap);


        // ============================================================
        // computeIfAbsent()
        // ============================================================

        hashMap.computeIfAbsent(100, k -> "Hundred");

        System.out.println(hashMap);


        // ============================================================
        // computeIfPresent()
        // ============================================================

        hashMap.computeIfPresent(20, (k, v) -> v + " Present");

        System.out.println(hashMap);


        // ============================================================
        // merge()
        // ============================================================

        hashMap.merge(10, " New",
                (oldValue, newValue) -> oldValue + newValue);

        System.out.println(hashMap);


        // ============================================================
        // replaceAll()
        // ============================================================

        hashMap.replaceAll((k, v) -> v.toUpperCase());

        System.out.println(hashMap);

        // ============================================================
                        //   LinkedHashMap
        // ============================================================

        /*
            LinkedHashMap maintains the insertion order and access order
            Similar to HashMap but uses doubly linked list to maintain the order of elements. Highly frequently used
            are putted at last.
            It contains hash, key, value, next, before and after
        */

        Map<Integer, String> linkedMap = new LinkedHashMap<>();
        linkedMap.put(1, "One");
        linkedMap.put(2, "Two");
        linkedMap.put(3, "Three");
        linkedMap.forEach((Integer key, String val)-> System.out.println(key+":"+val));

        // For maintaining the access order, then use accessOrder = true in the constructor of LinkedHashMap
        Map<Integer, String> linkedMapAccessOrder = new LinkedHashMap<>(16, 0.75f, true);
        // Time complexity of LinkedHashMap is O(1) for insertion, deletion and finding. It is slower than HashMap because of the overhead of maintaining the order of elements.
        // It is not thread safe and there is no thread safe version available for this. So we have to explicitly make it this collection thread safe like:
        // Map<Integer, String> map2 = Collections.synchronizedMap(new LinkedHashMap<>());



        // ============================================================
                            // TreeMap
        // ============================================================

        /*
            TreeMap maintains the sorted order of elements. It is implemented using Red Black Tree.
            It contains hash, key, value, left, right and parent
            Time complexity of TreeMap is O(log n) for insertion, deletion and finding.
            It is not thread safe and there is no thread safe version available for this. So we have to explicitly make it this collection thread safe like:
            Map<Integer, String> map2 = Collections.synchronizedMap(new TreeMap<>());
        */

        Map<Integer, String> mapTree = new TreeMap<>((Integer key1, Integer key2) -> key2 - key1);

        /*
            Methods are :
                firstKey() 
                lastKey()
                headMap(K toKey)
                tailMap(K fromKey)
                subMap(K fromKey, K toKey)
                ceilingKey(K key)
                floorKey(K key)
                higherKey(K key)
                lowerKey(K key)
        */
    }
}
