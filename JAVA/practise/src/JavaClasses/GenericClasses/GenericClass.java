package JavaClasses;

public class GenericClass{
    public static void main(String[] args){
        Print<Integer> printObj = new Print<Integer>();
        printObj.setPrintValue(10);
        System.out.println(printObj.getPrintValue());
    }
}

