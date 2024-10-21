#include<bits/stdc++.h>
using namespace std;
class Test{
    private:
    int a,b;
    public:
    static int count;
    Test(){
        a=10;b=10;
        count++;
    }
};
int Test::count=0;

int main(){
    Test t1;
    Test t2;
    cout<<t1.count<<" ";    
    cout<<t2.count<<" ";    
    cout<<Test::count<<" ";    
    return 0;
}