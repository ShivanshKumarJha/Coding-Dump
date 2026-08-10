package JavaNewFeatures;

public class textBlocksExamples {

    static void main(String[] args) {

        // Finalized in Java 15
        String query = """
                Select e.id, e.name
                FROM employee e
                WHERE e.salary > 10000;
                """;

        String jsonString = """
                {
                    "name": "John Doe",
                    "age": 30,
                    "city": "New York"
                }
                """;

        /*
            Rules followed during compilation:
            1. Opening delimiter - After opening delimiter(""") text or content is not allowed on the same line.
            2. Indentation(Leading whitespaces) : All white spaces before the leftmost text or content is removed.
            3. Trailing whitespaces : By default all trailing white spaces are removed, but if we want it then we
            have to add '\s' at the end.
            4. Continuation character :
                By default in text block, for each new line, a new line char(\n) is added in the compiled string.
                If we want the continuation, we need to use the continuation char(\) at the end of the line.
            5. All the methods applicable on String is also applicable on the Text Blocks.
        */
    }
}
