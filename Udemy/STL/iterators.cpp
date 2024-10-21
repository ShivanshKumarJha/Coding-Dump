#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<memory>
#include<utility>
using namespace std;

void display(const vector<int> &vec) {
    cout << "[ ";
    for (auto const &i: vec) {
        cout << i << " ";
    }
    cout << "]" << endl;
}



void test1() {
    cout << "\n=============================" << endl;
    vector<int> nums1 {1, 2, 3, 4, 5};
    auto it = nums1.begin();            // point to 1
    cout << *it << endl;

    it++;                                           // point to 2
    cout << *it << endl;      

    it += 2;                                       // point to 4
    cout << *it << endl;

    it -= 2;                                        // point to 2
    cout << *it << endl;

    it = nums1.end() - 1;                   // point to 5
    cout << *it << endl;
}



void test2() {
    cout << "\n=============================" << endl;
    // display all vector elements using an iterator
    
    vector<int> nums1 {1, 2, 3, 4, 5};

    vector<int>::iterator it = nums1.begin();
    while (it != nums1.end()) {
        cout << *it << endl;
        it++;
    }
    
    // change all vector elements to 0
    it = nums1.begin();
    while (it != nums1.end()) {
        *it = 0;
        it++;
    }

    display(nums1);
}



void test3() {
    
    // using a const_iterator
    cout << "\n=============================" << endl;
    vector<int> nums1 {1, 2, 3, 4, 5};

    vector<int>::const_iterator it1 = nums1.begin();
    // auto it1 = nums1.cbegin();
    
    while (it1 != nums1.end()) {
        cout << *it1 << endl;
        it1++;
    }
    
    // compiler error when we try to change element
    it1 = nums1.begin();
    while (it1 != nums1.end()) {
       // *it1 = 0;   // Complier error - read only
        it1++;
    }

}



void test4() {
    // more iterators
    // using a reverse iterator
    vector<int> vec {1,2,3,4};
    auto it1  = vec.rbegin();       // reverse iterator over vector of ints starts at 4
    while (it1 != vec.rend()) {
        cout << *it1 << endl;
        it1++;
    }

    // const reverse iterator over a list
    list<string> name {"Larry", "Moe", "Curly"};
    auto it2 =name.crbegin();    // iterator over list of strings  point to Curly
    cout << *it2 << endl;
    it2++;  // point to Moe
    cout << *it2 << endl;

    // iterator over a map
    map<string, string> favorites {
        {"Frank", "C++"},
        {"Bill", "Java"},
        {"James", "Haskell"}
    };
    auto it3 = favorites.begin();   // iterator over map of string, string pairs
    while (it3 != favorites.end()) {
        cout << it3->first << " : " << it3->second << endl;
        it3++;
    }
}



void test5() {
    // iterate over a subset of a container
    vector<int> vec {1,2,3,4,5,6,7,8,9,10};
    auto start = vec.begin() + 2;
    auto finish = vec.end() - 3;
    
    while (start != finish) {
        cout << *start << endl;
        start++;
    }
    
}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();   
    return 0;
}