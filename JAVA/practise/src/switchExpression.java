public class switchExpression {

    static void main(String[] args) {

        enum Days {
            MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
        }

        Days day = Days.FRIDAY;

        int count = switch (day) {
            case MONDAY, FRIDAY, SUNDAY -> 6;
            case TUESDAY -> 7;
            case THURSDAY, SATURDAY -> 8;
            case WEDNESDAY -> 9;
        };
        System.out.println(count);

        // If there is block, we can use yield to return a value
        int count2 = switch (day) {
            case MONDAY, FRIDAY, SUNDAY -> {
                System.out.println("It's a busy day!");
                yield 6;
            }
            case TUESDAY -> {
                System.out.println("It's a regular day!");
                yield 7;
            }
            case THURSDAY, SATURDAY -> {
                System.out.println("It's a long day!");
                yield 8;
            }
            case WEDNESDAY -> {
                System.out.println("It's a midweek day!");
                yield 9;
            }
        };
        System.out.println(count2);

        // No exhaustiveness check - When we are using the switch as an expression, compiler will force us to cover all the cases.
        // But when we are using the switch as a statement, compiler will not force us to cover all the cases. So, we can use default case to cover all the cases.
        /*
            int count3 = switch (day) {  // This will throw error
                case MONDAY, FRIDAY, SUNDAY -> 6;
                case TUESDAY -> 7;
            };
            System.out.println(count3);
        */


        // All case blocks share the same scope
        String msg = switch (day) {
            case MONDAY, FRIDAY, SUNDAY -> {
                String message = "It's a busy day!";
                yield message;
            }
            case TUESDAY -> {
                String message = "It's a regular day!";
                yield message;
            }
            default -> "Others";
        };

    }
}



