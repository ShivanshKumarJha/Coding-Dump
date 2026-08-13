package com.example.restapi.student;

import org.junit.jupiter.api.*;

import static org.junit.jupiter.api.Assertions.*;

class StudentMapperTest {

    private StudentMapper studentMapper;

    @BeforeEach
    void setUp() {
        studentMapper = new StudentMapper();
    }

    @Test
    public void shouldMapStudentDtoToStudent(){
        StudentDto dto = new StudentDto("John", "Doe", "john.doe@example.com",1);
        Student student = studentMapper.toStudent(dto);

        assertEquals(dto.firstName(), student.getFirstName());
        assertEquals(dto.lastName(), student.getLastName());
        assertEquals(dto.email(), student.getEmail());
        assertNotNull(student.getSchool());
        assertEquals(dto.schoolId(), student.getSchool().getId());
    }

    @Test
    public void should_throw_null_pointer_exception_when_studentDto_is_null(){
        var exp = assertThrows(NullPointerException.class, () -> {
            studentMapper.toStudent(null);
        });
        assertEquals("The StudentDto should not be null", exp.getMessage());
    }

    @Test
    public void shouldStudentToStudentResponseDto(){
        Student student = new Student("John","Doe","abc@gmail.com",1);
        StudentResponseDto dto = studentMapper.toStudentResponseDto(student);

        assertEquals(student.getFirstName(), dto.firstName());
        assertEquals(student.getLastName(), dto.lastName());
        assertEquals(student.getEmail(), dto.email());
    }
}