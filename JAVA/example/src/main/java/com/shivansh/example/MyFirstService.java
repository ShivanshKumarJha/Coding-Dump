package com.shivansh.example;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.context.annotation.PropertySource;
import org.springframework.context.annotation.PropertySources;
import org.springframework.core.env.Environment;
import org.springframework.stereotype.Service;

@Service
@PropertySources({
        @PropertySource("classpath:application.properties"),
        @PropertySource("classpath:custom.properties")
})
public class MyFirstService {

//    @Autowired
//    @Qualifier("mySecondBean")
//    private MyFirstClass myFirstClass;
//    private Environment environment;

//    Method Injection
//    @Autowired
//    public void injectDependencies(@Qualifier("mySecondBean") MyFirstClass myFirstClass){
//        this.myFirstClass = myFirstClass;
//    }

//    Setter Injection
//    @Autowired
//    public void setMyFirstClass(@Qualifier("mySecondBean") MyFirstClass myFirstClass){
//        this.myFirstClass = myFirstClass;
//    }
//
//    @Autowired
//    public void setEnvironment(Environment environment){
//        this.environment = environment;
//    }
//
//    @Autowired
//    public String getJavaVersion(){
//        return environment.getProperty("java.version");
//    }
//
//    @Autowired
//    public String getOSName(){
//        return environment.getProperty("os.name");
//    }
//
//    @Autowired
//    public String readProperty(){
//        return environment.getProperty("my.custom.property");
//    }

//    @Autowired - no longer required since Spring 4.3 if the class has only one constructor
//    public MyFirstService(MyFirstClass myFirstClass) {
//        this.myFirstClass = myFirstClass;
//    }

//    public String tellAStory(){
//        return "the dependency is saying : " + myFirstClass.sayHello();
//    }

    private final MyFirstClass myFirstClass;

//    @Value("Hello Shivansh")
//    private String customProperty;

    @Value("${my.prop}")
    private String customPropertyFromAnotherSource;

    @Value("${my.custom.property}")
    private String customProperty;

    @Autowired
    public MyFirstService(@Qualifier("mySecondBean") MyFirstClass myFirstClass) {
        this.myFirstClass = myFirstClass;
    }

    public String tellAStory(){
        return "the dependency is saying : " + myFirstClass.sayHello();
    }

    public String getCustomPropertyFromAnotherSource(){
        return customPropertyFromAnotherSource;
    }

    public String getCustomProperty(){
        return customProperty;
    }
}
