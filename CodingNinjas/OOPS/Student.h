#ifndef STUDENT_H
#define STUDENT_H 

class Student{
	static int totalStudents;
public:
	char *name;
	int age;

	Student();
	Student(int age,char *name);
	Student(Student const &s);
	void display();
	static int getTotalStudents();

};

#endif