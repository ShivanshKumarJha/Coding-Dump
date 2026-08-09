package ProjectLombok;

/*
    It's a Java library, which helps to reduce boilerplate code.
    It provides annotations to generate getters, setters, constructors, toString, equals, hashCode, and other methods at compile time.
 */

public class LombokExample {

    static void main(String[] args) {

    }
}

/*
Top 10 features of Project Lombok:
    1. val and var keywords for local variables (val works only for the local variables, not for fields or parameters)
    2. @Getter and @Setter annotations for generating getter and setter methods
    3. @ToString annotation for generating toString() method
    4. @EqualsAndHashCode annotation for generating equals() and hashCode() methods
    5. @NoArgsConstructor, @AllArgsConstructor, and @RequiredArgsConstructor annotations for generating constructors
    6. @Data annotation for generating getter, setter, toString, equals, and hashCode methods
    7. @Builder annotation for implementing the builder pattern
    8. @Slf4j annotation for logging
    9. @Synchronized annotation for synchronized methods
    10. @NonNull annotation for null checks
    11. @Value annotation for immutable classes - Setters are not generated, Class itself made final
    12. @Cleanup - Ensures that given resource is automatically cleaned up before the code block is exited, even if an exception is thrown
*/
