package com.example.restapi.student;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;

import java.util.ArrayList;
import java.util.List;
import java.util.Optional;

import static org.junit.jupiter.api.Assertions.*;
import static org.mockito.Mockito.*;

class StudentServiceTest {

    @InjectMocks
    private StudentService studentService;

    @Mock
    private StudentRepository studentRepository;
    @Mock
    private StudentMapper studentMapper;

    @BeforeEach
    void setUp() {
        MockitoAnnotations.openMocks(this);
    }

    @Test
    public void should_successfully_save_student(){
        // Given
        StudentDto dto = new StudentDto("John", "Doe", "john.doe@example.com",1);
        Student student = new Student("John", "Doe", "john.doe@example.com",1);

        // Mock calls
        when(studentMapper.toStudent(dto)).thenReturn(student);
        when(studentRepository.save(student)).thenReturn(student);
        when(studentMapper.toStudentResponseDto(student)).thenReturn(new StudentResponseDto("John", "Doe", "john.doe@example.com"));

        // When
        StudentResponseDto studentResponseDto = studentService.saveStudent(dto);

        // Then
        assertEquals(dto.firstName(), studentResponseDto.firstName());
        assertEquals(dto.lastName(), studentResponseDto.lastName());
        assertEquals(dto.email(), studentResponseDto.email());

        verify(studentMapper,times(1)).toStudent(dto);
        verify(studentRepository,times(1)).save(student);
        verify(studentMapper,times(1)).toStudentResponseDto(student);
    }

    @Test
    public void should_successfully_get_all_students() {
        // Given
        List<Student> students = new ArrayList<Student>();
        students.add(new Student("John", "Doe", "abc@gmail.com", 1));
        students.add(new Student("Jane", "Smith", "jane.smith@example.com", 2));

        // Mock Calls
        when(studentRepository.findAll()).thenReturn(students);
        when(studentMapper.toStudentResponseDto(any(Student.class))).thenReturn(new StudentResponseDto("John", "Doe", "abc@gmail.com"));

        // When
        List<StudentResponseDto> studentResponseDtos = studentService.getAllStudents();

        // Then
        assertEquals(students.size(), studentResponseDtos.size());
        verify(studentRepository, times(1)).findAll();
        verify(studentMapper, times(students.size())).toStudentResponseDto(any(Student.class));
    }

    @Test
    public void should_successfully_find_student_by_id(){
        // Given
        Integer studentId = 1;
        Student student = new Student("John", "Doe", "abc@gmail.com", 1);

        // Mock Calls
        when(studentRepository.findById(studentId)).thenReturn(Optional.of(student));
        when(studentMapper.toStudentResponseDto(student)).thenReturn(new StudentResponseDto("John", "Doe", "abc@gmail.com"));

        // When
        StudentResponseDto studentResponseDto = studentService.findStudentById(studentId);

        // Then
        assertEquals("John", studentResponseDto.firstName());
        assertEquals("Doe", studentResponseDto.lastName());
        assertEquals("abc@gmail.com", studentResponseDto.email());
        verify(studentRepository, times(1)).findById(studentId);
        verify(studentMapper, times(1)).toStudentResponseDto(student);
    }

    @Test
    public void should_successfully_find_students_by_name(){
        // Given
        String name = "John";
        List<Student> students = new ArrayList<Student>();
        students.add(new Student("John", "Doe", "abc@gmail.com", 20));
        students.add(new Student("Johnny", "Smith", "johnny.smith@example.com", 25));

        // Mock Calls
        when(studentRepository.findAllByFirstNameContaining(name)).thenReturn(students);
        when(studentMapper.toStudentResponseDto(any(Student.class))).thenReturn(new StudentResponseDto("John", "Doe", "abc@gmail.com"));

        // When
        List<StudentResponseDto> studentResponseDtos = studentService.findStudentsByName(name);

        // Then
        assertEquals(students.size(), studentResponseDtos.size());
        verify(studentRepository, times(1)).findAllByFirstNameContaining(name);
        verify(studentMapper, times(students.size())).toStudentResponseDto(any(Student.class));
    }
}