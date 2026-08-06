package JavaClasses.OtherClassesPart2;

public enum EnumAbstract {
    MONDAY{
        public void dummyMethod(){
            System.out.println("Monday dummy method");
        }
    },
    TUESDAY{
        public void dummyMethod(){
            System.out.println("Tuesday dummy method");
        }
    },
    WEDNESDAY{
        public void dummyMethod(){
            System.out.println("Wednesday dummy method");
        }
    };

    public abstract void dummyMethod();
}
