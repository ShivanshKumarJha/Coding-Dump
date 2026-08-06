package JavaClasses.GenericClasses;

interface Interface1 {
    void method1();
}

interface Interface2 {
    void method2();
}

public class MultiBoundPrint<T extends Interface1 & Interface2> {
    private T value;

    public T getPrintValue() {
        return value;
    }

    public void setPrintValue(T value) {
        this.value = value;
    }

    public void printValue() {
        value.method1();
        value.method2();
    }
}

class MultiBoundExample implements Interface1, Interface2 {
    @Override
    public void method1() {
        System.out.println("method1() from Interface1");
    }

    @Override
    public void method2() {
        System.out.println("method2() from Interface2");
    }
}