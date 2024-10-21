#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
    // Code here
    unordered_set<string> s(wordList.begin(),wordList.end());
    s.erase(startWord);

    queue<pair<string,int>> q;
    q.push({startWord,1});

    while(!q.empty()){
    	string word = q.front().first;
    	int steps = q.front().second;
    	q.pop();

    	if(word == targetWord) return steps;
    	for(int i=0;i<word.size();i++){
    		char original = word[i];
    		for(char ch='a';ch<='z';ch++){
    			word[i] = ch;
    			// If the word exists in the step
    			if(s.find(word) != s.end()){
    				s.erase(word);
    				q.push({word,steps+1});
    			}
    		}
    		word[i] = original;	
    	}
    }

    return 0;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}