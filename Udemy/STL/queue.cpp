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

// This function displays a queue of 
// by repeatedly removing elements from the front
// Note theat the queue is passed in by value so we
// don't affect the passed in queue.

template <typename T>
void display(queue<T> q) {
    cout << "[ ";
    while (!q.empty()) {
        T elem = q.front();
        q.pop();
        cout << elem << " ";
    }
    cout << "]" << endl;
}

int main(){
    queue<int> q;
    
    for (int i: {1,2,3,4,5}) 
        q.push(i);
    display(q);
    cout << "Front: " << q.front() << endl;
    cout << "Back:  " << q.back() << endl;

    q.push(100);
    display(q);

    q.pop();
    q.pop();
    display(q);
    
    while (!q.empty())
        q.pop();
    display(q);

    cout << "Size: " << q.size() << endl;
    
    q.push(10);
    q.push(100);
    q.push(1000);
    display(q);
    
    cout << "Front: " << q.front() << endl;
    cout << "Back:  " << q.back() << endl;
    
    q.front() = 5;
    q.back() = 5000;
    
    display(q);
    cout << "Front: " << q.front() << endl;
    cout << "Back:  " << q.back() << endl;
    return 0;
}