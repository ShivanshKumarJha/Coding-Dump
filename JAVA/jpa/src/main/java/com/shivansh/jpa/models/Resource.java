package com.shivansh.jpa.models;

import jakarta.persistence.*;
import lombok.*;
import lombok.experimental.SuperBuilder;

@Data
@NoArgsConstructor
@AllArgsConstructor
@SuperBuilder
@Entity
@Inheritance(strategy = InheritanceType.JOINED)
@Table(name = "RESOURCE")
public class Resource {

    @Id
    @GeneratedValue
    private Integer id;

    private String name;

    private int size;

    private String url;

    @OneToOne
    @JoinColumn(name = "lecture_id")
    private Lecture lecture;
}

/*
    For using inheritance in spring, there are three strategies:
        1. Single Table Strategy - A Single Table having all the fields and attributes from subclasses and one
        discriminator column
        2. Joined Strategy - A table for each subclass and a table for the superclass, with foreign key relationships
        3. Table per Class Strategy - A table for each subclass, with all the fields
*/