package JavaClasses.OtherClassPart3;

/*
This class objective is to demonstrate the Singleton Design Pattern in Java. The Singleton pattern ensures that a class has only one instance and provides a global point of access to that instance. This is useful when exactly one object is needed to coordinate actions across the system.
Example : DB Connection

Different ways for creating the Singleton Class:
    Eager Initialization
    Lazy Initialization
    Synchronisation Block
    Double Check Lock(there is a memory issue, resolved throght Voltaile instance variable)
    Bill Pugh Solution
    Enum Singleton
 */

public class SingletonClass {
}

/*
--------------------------------------------------------------------------------------------------------------------------------------------

1. Eager Initialization

public class DBConnection{
    private static DBConnection conObject = new DBConnection();

    private DBConnection(){}

    public static DBConnection getInstance(){
        return conObject;
    }
}

--------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------

2. Lazy Initialization

public class DBConnection{
    private static DBConnection conObject;

    private DBConnection(){}

    public static DBConnection getInstance(){
        if (conObject == null){
            conObject = new DBConnection();
        }
        return conObject;
    }
}

--------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------

3. Synchronisation Block -> Prevents when two threads are simultaneously calling the Singleton Class

public class DBConnection{
    private static DBConnection conObject;

    private DBConnection(){}

    synchronized public static DBConnection getInstance(){
        if (conObject == null){
            conObject = new DBConnection();
        }
        return conObject;
    }
}

We are synchronizing at method level hence it could make the memory slow due to lock and non-locking

--------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------

4. Double Check Lock

public class DBConnection{
    private static volatile DBConnection conObject;

    private DBConnection(){}

    public static DBConnection getInstance(){
        if (conObject == null){
            synchronized (DBConnection.class) {
                if (conObject == null) {
                    conObject = new DBConnection();
                }
            }
        }
        return conObject;
    }
}
when we put volatile, read/write happens in the main memory instead of the L1 cache

--------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------

5. Bill Pugh Solution

public class DBConnection{
    private DBConnection(){}

    private static class DBConnectionHelper{
        private static final DBConnection INSTANCE_OBJECT = new DBConnection();
    }

    public static DBConnection getInstance(){
        return DBConnectionHelper.INSTANCE_OBJECT;
    }
}

--------------------------------------------------------------------------------------------------------------------------------------------

--------------------------------------------------------------------------------------------------------------------------------------------

6. ENUM Singleton

enum DBConnection{
    INSTANCE;

    public void connect(){
        System.out.println("Connecting to the database...");
    }
}

--------------------------------------------------------------------------------------------------------------------------------------------
 */
