package JavaAdvanced;
/*
    Exceptions:
    1. It is an event that occurs during the execution of a program that disrupts the normal flow of instructions.
    2. It is an object that represents an error or an exceptional condition that occurs during the execution of a program.
    3. Runtime system use this Exception object to communicate the error to the program.
    4. When an exception occurs, the runtime system creates an Exception object and hands it off to the runtime system.
    5. The runtime system searches the call stack for a method that contains a block of code that can handle
    the exception. This block of code is called an exception handler.
    6. If the runtime system finds an exception handler, it passes the Exception object to the handler.
    7. The handler can then take appropriate action to recover from the error. If the runtime system does not find an
    exception handler, it terminates the program and prints an error message to the console.
*/

/*
    Exception Hierarchy:
    1. Throwable
        1.1 Error
            1.1.1 OutofMemory Error
            1.1.2 StackOverflowError
        1.2 Exception
            1.2.1 Un-checked/ Runtime Exception
                ClassCastException
                ArithmeticException
                IndexOutOfBoundException - ArrayIndexOutOfBoundsException, StringIndexOutOfBoundsException
                NullPointerException
                IllegalArgumentException - NumberFormatException
            1.2.2 Checked Exception/ Compile Time Exception
                IOException - FileNotFoundException, EOFException, Socket Exception
                SQLException
                ClassNotFoundException
                InterruptedException
*/

public class JavaExceptions {
    // ClassNotFoundException
//    public static void main(String[] args) throws ClassNotFoundException {
//        method1();
//    }

    // throws tells that this method might throw this exception(or might not), so handle your caller appropriately
//    public static void method1() throws ClassNotFoundException{
//        throw new ClassNotFoundException("Class not found exception");
//    }

    // Try Catch - Catch block can only catch exception which can be thrown by try block
    public static void main(String[] args) {
        method1();

        try {
            throw new ClassNotFoundException("Class not found exception");
        } catch (ClassNotFoundException e) {
            System.out.println("Exception caught: " + e.getMessage());
        } finally {
            System.out.println("Finally block executed");
        }
    }

    public static void method1() {
        try {
            throw new ClassNotFoundException("Class not found exception");
        } catch (ClassNotFoundException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }

    // finally keyword will always execute after try-catch block, whether exception is thrown or not. It is used to close the resources
    // like file, database connection etc.

}
