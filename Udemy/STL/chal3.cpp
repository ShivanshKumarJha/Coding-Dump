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
#include<memory>
#include<cctype>
#include<utility>
using namespace std;



// Used for Part1
// Display the word and count from the 
// map<string, int>

void display_words(const map<string, int> &words) {
    cout << setw(12) << left << "\nWord"
        << setw(7) << right << "Count"<< endl;
    cout << "===================" << endl;
    for (auto pair: words)
        cout << setw(12) << left << pair.first 
            << setw(7) << right << pair.second << endl;
}

// Used for Part2
// Display the word and occurences from the 
// map<string, set<int>>

void display_words(const map<string, set<int>> &words)
{
     cout << setw(12) << left << "\nWord"
                << "Occurrences"<< endl;
    cout << "=====================================================================" << endl;
    for (auto pair: words) {
        cout << setw(12) << left << pair.first 
                       << left << "[ ";
        for (auto i: pair.second) 
            cout << i << " ";
        cout << "]" << endl;
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
string clean_string(const string &s) {
    string result;
    for (char c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

void part1() {
    map<string, int> words;
    string line;       
    string word;   
    ifstream in_file {"words.txt"};
    if (in_file) {
        while (getline(in_file, line)) {
            //cout << line;
            stringstream ss(line);
            while (ss >> word) {
                word = clean_string(word);
                words[word]++;      // increment the count for the word in the map
            }
        }
        in_file.close();
        display_words(words);
    } 
    else {
        cerr << "Error opening input file" << endl;
    }
}
    
// Part1 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2() {
    map<string, set<int>> words;
    string line;
    string word;
    ifstream in_file {"words.txt"};
    if (in_file) {
        int line_number = 0;
        while (getline(in_file, line)) {
            //cout << line;
            line_number++;
            stringstream ss(line);
            while (ss >> word) {
               word = clean_string(word);
               words[word].insert(line_number);
            }  
        }
        in_file.close();
        display_words(words);
    } else {
        cerr << "Error opening input file" << endl;
    }
}

int main(){
    part1();
    part2();
    cout<<endl;
    return 0;
}