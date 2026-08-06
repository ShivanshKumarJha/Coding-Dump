package JavaClasses.NestedClasses;

class OuterClassV2{
    int instanceVariable = 10;
    static int classVariable = 20;

    class NestedClass{
        public void print(){
            System.out.println(instanceVariable);
            System.out.println(classVariable);
        }
    }
}

public class nonStaticNestedClass {
    public static void main(String[] args) {
        OuterClassV2 outer = new OuterClassV2();
        OuterClassV2.NestedClass nested = outer.new NestedClass();
        nested.print();

        /*
        This is the example of the anonymous class.
        2 things happen behind the scenes when we create an anonymous class:
            1. Subclass is created, name decided by the compiler.
            2. Creates an object of subclass and assign its reference to object "audiObj".
         */
        Car audiObj = new Car() {
            @Override
            public void run() {
                System.out.println("Audi is running");
            }
        };
        audiObj.run();
    }
}

/*
The given above example is for the Member Inner Class. This can be declared as private, public and protected.
Another type of Non-static Inner Class is the Local Inner Class in which we are making class inside the conditional block. It cannot be declared as private, public and protected.
Anonymous Inner Class is a class without name. This is used when we want to override the behaviour of the method without even creating any subclass.
 */
