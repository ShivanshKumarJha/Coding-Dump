public class Manager extends Person{
    int age ;

    Manager(int empID,int age){
        super(empID); // Calls Person constructor
        this.age = age;
    }
}
