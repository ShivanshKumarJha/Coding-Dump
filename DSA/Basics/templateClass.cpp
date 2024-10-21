#include<bits/stdc++.h>
using namespace std;

template<class T>
class Arithmetic{
private:
    T a;
    T b;

public:
    Arithmetic()    
        :a{1},b{1}{}
    
    Arithmetic(T a,T b);

    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a,T b)
    :a{a},b{b}{}

template<class T>
T Arithmetic<T>::add(){
    return a+b;
}

template<class T>
T Arithmetic<T>::sub(){
    return a-b;
}

int main(){
    Arithmetic<int> a1(5,4);
    cout<<a1.add()<<endl;
    return 0;
}