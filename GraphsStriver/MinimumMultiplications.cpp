#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int minimumMultiplications(vector<int>& arr, int start, int end) {
    // code here
    if(start == end) return 0;
    queue<pair<int,int>> q;
    q.push({start,0});
    vector<int> dist(1e5,1e9);
    dist[start] = 0;
    int mod = 1e5;

    while(!q.empty()){
    	int node = q.front().first;
    	int steps = q.front().second;
    	q.pop();

    	for(auto it:arr){
    		int num = (it * node) % mod;
    		if(steps + 1 < dist[num]){
    			dist[num] = steps+1;
    			if(num == end) return steps+1;
    			q.push({num,steps+1});
    		}
    	}
    }
    return -1;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}