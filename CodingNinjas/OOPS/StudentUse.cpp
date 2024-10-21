#include<bits/stdc++.h>
#include "Student.cpp"
using namespace std;

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);


	char name[100]="Shivansh";
	Student s1(19,name);
	name[3]='g';
	Student s2(19,name);
	Student s3,s4,s5;
	cout<<Student::getTotalStudents()<<endl;
	return 0;
}