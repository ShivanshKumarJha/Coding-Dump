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

void func(shared_ptr<Test> p){
    cout<<"Use count: "<<p.use_count()<<endl;
}

int main(){
    // use_count – the number of shared_ptr objects
    // managing the heap object
   
   shared_ptr<int> p1 {new int {100} };
   cout << "Use count: "<< p1.use_count () << endl; 		// 1


   shared_ptr<int> p2 { p1 };			// shared ownwership
   cout << "Use count: "<< p1.use_count () << endl; 		// 2


   p1.reset();	// decrement the use_count; p1 is nulled out
   cout << "Use count: "<< p1.use_count() << endl; 		// 0 
   cout << "Use count: "<< p2.use_count() << endl; 		// 1


   cout << "\n==========================================" << endl;
   shared_ptr<Test> ptr = make_shared<Test>(100);
   func(ptr);
   cout << "Use count: " << ptr.use_count() << endl;
   {
       shared_ptr<Test> ptr1 = ptr;
       cout << "Use count: " << ptr.use_count() << endl;
       {
           shared_ptr<Test> ptr2 = ptr;
           cout << "Use count: " << ptr.use_count() << endl;      
           ptr.reset();
       }
       cout << "Use count: " << ptr.use_count() << endl;      

   }
    cout << "Use count: " << ptr.use_count() << endl;
    return 0;
}