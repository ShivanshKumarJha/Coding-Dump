#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<iterator>     //for advanced
#include<numeric>
#include<string>
#include<vector>
#include<deque>
#include<set>
#include<map>
#include<list>
#include<stack>
#include<queue>
#include<memory>
#include<cctype>
#include<utility>
using namespace std;

bool is_palindrome(const string& s)
{
    stack<char> stk;
    queue<char> q;

    // add all the string characters that are alpha to the back of the queue  in uppercase
    // push all the string characters that are alpha on the stack
    
    for(char c : s)
        if(isalpha(c)) {
            c = toupper(c);
            q.push(c);
            stk.push(c);
        }

    char c1{};
    char c2{};    
    
    // while the queue is not empty
    //      compare and remove the character at the top of the stack 
    //      and the chacterter at the front of the queue
    //      if they are not the same - return false since it can't be a palindrome
    // if you complete the loop then the string must be a palindrome so return true
    while(!q.empty()) {
        c1 = q.front();
        q.pop();
        c2 = stk.top();
        stk.pop();
        if(c1 != c2)
            return false;
    }
    return true;
}

int main()
{
    vector<string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    cout << boolalpha;
    cout << setw(8) << left << "Result" << "String" << endl;
    for(const auto& s : test_strings) {
        cout << setw(8) << left << is_palindrome(s)  << s << endl;
    }
    cout << endl;
    return 0;
}