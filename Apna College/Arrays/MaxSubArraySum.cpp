#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> v;
    int sum=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            v.push_back(sum);
            sum=0;
        }
    }
    sort(v.begin(),v.end());
    int t=v.size();
    cout<<v[t-1]<<endl;
    return 0;
}