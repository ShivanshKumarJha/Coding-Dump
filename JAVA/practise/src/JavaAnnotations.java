/*

1. Annotations in Java are a form of metadata that provide data about a program but are not part of the program itself.
2. They have no direct effect on the operation of the code they annotate.
3. Annotations can be used for various purposes, such as providing information to the compiler, generating code,
or configuring frameworks.

Type of annotations:
1. Predefined Annotations
    a. Used on annotations(called meta annotations)
        @Target, @Retention, @Documented, @Inherited, @Repeatable
    b. Used on Java code(like classes, methods etc.)
        @Deprecated, @Override, @SuppressWarnings("deprecation), @FunctionalInterface, @SafeVarargs(also usable in Java 9)

2. Custom Annotations
    a. User-defined annotations that can be created using the @interface keyword.
    b. Can be used to provide additional information about the code, which can be processed at compile-time or runtime.
*/

import jdk.jfr.Category;

import java.lang.annotation.Repeatable;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.util.ArrayList;
import java.util.List;

public class JavaAnnotations {

}

// --------------------------------------------------------------------------------------------------------------------------------------

/*
    What is Heap pollution(@SafeVarags helps to prevent this) ?
    Object of one type(example String) storing the reference of another type Object(Example Integer)
*/
class Log{
    public static void printLogValues(List<Integer>... logNumbersList){
        Object[] objectsList = logNumbersList;
        List<String> stringValuesList = new ArrayList<>();
        stringValuesList.add("Hello");
        objectsList[0] = stringValuesList; // Heap pollution occurs here
        Integer number = logNumbersList[0].get(0); // ClassCastException occurs
    }

    // If we want to suppress "Heap Pollution" warning, we can use @SafeVarargs annotation.
    // This annotation is used to indicate that the method does not perform potentially unsafe operations on its varargs parameter.

    @SafeVarargs
    public static void printLogValuesSafe(List<Integer>... logNumbersList){
        Object[] objectsList = logNumbersList;
        List<String> stringValuesList = new ArrayList<>();
        stringValuesList.add("Hello");
        objectsList[0] = stringValuesList; // Heap pollution occurs here
        Integer number = logNumbersList[0].get(0); // ClassCastException occurs
    }

    // @Repeatable Annotations

    @Repeatable(Categories.class)
    @interface Category {
        String name();
    }

    @Retention(RetentionPolicy.RUNTIME)
    @interface Categories {
        Category[] value();
    }

    @Category(name="Shivansh")
    @Category(name="Shiv")
    @Category(name="Ansh")
    public class Eagle{
        public void fly(){}
    }
}

// --------------------------------------------------------------------------------------------------------------------------------
/*
    Meta Annotations

    1. @Target: Indicates the kinds of program elements to which an annotation type is applicable.
                It can be applied to classes, methods, fields, parameters, and other program elements.

    2. @Retention: Indicates how long annotations with the annotated type are to be retained.
                   It can be applied to classes, methods, fields, parameters, and other program elements.
                   RetentionPolicy.SOURCE   -> discarded in .class file
                   RetentionPolicy.CLASS    -> retained in .class file but not available at runtime (Can't be used in reflections)
                   RetentionPolicy.RUNTIME  -> retained in .class file and available at runtime

    3. @Documented: Indicates that annotations with the annotated type should be documented by Javadoc and similar tools.
                    By default, annotations are ignored when Java documentation is generated.

    4. @Inherited:  Indicates that an annotation type is automatically inherited.
                    By default, annotations are not inherited by subclasses. If an annotation type is annotated with @Inherited,
                    then it will be inherited by subclasses.

    5. @Repeatable: Indicates that the annotation type can be applied more than once to the same declaration or type use.
                    By default, annotations can only be applied once to a declaration or type use. If an annotation type is annotated
                    with @Repeatable, then it can be applied multiple times to the same declaration or type use.

    ElementType : TYPE, FIELD, METHOD, PARAMETER, CONSTRUCTOR, LOCAL_VARIABLE, ANNOTATION_TYPE, PACKAGE, TYPE_PARAMETER, TYPE_USE
*/