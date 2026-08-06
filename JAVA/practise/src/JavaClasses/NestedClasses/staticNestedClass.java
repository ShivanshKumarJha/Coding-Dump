package JavaClasses.NestedClasses;

class OuterClass{
    int instanceVariable = 10;
    static int classVariable = 20;

    static class NestedClass{
        public void print(){
            System.out.println(classVariable);
        }
    }
}

public class staticNestedClass {
    public static void main(String[] args) {
        OuterClass.NestedClass nested = new OuterClass.NestedClass();
        nested.print();
    }
}
