#include<bits/stdc++.h>
#include "Student.h"
using namespace std;

Student::Student(){totalStudents++;}

Student::Student(int age,char *name){
	totalStudents++;
	this->age=age;
	this->name=new char[strlen(name)+1];
	strcpy(this->name,name);
}

Student::Student(Student const &s){
	totalStudents++;
	this->age=age;
	this->name=new char[strlen(s.name)+1];
	strcpy(this->name,s.name);
}

void Student::display(){
	cout<<"Name: "<<name<<" Age: "<<age<<endl;
}

int Student::totalStudents=0;

int Student::getTotalStudents(){
	return totalStudents;
}