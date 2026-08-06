package JavaClasses.GenericClasses;

// This is upperBound
public class BoundedClassPrint<T extends Number> {
      T value;

      public T getPrintValue(){
          return value;
      }

      public void setPrintValue(T value){
          this.value = value;
      }
}
