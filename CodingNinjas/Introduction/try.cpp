#include<bits/stdc++.h>
using namespace std;

void printTable(int start, int end, int step) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print output and don't return it.
     * Taking input is handled automatically.
     */
    for(int i=start;i<=end;i=i+step){
        cout<<i<<" "<<((i-32)*5)/9<<endl;
    }
}

int main(){
    printTable(120,200,40);
    return 0;
}
