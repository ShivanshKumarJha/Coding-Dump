#include<bits/stdc++.h>
using namespace std;
class student {
    private:
    int rollno,m1,m2,m3;
    string name;

    public:
    student(int r,string name){
        rollno=r;
        this->name=name;
    }
    void setMarks(int m1,int m2,int m3){
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
    }
    int totalMarks();
    char grade();
};

int student::totalMarks(){
    return (m1+m2+m3);
}

char student::grade(){
    if(m1+m2+m3>35 and m1+m2+m3<45){
        return 'C';
    }
    else if(m1+m2+m3>=45 and m1+m2+m3<=55){
        return 'B';
    }
    else{
        return 'A';
    }
}

int main(){
    int rollno;
    string name;
    cout<<"Enter the roll no of the Student: ";
    cin>>rollno;
    cout<<"Enter the name of the Student: ";
    cin>>name;
    student s(rollno,name);
    int m1,m2,m3;
    cout<<"Enter the marks of the student: ";
    cin>>m1>>m2>>m3;
    s.setMarks(m1,m2,m3);
    cout<<"Total marks is "<<s.totalMarks()<<endl;
    cout<<"Grade is: "<<s.grade()<<endl;;
    return 0;
}