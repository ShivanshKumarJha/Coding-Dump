package com.shivansh.jpa;

import com.github.javafaker.Faker;
import com.shivansh.jpa.models.Author;
import com.shivansh.jpa.repositories.AuthorRepository;
import com.shivansh.jpa.repositories.VideoRepository;
import com.shivansh.jpa.specification.AuthorSpecification;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;
import org.springframework.data.jpa.domain.Specification;

@SpringBootApplication
public class JpaApplication {

    public static void main(String[] args) {
        SpringApplication.run(JpaApplication.class, args);
    }

    @Bean
    public CommandLineRunner commandLineRunner(
            AuthorRepository repository,
            VideoRepository videoRepository
    ){
        return args -> {
            for(int i=0;i<50;i++){
                Faker faker = new Faker();
                var author = Author.builder()
                        .firstName(faker.name().firstName())
                        .lastName(faker.name().lastName())
                        .email(faker.internet().emailAddress())
                        .age(faker.number().numberBetween(20, 80))
                        .build();
                repository.save(author);
            }

            // Update author with id 1
            /*var author = Author.builder()
                    .id(1)
                    .firstName("Shivansh")
                    .lastName("Jha")
                    .email("shivansh.jha@gmail.com")
                    .age(22)
                    .build();*/
            // repository.save(author);

            // repository.updateAuthor(22, 1);

            // Update all authors
            // repository.updateAllAuthorsAges(25);

            // Find by named query
            // var authors = repository.findByNamedQuery(25);
            // authors.forEach(a-> System.out.println(a.getFirstName()));

            // repository.updateByNamedQuery(12);

            Specification<Author> spec = Specification
                    .where(AuthorSpecification.hasAge(48))
                    .and(AuthorSpecification.firstNameLike("Da"));
            repository.findAll(spec).forEach(a-> System.out.println(a.getFirstName()));
        };
    }
}
