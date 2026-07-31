package com.shivansh.restapidev.dto;

import jakarta.validation.constraints.Email;
import jakarta.validation.constraints.NotBlank;
import jakarta.validation.constraints.Size;
import lombok.Data;

@Data
public class AddStudentRequestDto {
    @NotBlank
    @Size(min = 4, max = 50)
    private String name;

    @Email
    @NotBlank(message = "Email is mandatory")
    private String email;
}
