package com.shivansh.restapidev.dto;

import lombok.Data;

@Data
public class AddStudentRequestDto {
    private String name;

    @Email
    private String email;
}
