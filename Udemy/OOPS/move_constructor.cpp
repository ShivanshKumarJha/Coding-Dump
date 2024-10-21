#include<bits/stdc++.h>
using namespace std;
class Move{
    private:
    int *data;

    public:
    void set_data_value(int d){*data=d;}
    int get_data_value(){return *data;}
    Move(int d);
    Move(Move &&source) noexcept;
    ~Move();
};

Move::Move(int d){
    data=new int;
    *data=d;
    cout<<"Constructor for: "<<d<<endl;
}

Move::Move(Move &&source)
    :data{source.data}{
    source.data=nullptr;
    cout<<"Move constructors - moving resources:"<<data<<endl;
    }

Move::~Move(){
    if(data!=nullptr){
        cout<<"Destructor freeing data for: "<<data<<endl;
    }
    else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main(){
    vector<move> vec;
    vec.push_back(Move(20));    
    vec.push_back(Move(30));    
    vec.push_back(Move(40));    
    vec.push_back(Move(50));    
    vec.push_back(Move(60));     
    return 0;
}