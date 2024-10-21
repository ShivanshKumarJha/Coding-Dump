#include<bits/stdc++.h>
using namespace std;

class Move{
    private:
    int *data;

    public:
    void set_data_value(int d){*data=d;};
    int get_data_value(){return *data;}

    Move(int d);
    Move(Move &&source);
    ~Move();
};

Move::Move(int d){
    data=new int;
    *data=d;
}

Move::Move(Move &&source)
    :data{source.data}{
        source.data=nullptr;
        cout<<"Move Constructor-moving resources:"<<endl;
    }

Move::~Move(){
    if(data!=nullptr){
        cout<<"Destructor freeing data for:"<<*data<<endl;
    }
    else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main(){
    Move m1(100);
    Move m2(m1);
    return 0;
}