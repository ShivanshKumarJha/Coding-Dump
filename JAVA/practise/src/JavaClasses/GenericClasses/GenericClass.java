package JavaClasses.GenericClasses;

public class GenericClass{
    public static void main(String[] args){
        Print<Integer> printObj = new Print<Integer>();
        printObj.setPrintValue(10);
        System.out.println(printObj.getPrintValue());

        ColorPrintGeneric<String> colorPrintObj = new ColorPrintGeneric<>();
        colorPrintObj.setPrintValue("Hello, World!");
        System.out.println(colorPrintObj.getPrintValue());

        Pair<String, Integer> pairObj = new Pair<>();
        pairObj.put("Age", 25);
        System.out.println("Key: " + pairObj.getKey() + ", Value: " + pairObj.getValue());

        // Generic Method
        Pair<String, Integer> pair1 = new Pair<>();
        pair1.put("Age", 25);
        Pair<String, Integer> pair2 = new Pair<>();
        pair2.put("Age", 30);
        GenericMethod genericMethodObj = new GenericMethod();
        genericMethodObj.printValue(pair1, pair2);

        // Raw type object
        Print rawTypePrintObject = new Print();
        rawTypePrintObject.setPrintValue("Raw Type");
        System.out.println(rawTypePrintObject.getPrintValue());

        // Bounded Generics
        BoundedClassPrint<Integer> boundedPrintObj = new BoundedClassPrint<>();
        boundedPrintObj.setPrintValue(100);
        System.out.println(boundedPrintObj.getPrintValue());

        // Multiple bounded generics
        MultiBoundPrint<MultiBoundExample> multiBoundPrintObj = new MultiBoundPrint<>();
        MultiBoundExample multiBoundExample = new MultiBoundExample();
        multiBoundPrintObj.setPrintValue(multiBoundExample);
        multiBoundPrintObj.printValue();
    }
}
