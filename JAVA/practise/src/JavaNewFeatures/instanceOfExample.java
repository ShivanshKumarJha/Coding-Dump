package JavaNewFeatures;

public class instanceOfExample {

    static void main(String[] args) {

        // This feature is in JAVA 16+
        Object obj = "Hello, World!";

        // First comparison happens, If true then s is automatically type cast and initialized
        // s only exists inside the block
        if (obj instanceof Integer i) {
            System.out.println(i + 10);
        } else if (obj instanceof String s) {
            System.out.println(s.toUpperCase());
        } else {
            System.out.println("obj is neither a String nor an Integer");
        }

        // We can combine with && operator but not with || operator
        if (obj instanceof String s && s.length() > 5) {
            System.out.println("String is longer than 5 characters: " + s);
        } else {
            System.out.println("String is not longer than 5 characters or obj is not a String");
        }

        // Pattern matching can also work with the interfaces
    }
}
