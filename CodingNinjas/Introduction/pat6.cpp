#include<iostream>
using namespace std;


int main() {
    
    /*  Read input as specified in the question.
     * Print output as specified in the question.
     */
    int n;
    cin>>n;
    int i=1;
    while(i<=(n/2)+1){
        int j=1,k=1;
        while(k<=((n/2)+1)-i){
            cout<<" ";
            k++;
        }
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    i--;i--;
    while(i>0){
        int j=1,k=1;
        while(k<=((n/2)+1)-i){
            cout<<" ";
            k++;
        }
        while(j<=2*i-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i--;
    }
    
}
