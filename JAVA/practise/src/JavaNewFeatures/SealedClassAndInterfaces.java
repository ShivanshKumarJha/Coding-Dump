public class SealedClassAndInterfaces {

    static void main(String[] args) {

        // Sealed classes and interfaces are a feature introduced in Java 15 (preview) and finalized in Java 17.
        // They allow you to restrict which classes or interfaces can extend or implement them.
        // They were introduced due to lack of control in Inheritance

/*
        Example of a sealed interface
        public sealed interface Shape permits Circle, Rectangle {

        }
        Classes implementing this:

        public final class Circle implements Shape {  // final tells that it can not be subclassed further
            // Circle implementation
        }

        public non-sealed class Rectangle implements Shape{   // non-sealed removes all restriction and can be subclassed further
            // Rectangle implementation
        }

        sealed tells that only the classes Circle and Rectangle can implement the Shape interface.

          Few points:
        1. "permits" type should be direct subclass of the sealed class or interface.
        2. "permits" type should be either "final", "sealed", or "non-sealed"
        3. All "permits" type should be present (future classes or interfaces not considered)
 */

    }
}
