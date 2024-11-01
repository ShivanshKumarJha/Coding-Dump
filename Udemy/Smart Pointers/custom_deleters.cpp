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

void my_deleter(Test *ptr){
    cout<<"\nUsing my custom deleter"<<endl;
    delete ptr;
}

int main(){
    {
        // Using a function 
        std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter };
    }


    std::cout << "====================" << std::endl;
    {
        // Using a Lambda expression
        std::shared_ptr<Test> ptr2 (new Test{1000}, 
            [] (Test *ptr)  {
                std::cout << "\tUsing my custom lamdba deleter" << std::endl;
                delete ptr;
            });
    }    
    return 0;
}