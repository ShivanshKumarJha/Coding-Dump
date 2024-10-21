#include<bits/stdc++.h>
using namespace std;
class Deep{
    private:
    int *data;

    public:
    void set_data(int d){*data=d;}
    int get_data_value(){return *data;}
    void display_deep(Deep s){cout<<s.get_data_value()<<endl;}
    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d){
    data=new int;
    *data=d;
}

Deep::Deep(const Deep &source){
    data=new int;                                     //New Pointer
    *data=*source.data;
    cout<<"Copy Constructor-Deep Copy"<<endl;
}

Deep::~Deep(){
    delete data;
    cout<<"Destructor freeing data"<<endl;
}

int main(){
    Deep obj1(100);
    obj1.display_deep(obj1);
    Deep obj2(obj1);
    obj2.set_data(1000);   
    return 0;
}

q