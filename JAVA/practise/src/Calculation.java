public class Calculation {
//    public int sum(int ...nums){
//        int total = 0;
//        for(int n : nums){
//            total += n;
//        }
//        return total;
//    }

    // This is the example of the singleton class
//    private static final Calculation instance = new Calculation();
//
//    private Calculation(){}
//
//    public static Calculation getInstance() {
//        return instance;
//    }

    String name;
    int empID;

    // This is constructor chaining
    Calculation(){
        this(10);
    }

    Calculation(int empID){
        this("skj", empID);
    }

    Calculation(String name, int empID){
        this.name = name;
        this.empID = empID;
    }
}
