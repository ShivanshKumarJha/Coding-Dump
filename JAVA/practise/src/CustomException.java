public class CustomException extends Exception {
    public CustomException(String message) {
        super(message);
    }

    static void main(String[] args) {
        try {
            method1();
        } catch (CustomException e) {
            System.out.println("Caught custom exception: " + e.getMessage());
        }
    }

    public static void method1() throws CustomException {
        throw new CustomException("Custom exception thrown");
    }
}

/*
    Why do we need to handle exceptions?
    1. It makes our code clean by separating the error handling code from regular code.
    2. It allows program to recover from the error.
    3. It allows to add more information, which supports debugging.
    4. Improves security, by hiding the sensitive information.
*/