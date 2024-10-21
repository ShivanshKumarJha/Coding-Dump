#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
using namespace std;
class Test{
private:
    int data;
public:
    Test():data{0}{cout<<"Test Constructor("<<data<<")"<<endl;}
    Test(int data):data{data}{cout<<"Test Constructor("<<data<<")"<<endl;}
    int get_data() const {return data;}
    ~Test(){cout<<"Test Destructor("<<data<<")"<<endl;}
};

int main(){
    //Using Raw Pointers
    // Test t1();
    // Test t2(1000);
    // Test *t3=new Test{1000};
    // delete t3;

    //Using Unique Pointer
    unique_ptr<Test>t1{new Test{100}};
    unique_ptr<Test>t2=make_unique<Test>(1000);
    unique_ptr<Test>t3;
    t3=move(t1);
    if(!t1){
        cout<<"t1 is nullptr"<<endl;
    }
    cout<<t2.get()<<endl;   //To get address of the pointer
    t2.reset();             //Make t2 null pointer
    return 0;
}