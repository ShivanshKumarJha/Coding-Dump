#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,w,days=0,sum=0;
        cin>>n>>w;
        vector<int> arr;
        for (size_t i = 0; i < n; i++)
        {
            int data;
            cin>>data;
            arr.push_back(data);
        }
        for (size_t i = 0; i < n; i++)
        {
            int a = *max_element(arr.begin(), arr.end());
            if(sum<w){
                sum+=a;
                days+=1;
            }
            else{
                break;
            }
            arr.erase(max_element(arr.begin(),arr.end()));
        }
        cout<<n-days<<endl;
    }
    return 0;
}