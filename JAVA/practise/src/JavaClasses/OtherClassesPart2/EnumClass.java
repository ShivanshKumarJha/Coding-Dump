package JavaClasses.OtherClassesPart2;

/*
Collection of constants
It can not extend any class, it internally extends java.lang.Enum class
It can implement interfaces
It can have variables, constructor and methods
It cant be instantiated
No other class can extend Enum class
 */

public class EnumClass {
    public static void main(String[] args){
        // Common functions -> values(), Ordinal(), valueOf(), name()

        for(EnumSample sample : EnumSample.values()){
            System.out.println(sample.ordinal());
        }

        EnumSample enumVariable = EnumSample.valueOf("MONDAY");
        System.out.println(enumVariable.name());

        EnumCustomValue sample = EnumCustomValue.getEnumFromValue(1);
        System.out.println(sample);

        EnumMethodOverride mondayMethodOverride = EnumMethodOverride.MONDAY;
        mondayMethodOverride.dummyMethod();
        EnumMethodOverride fridayMethodOverride = EnumMethodOverride.FRIDAY;
        fridayMethodOverride.dummyMethod();

        EnumAbstract mondayAbstract = EnumAbstract.MONDAY;
        mondayAbstract.dummyMethod();

        EnumInterface enumInterface = EnumInterface.MONDAY;
        System.out.println(enumInterface.toLowerCase());
    }
}

// Instead of making a class and creating the list of static final constants, we can use enum to create a collection of constants. It improves readability and full control on what value we can pass in parameter.