#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

string findOrder(string dict[], int N, int K) {
    //code here
    vector<int> adj[K];
    int indegree[K] = {0};

    for(int i=0;i<N-1;i++){
    	string s1 = dict[i];
    	string s2 = dict[i+1];

    	int len = min(s1.size(),s2.size());
    	for(int j=0;j<len;j++){
    		if(s1[j] != s2[j]){
    			adj[s1[j]-'a'].push_back(s2[j]-'a');
    			indegree[s2[j]-'a']++;
    			break;
    		}
    	}
    }

    queue<int> q;
    vector<int> topo;
    for(int i=0;i<K;i++){
    	if(indegree[i] == 0) q.push(i);
    }

    while(!q.empty()){
    	int curr = q.front();
    	q.pop();
    	topo.push_back(curr);
    	for(auto nbr:adj[curr]){
    		indegree[nbr]--;
    		if(indegree[nbr] == 0) q.push(nbr);
    	}
    }

    string res = "";
    for(int i=0;i<topo.size();i++){
    	res += (topo[i]+'a');
    }
    return res;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}