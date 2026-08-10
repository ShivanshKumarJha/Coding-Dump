package JavaNewFeatures;

public class recordsExample {

    static void main(String[] args) {

        /*
            Records help us to create immutable class in a short way.
            It is mostly designed to reduce boiler code for data carrying classes (like POJO)

            Syntax: record YourRecordName(Type field1, Type field2, ...) { }

            Points to remember :
            1. All records by default extends java.lang.Record class implicitly hence extends are not allowed
            on records(as in Java, we know that we can not extend from more than 1 class -
            multiple inheritance is not supported)

            2. We can implement more than one interfaces.

            3. We can not add more instance fields inside the records but static fields are allowed as they
            are class-specific.

            4. We can not create a no-arg constructor for records as all fields are final and must be initialized.

            5. We can override the canonical constructor, means constructor that takes all records components(fields)
            in order.

            6. We can have the Compact constructor which is a constructor without any parameters and without
            the constructor name.
            public record Person(String name, int age) {
                public Person {
                    if (age < 0) {
                        throw new IllegalArgumentException("Age cannot be negative");
                    }
                }
            }

            7. We can override the methods like equals(), hashCode(), and toString() in records.

            8. We can also create the Nested Records but only static one.

            9. We can also create Local Records, means records within a block like method block, while loop block,
            if condition block etc.
        */
    }
}
