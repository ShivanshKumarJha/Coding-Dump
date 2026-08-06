/*
Java reflection is used to examine the classes, methods, fields, interfaces at runtime and also
possible to change the behavior of the class
For example:
    What all methods present in the class
    What all fields present in the class
    What is the return type of the method
    What is the modifier of the class
    What all interfaces class has implemented
    Change the value of the private field and public fields of the class

---------------------------------------------------------------------------------------------------------------------

How to do the reflection of the class? -> We first need to get an object of Class

What is class Class?
    Instance of the class Class is created by JVM for each class loaded in the memory.
    This Class object, has metadata information about the particular class like its method, fields, constructor etc.

---------------------------------------------------------------------------------------------------------------------

Reflection of the methods:

---------------------------------------------------------------------------------------------------------------------


 */

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;

class JavaReflections {
    static class Bird {}

    static class Eagle{
        Eagle(){}

        public String breed;
        private boolean canSwim;

        public void fly(){
            System.out.println("fly");
        }

        public void eat(){
            System.out.println("eat");
        }

        public void fly(int intParam, boolean boolParam, String strParam){
            System.out.println("fly intParam: " + intParam + " boolParam: " + boolParam + " strParam: " + strParam);
        }
    }

    public static void main(String[] args){
        // Ways to get the object of the class Class

        // First way
        try {
            Class birdClass = Class.forName("Bird");
        } catch (ClassNotFoundException e) {
            throw new RuntimeException(e);
        }

        // Second way
        Class birdClass = Bird.class;

        // Third way
        Bird bird = new Bird();
        Class birdClass2 = bird.getClass();

        // How to use then
        Class eagleClass = Eagle.class;
        System.out.println("Class Name: " + eagleClass.getName());
        System.out.println("Class Modifiers: " + Modifier.toString(eagleClass.getModifiers()));


//        -----------------------------------------------------------------------------------------------------

        // Reflection of the methods
        Method[] methods = eagleClass.getMethods();    // All public methods it will return
        for(Method method : methods){
            System.out.println("Method Name: " + method.getName());
            System.out.println("Method Return Type: " + method.getReturnType());
            System.out.println("Method Modifiers: " + Modifier.toString(method.getModifiers()));
        }

        // For getting all methods including private methods for only the current class,
        // we can use getDeclaredMethods() method
        Method[] declaredMethods = eagleClass.getDeclaredMethods();
        for(Method method : declaredMethods){
            System.out.println("Method Name: " + method.getName());
            System.out.println("Method Return Type: " + method.getReturnType());
            System.out.println("Method Modifiers: " + Modifier.toString(method.getModifiers()));
        }


//      -----------------------------------------------------------------------------------------------------
        // Invoking methods using reflection
        try {
            Class eagleClass2 = Class.forName("Eagle");
            Object eagleObject = eagleClass2.newInstance();

            Method flyMethod = eagleClass2.getMethod("fly", int.class, boolean.class, String.class);
            flyMethod.invoke(eagleObject, 10, true, "Hello");
        } catch (Exception e) {
            throw new RuntimeException(e);
        }

//      -----------------------------------------------------------------------------------------------------
        // Reflection of fields
        try {
            Class eagleClass3 = Class.forName("Eagle");
            Field[] fields = eagleClass3.getFields();
            for(Field field : fields){
                System.out.println("Field Name: " + field.getName());
                System.out.println("Field Type: " + field.getType());
                System.out.println("Field Modifiers: " + Modifier.toString(field.getModifiers()));
            }
        } catch (Exception e) {
            throw new RuntimeException(e);
        }

//      -----------------------------------------------------------------------------------------------------
        // Setting the value of field
        try{
            // Public field
            Class eagleClass4 = Eagle.class;
            Eagle eagleObj = new Eagle();
            Field field = eagleClass4.getDeclaredField("breed");
            field.set(eagleObj, "Golden Eagle");
            System.out.println("Breed: " + eagleObj.breed);

            // Private field
            Field privateField = eagleClass4.getDeclaredField("eagle");
            privateField.setAccessible(true);
            privateField.set(eagleObj, "Golden Eagle");
            System.out.println("Eagle: " + eagleObj.canSwim);
        } catch (Exception e) {
            throw new RuntimeException(e);
        }

//      -----------------------------------------------------------------------------------------------------
        // Reflection of constructor
        Class eagleClass5 = Eagle.class;

        Constructor[] eagleConstructorList = eagleClass5.getDeclaredConstructors();
        for(Constructor constructor : eagleConstructorList){
            System.out.println("Modifier: "+Modifier.toString(constructor.getModifiers()));
            System.out.println("Constructor Name: "+constructor.getName());
            Class[] parameterTypes = constructor.getParameterTypes();
            for(Class parameterType : parameterTypes){
                System.out.println("Parameter Type: "+parameterType.getName());
            }
        }
    }
}
