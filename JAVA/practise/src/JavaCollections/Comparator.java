package JavaCollections;

import java.util.*;

//public class Comparator {
//
//}

// This is using Comparator { int compare(T obj1, T obj2) }
class Car{
    String carName;
    String carType;

    Car(String name, String type){
        this.carName = name;
        this.carType = type;
    }
}

class CarNameComparator implements Comparator<Car> {
    @Override
    public int compare(Car o1, Car o2){
        return o2.carName.compareTo(o1.carName);
    }
}

// This is using Comparable { int compareTo(T obj2) }
/*


    Comparable is an interface in Java that defines a natural ordering for objects of a class.
    It has a single method compareTo(T obj2) that compares the current object with another object of the same type.
    The compareTo method returns a negative integer, zero, or a positive integer if the current object is less than, equal to, or greater than the specified object, respectively.

    To use Comparable, a class must implement the Comparable interface and provide an implementation for the compareTo method.
    This allows objects of that class to be sorted using the natural ordering defined by the compareTo method.

class Car implements Comparable<Car>{
    String carName;
    String carType;

    Car(String name, String type){
        this.carName = name;
        this.carType = type;
    }

    @Override
    public int compareTo(Car other) {
        return this.carName.compareTo(other.carName);
    }
}
*/

class Main{
    static void main(String[] args) {
        Integer[] arr = {17,3,4,1,10};
        Arrays.sort(arr,(Integer a, Integer b)->a-b);     // This is Comparator
        for(int v:arr){
            System.out.println(v);
        }

        Arrays.sort(arr);   // This is using Comparable { int compareTo(T obj2) }
        for(int v:arr){
            System.out.println(v);
        }

        Car[] carArray = new Car[3];
        carArray[0] = new Car("BMW","Sedan");
        carArray[1] = new Car("Audi","Suv");
        carArray[2] = new Car("Mercedes","Sedan");

        Arrays.sort(carArray, (Car obj1, Car obj2)-> obj2.carType.compareTo(obj1.carType));
        for(Car car:carArray){
            System.out.println(car.carName + " - " + car.carType);
        }

        List<Car> cars = new ArrayList<>();
        cars.add(new Car("BMW","Sedan"));
        cars.add(new Car("Audi","Suv"));
        cars.add(new Car("Mercedes","Sedan"));
        cars.sort(new CarNameComparator());

        for(Car car:cars){
            System.out.println(car.carName + " - " + car.carType);
        }

    }
}

// For Comparable, we have to change the class definition of Car to implement Comparable<Car> and provide an implementation for the compareTo method. And this is generally we
// can do only one implementation

// For Comparator, we can create multiple comparator classes or use lambda expressions to define different comparison logic for the same class.
// This allows us to sort the same class in different ways without modifying the class itself.