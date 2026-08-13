package com.shivansh.example;

import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Primary;
import org.springframework.context.annotation.Profile;

@Configuration
public class ApplicationConfig {

    @Bean
    @Profile("dev")
//    @Qualifier("bean1")
    public MyFirstClass myFirstBean(){
        return new MyFirstClass("First Bean");
    }

    @Bean
    @Profile("test")
//    @Qualifier("bean2")
    public MyFirstClass mySecondBean(){
        return new MyFirstClass("Second Bean");
    }

    @Bean
//    @Primary
    public MyFirstClass myThirdBean(){
        return new MyFirstClass("Third Bean");
    }
}