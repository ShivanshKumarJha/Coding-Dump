#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=n;
    while(i>0){
        int j=1;
        char ch='A'+(i-1);
        while(j<=n-i+1){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i--;
    }    
}
