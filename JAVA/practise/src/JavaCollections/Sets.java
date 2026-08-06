package JavaCollections;

/*
    Properties of Sets:
    1. Collection of objects, but it does not allow duplicate elements.
    2. It is an interface that extends the Collection interface.
    3. It does not maintain the order of elements.
    4. It is implemented by HashSet, LinkedHashSet, and TreeSet classes.
    5. It is used to represent a mathematical set, which is a collection of unique elements.
    6. It is used to perform set operations like union, intersection, and difference.
    7. It is used to store unique elements and eliminate duplicates from a collection.
    8. It is used to check for the existence of an element in a collection.
*/

import java.util.HashSet;
import java.util.Set;

public class Sets {
    /*
        HashSet:
        1. HashSet is a class that implements the Set interface.
        2. It is backed by a hash table (actually a HashMap instance).
        3. During add method invocation, it stored the element in the key part and in value it stores the dummy object.
        4. No guarantee that order will remain constant.
        5. HashSet is not threadSafe. newKeySet method present in ConcurrentHashMap class can be used to create a
        thread-safe set.
        6. HashSet is faster than TreeSet and LinkedHashSet.
        7. HashSet allows null values.

        Methods:
        1. add(E e): Adds the specified element to this set if it is not already present.
        2. remove(Object o): Removes the specified element from this set if it is present.
        3. contains(Object o): Returns true if this set contains the specified element.
        4. size(): Returns the number of elements in this set.
        5. isEmpty(): Returns true if this set contains no elements.
        6. clear(): Removes all of the elements from this set.
        7. iterator(): Returns an iterator over the elements in this set.
        8. toArray(): Returns an array containing all the elements in this set.
        9. addAll(): Adds all of the elements in the specified collection to this set if they're not already present.
        10. retainAll(): Removes from this set all of its elements that are contained in the specified collection.
        11. removeAll(): Removes from this set all of its elements that are contained in the specified collection.
    */

    /*
        LinkedHashSet:
        1. LinkedHashSet is a class that implements the Set interface.
        2. It is backed by a hash table and a linked list.
        3. It maintains a doubly-linked list running through all of its entries.
        4. It maintains the insertion order of elements.
        5. LinkedHashSet is not threadSafe. newKeySet method present in ConcurrentHashMap class can be used to create a
        thread-safe set.
        6. LinkedHashSet is slower than HashSet but faster than TreeSet.
        7. LinkedHashSet allows null values.

        Methods:
        1. add(E e): Adds the specified element to this set if it is not already present.
        2. remove(Object o): Removes the specified element from this set if it is present.
        3. contains(Object o): Returns true if this set contains the specified element.
        4. size(): Returns the number of elements in this set.
        5. isEmpty(): Returns true if this set contains no elements.
        6. clear(): Removes all of the elements from this set.
        7. iterator(): Returns an iterator over the elements in this set.
        8. toArray(): Returns an array containing all the elements in this set.
        9. addAll(): Adds all of the elements in the specified collection to this set if they're not already present.
        10. retainAll(): Removes from this set all of its elements that are contained in the specified collection.
        11. removeAll(): Removes from this set all of its elements that are contained in the specified collection.
    */

    /*
        TreeSet:
        1. TreeSet is a class that implements the Set interface.
        2. It is backed by a TreeMap instance.
        3. It maintains a sorted order of elements.
        4. TreeSet is not threadSafe. newKeySet method present in ConcurrentHashMap class can be used to create a thread-safe set.
        5. TreeSet is slower than HashSet and LinkedHashSet.
        6. TreeSet does not allow null values.

        Methods:
        1. add(E e): Adds the specified element to this set if it is not already present.
        2. remove(Object o): Removes the specified element from this set if it is present.
        3. contains(Object o): Returns true if this set contains the specified element.
        4. size(): Returns the number of elements in this set.
        5. isEmpty(): Returns true if this set contains no elements.
        6. clear(): Removes all of the elements from this set.
        7. iterator(): Returns an iterator over the elements in this set.
        8. toArray(): Returns an array containing all the elements in this set.
        9. addAll(): Adds all of the elements in the specified collection to this set if they're not already present.
        10. retainAll(): Removes from this set all of its elements that are contained in the specified collection.
        11. removeAll(): Removes from this set all of its elements that are contained in the specified collection.
    */

    public static void main(String[] args){
        Set<Integer> set = new HashSet<>();
        set.add(1);
        set.add(2);
        set.add(3);
        set.add(1);

        set.forEach((e)-> System.out.println(e));
    }
}
