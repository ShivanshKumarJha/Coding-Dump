#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

vector<vector<string>> findSequences(string beginWord, string endWord, vector<string>& wordList) {
    // code here
    unordered_set<string> s(wordList.begin(),wordList.end());
    vector<vector<string>> ans;
    vector<string> usedOnLevel;
    usedOnLevel.push_back(beginWord);
    
    queue<vector<string>> q;
    q.push({beginWord});
    int level = 0;

    while(!q.empty()){c
    	auto vec = q.front();
    	q.pop();

    	// erase all the words that has been used in the previous levels to transform
    	if(vec.size()>level){
    		level++;
    		for(auto word:usedOnLevel) s.erase(word);
			usedOnLevel.clear();
    	}

    	string word = vec.back();
    	if(word == endWord){
    		// the first sequence where we reached end
    		if(ans.size() == 0) ans.push_back(vec);
    		else if(ans[0].size() == vec.size()) ans.push_back(vec); 
    	}

    	for(int i=0;i<word.size();i++){
    		char original = word[i];
    		for(char ch='a';ch<='z';ch++){
    			word[i] = ch;
    			if(s.find(word) != s.end()){
    				vec.push_back(word);		
    				q.push(vec);
    				// mark as visited on that level
    				usedOnLevel.push_back(word);
    				vec.pop_back();
    			}
    		}
    		word[i] = original;
    	}
    }
    return ans;
}

// Optimised Approach
unordered_map<string,int> m;
vector<vector<string>> ans;	
string b;

void dfs(string word,vector<string>& seq){
    if(word == b){
        reverse(seq.begin(), seq.end());
        ans.push_back(seq);
        reverse(seq.begin(), seq.end());
        return;
    }
    int steps = m[word];
    for(int i=0;i<word.size();i++){
        char original = word[i];
        for(char ch='a';ch<='z';ch++){
            word[i] = ch;
            if(m.find(word) != m.end() && m[word]+1 == steps){
                seq.push_back(word);
                dfs(word,seq);
                seq.pop_back();
            }
        }
        word[i] = original;	
    }
}


vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList){
    unordered_set<string> s(wordList.begin(),wordList.end());
    queue<string> q;
    b = beginWord;
    q.push(beginWord);
    m[beginWord] = 1;
    s.erase(beginWord);

    while(!q.empty()){
        string word = q.front();
        int steps = m[word];
        q.pop();
        if(word == endWord) break;

        for(int i=0;i<word.size();i++){
            char original = word[i];
            for(char ch='a';ch<='z';ch++){
                word[i] = ch;
                // If the word exists in the step
                if(s.find(word) != s.end()){
                    s.erase(word);
                    q.push(word);
                    m[word] = steps+1;
                }
            }
            word[i] = original;	
        }
    }
    if(m.find(endWord) != m.end()){
        vector<string> seq;
        seq.push_back(endWord);
        dfs(endWord,seq);
    }
    return ans;
}

int main(){

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	return 0;
}