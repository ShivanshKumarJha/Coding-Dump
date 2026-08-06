import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void printJava(){
        System.out.println("Hello Bhai!!");
    }

    /*
    public static void main(String[] args) {
        System.out.println("Hello world");

        // Variables
        String name = "Aman";
        System.out.println("Hello " + name);
        String neighbour = "Akku";
        System.out.println("Hello " + neighbour);

        // -------------------------------------------------------------------------------------------------------------

        // Types

            byte - 1[-128 to 127]
            short - 2[−32,768 to 32,767]
            int - 4[-2,147,483,648 to 2,147,483,647]
            long - 8
            float - 4
            double - 8
            char - 2
            boolean - 1


        byte age = 30;
        int phone = 1234567778;
        long phone2 = 1111122343456789789L;
        float pi = 3.14F;
        char letter = 'a';
        boolean isAdult = true;

        // -------------------------------------------------------------------------------------------------------------

        // Non - Primitive Types
        String nameOfPerson = "Aman";
        System.out.println(nameOfPerson.length());
        String friend = new String("Me");
        System.out.println(friend.length());
        System.out.println(nameOfPerson.charAt(1));

        // Strings are immutable

        // Arrays
        int[] marks = new int[3];
        marks[0] = 97;
        marks[1] = 98;
        marks[2] = 95;
        System.out.println(Arrays.toString(marks));

        boolean[] sample = new boolean[3];
        System.out.println(sample[0]);

        Arrays.sort(marks);
        System.out.println(Arrays.toString(marks));

        int[] newMarks = {90, 85, 92};
        System.out.println(Arrays.toString(newMarks));

        // 2-d arrays
        int[][] finalMarks = {{90, 85, 92}, {80, 75, 82}};
        System.out.println(Arrays.deepToString(finalMarks));

        // -------------------------------------------------------------------------------------------------------------

        // casting
        // 1. Implicit
        double myDouble = 9.78;
        double finalPrice = myDouble + 18;
        System.out.println(finalPrice);

        // 2. Explicit
        int p = 100;
        int fP = p + (int) 18.0;
        System.out.println(fP);


        // Constants
        final float PI = 3.14F;
        System.out.println(PI);

        // -------------------------------------------------------------------------------------------------------------

        // Operators -> Arithmetic, Assignment, Logical and Comparison Operators


        // Math Class
        System.out.println(Math.max(5, 10));
        System.out.println((int)(Math.random()*10));

        // How to take inout
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter your name: ");
        // String input = sc.nextLine();
        String input = sc.nextLine();
        System.out.println("Hello, " + input);

        // -------------------------------------------------------------------------------------------------------------

        // Conditional Flow
        if (age >= 18){
            System.out.println("You are an adult");
        }else{
            System.out.println("You are not an adult");
        }

        // Logical ------>  &&, ||, !

        // Switch cases

        int day = 2;

        switch(day){
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Invalid day");
        }

        // -------------------------------------------------------------------------------------------------------------

        // Loops
        for(int i=0;i<3;i++){
            System.out.println("Hello " + i);
        }

        int i = 0;
        while (i<5){
            System.out.println(i);
            i++;
        }

        i = 0;
        do {
            System.out.println(i);
            i++;
        }while (i<5);

        // -------------------------------------------------------------------------------------------------------------

        // Exceptions
        int[] numbers = {1, 2, 3};
        // Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 5 out of bounds for length 3
        // System.out.println(numbers[5]);
        try{
            System.out.println(numbers[5]);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Index out of bounds");
        }
        System.out.println("Program continues...");

        // -------------------------------------------------------------------------------------------------------------

        // Methods/ Functions
        printJava();
        printJava();
        printJava();
    }
    */


    public static void main(String[] args){
        Calculation obj = new Calculation();
//        System.out.println(obj.sum(1, 2, 3, 4, 5));
//        System.out.println(obj.sum(1, 2, 3));
    }


}
