#include<bits/stdc++.h>
using namespace std;

namespace first{
    void fun(){
        cout<<"First"<<endl;
    }
}

namespace second{
    void fun(){
        cout<<"Second"<<endl;
    }
}

using namespace first;
int main(){
    fun();
    second::fun();
    return 0;
}