package JavaCollections;

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class StreamsExamples {

    static void main(String[] args) {
        // Streams are a new feature in Java 8 that allow you to process collections of data in a functional style.
        // Streams can be created from collections, arrays, or I/O channels.

        // Example of creating a stream from a collection
        List<String> names = Arrays.asList("John", "Jane", "Jack", "Jill");
        names.stream()
                .filter(name -> name.startsWith("J"))
                .forEach(System.out::println);

        // Example of creating a stream from an array
        int[] numbers = {1, 2, 3, 4, 5};
        Arrays.stream(numbers)
                .map(n -> n * n)
                .forEach(System.out::println);

        // Example of creating a stream from an I/O channel
        try (Stream<String> lines = Files.lines(Paths.get("file.txt"))) {
            lines.filter(line -> line.contains("Java"))
                    .forEach(System.out::println);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
