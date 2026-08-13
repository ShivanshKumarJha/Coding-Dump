package com.shivansh.example;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

import java.util.Collections;

@SpringBootApplication
public class ExampleApplication {

	public static void main(String[] args) {
		var app = new SpringApplication(ExampleApplication.class);
		app.setDefaultProperties(Collections.singletonMap("spring.profiles.active","dev"));
		var ctx = app.run(args);

//		MyFirstClass myFirstClass = ctx.getBean("myBean", MyFirstClass.class);
//		System.out.println(myFirstClass.sayHello());

		MyFirstService myFirstService = (MyFirstService) ctx.getBean("myFirstService");
		System.out.println(myFirstService.tellAStory());
		System.out.println(myFirstService.getCustomPropertyFromAnotherSource());
		System.out.println(myFirstService.getCustomProperty());
//		System.out.println(myFirstService.getJavaVersion());
//		System.out.println(myFirstService.getOSName());
//		System.out.println(myFirstService.readProperty());
	}
}