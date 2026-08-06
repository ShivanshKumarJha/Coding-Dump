package JavaClasses.OtherClassPart3;
import java.util.ArrayList;
import java.util.List;

/*
We can not change the value of an object once it is created.
Declare the class as final so that it can not be extended.
All class members should be private. So that direct access can be modified.
And class members are initialized only once using constructor.
There should not be any setter methods, which is generally use to change the value.
Just getter methods. And returns Copy of the member variable.
Example: String, Wrapper Classes etc.
 */

public class ImmutableClass {
    private final String name;
    private final List<Object> petNameList;

    public ImmutableClass(String name, List<Object> petNameList) {
        this.name = name;
        this.petNameList = new ArrayList<>(petNameList);
    }

    public String getName() {
        return name;
    }

    public List<Object> getPetNameList() {
        // this is required, because making list final,
        // means you can not now point it to new list, but still can add, delete, update the existing list.
        // So to avoid that, we are returning a copy of the list.
        return new ArrayList<>(petNameList);
    }
}

