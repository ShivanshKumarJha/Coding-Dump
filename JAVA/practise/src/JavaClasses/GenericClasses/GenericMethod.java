package JavaClasses.GenericClasses;

public class GenericMethod {
    public <K,V> void printValue(Pair<K,V> pair1, Pair<K,V> pair2) {
        if(pair2.getKey().equals(pair1.getKey())){
            System.out.println("Key: " + pair1.getKey() + ", Value: " + pair1.getValue());
        }
    }
}
