package JavaNewFeatures;

public class patternMatchingForSwitchExample {

    static void main(String[] args) {

        // This feature is in JAVA 17+ and finalized in JAVA 21
        Object obj = "Hello, World!";

        /*
            Supported datatype in switch in JAVA before version 21:
            4 primitive types : int, short, byte, char
            Wrapper types of above primitives: Integer, Short, Byte, Char
            Enum
            String
        */

        /*
            Pattern matching also supports the following types in switch in JAVA 21 along with older compatibility:
            1. Record types
            2. Sealed types
            3. Classes
            4. Interfaces
            5. Abstract types
            6. Wrapper objects
        */

        // Pattern matching for switch
        switch (obj) {
            case Integer i -> System.out.println(i + 10);
            case String s -> System.out.println(s.toUpperCase());
            default -> System.out.println("obj is neither a String nor an Integer");
        }

        // We can also use pattern matching with switch expressions
        String result = switch (obj) {
            case Integer i -> "Integer: " + (i + 10);
            case String s -> "String: " + s.toUpperCase();
            default -> "obj is neither a String nor an Integer";
        };
        System.out.println(result);

        // -----------------------------------------------------------------------------------------------------------

        // SWITCH with Enum
        enum Color {RED, GREEN, BLUE, YELLOW}

        Object obj2 = Color.RED;

        // Without Pattern Matching
        switch (obj2) {
            case Color.RED:
                System.out.println("Red");
                break;
            case Color.GREEN:
                System.out.println("Green");
                break;
            default:
                System.out.println("Other");
        }

        // With Pattern Matching
        switch (obj2) {
            case Color c -> System.out.println(c.name());
            default -> System.out.println("Other");
        }

        // -----------------------------------------------------------------------------------------------------------

        // Null handling

        Object obj3 = null;

        switch (obj3) {
            case String s:
                System.out.println("String: " + s);
                break;
            case null:
                System.out.println("Null value is there");
                break;
            default:
                System.out.println("Null or other type is there");
        }

        // -----------------------------------------------------------------------------------------------------------

        /*
            Grouping Pattern
            It is not possible to group multiple patterns.

            Shape obj = new Circle();

            switch(obj){
                case Circle c:
                case Square s:
                    System.out.println("Shape is either Circle or Square");
                    break;
                default:
                    System.out.println("Shape is neither Circle nor Square");
            }
        */

        // -----------------------------------------------------------------------------------------------------------

        // Guarded Pattern - Helps to add additional conditional on Pattern matching using "when", similar to &&

        Object obj4 = "HelloWorld";

        switch (obj4) {
            case String s:
                if (s.contains("h") || s.contains("H")) {
                    System.out.println("String contains 'h': " + s);
                } else {
                    System.out.println("String does not contain 'h': " + s);
                }
                break;
            default:
                System.out.println("Other case");
        }

        // This will be converted to below this using when

        switch (obj4) {
            case String s when (s.contains("h") || s.contains("H")) -> System.out.println("String contains 'h': " + s);
            default -> System.out.println("Other case");
        }
    }
}
