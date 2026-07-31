package com.shivansh.restapidev.service.impl;

import com.shivansh.restapidev.dto.AddStudentRequestDto;
import com.shivansh.restapidev.dto.StudentDto;
import com.shivansh.restapidev.entity.Student;
import com.shivansh.restapidev.repository.StudentRepository;
import com.shivansh.restapidev.service.StudentService;
import org.modelmapper.ModelMapper;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;
import java.util.Map;

@Service
public class StudentServiceImpl implements StudentService {

    @Autowired
    private StudentRepository studentRepository;

    @Autowired
    private ModelMapper modelMapper;

    @Override
    public List<StudentDto> getAllStudents() {
        List<Student> students = studentRepository.findAll();
        return students
                .stream()
                .map(student -> modelMapper.map(student, StudentDto.class))
                .toList();
    }

    @Override
    public StudentDto getStudentById(Long id) {
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new IllegalArgumentException("Student not found with id: " + id));
        return modelMapper.map(student, StudentDto.class);
    }

    @Override
    public StudentDto createStudent(AddStudentRequestDto addStudentRequestDto) {
        Student newStudent = studentRepository.save(modelMapper.map(addStudentRequestDto, Student.class));
        Student student = studentRepository.save(newStudent);
        return modelMapper.map(student, StudentDto.class);
    }

    @Override
    public void deleteStudent(Long id) {
        if (!studentRepository.existsById(id)) {
            throw new IllegalArgumentException("Student not found with id: " + id);
        }
        studentRepository.deleteById(id);
    }

    @Override
    public StudentDto updateStudent(Long id, AddStudentRequestDto addStudentRequestDto) {
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new IllegalArgumentException("Student not found with id: " + id));
        modelMapper.map(addStudentRequestDto, student);
        studentRepository.save(student);
        return modelMapper.map(student, StudentDto.class);
    }

    @Override
    public StudentDto updatePartialStudent(Long id, Map<String, Object> updates) {
        Student student = studentRepository.findById(id)
                .orElseThrow(() -> new IllegalArgumentException("Student not found with id: " + id));

        updates.forEach((key, value) -> {
            switch (key) {
                case "name" -> student.setName((String) value);
                case "email" -> student.setEmail((String) value);
                default -> throw new IllegalArgumentException("Invalid field: " + key);
            }
        });
        
        studentRepository.save(student);
        return modelMapper.map(student, StudentDto.class);
    }
}
