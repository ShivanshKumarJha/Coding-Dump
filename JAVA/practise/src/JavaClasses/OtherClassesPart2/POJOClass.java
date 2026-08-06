package JavaClasses.OtherClassesPart2;

/*
Stands for Plain Old Java Object
Contains variables and its getter and setter methods
Class should be public and should have a public no-argument constructor
No annotation should be used like @Table, @Entity, @Id etc.
It should not extend any class or implement any interface
 */

public class POJOClass {
    String name;
    private int rollNumber;
    protected String address;

    public String getName(){
        return name;
    }

    public void setName(String name){
        this.name = name;
    }

    public int getRollNumber(){
        return rollNumber;
    }

    public void setRollNumber(int rollNumber){
        this.rollNumber = rollNumber;
    }

    public String getAddress(){
        return address;
    }

    public void setAddress(String address){
        this.address = address;
    }
}
// 1. Transform the request to POJO class
// 2. From Repository create POJO class object and set the values from the request to the POJO class object