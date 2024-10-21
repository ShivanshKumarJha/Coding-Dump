#include<bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> nums){
    // Code here.
    vector<int> v(2);
    long long ans=0;
    for(int i=0;i<nums.size();i++){ans=ans^nums[i];}
    long long sn=ans&~(ans-1);  //Rightmost Set Bit Only
    for(int i=0;i<nums.size();i++){
        if((nums[i]&sn)!=0)
            v[0]=v[0]^nums[i];
        else
            v[1]=v[1]^nums[i];
    }
    sort(v.begin(),v.end());
    return v;
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	vector<int> arr={1, 2, 3, 2, 1, 4};
	vector<int> v=singleNumber(arr);
	for(auto c:v){
		cout<<c<<" ";
	}
	return 0;
}