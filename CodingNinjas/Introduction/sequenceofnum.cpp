#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n;cin>>n;
    int pre;cin>>pre;
    bool isDec=true;
    while(--n){
        int curr;cin>>curr;
        if(curr>pre)
            isDec=false;
        else if(curr<pre){
            if(!isDec){
                cout<<"false"<<endl;
                return 0;
            }
        }
        else if(curr==pre){
            cout<<"false"<<endl;
            return 0;
        }
        pre=curr;
    }
    cout<<"true"<<endl;
    return 0;
}
