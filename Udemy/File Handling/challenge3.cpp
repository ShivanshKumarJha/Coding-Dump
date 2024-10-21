#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
#include<set>
using namespace std;

bool find_substring(const string &word_to_find, const string &target) {
    size_t found = target.find(word_to_find);
    if (found == string::npos)
        return false;
    else
        return true;
}

int main(){
    string word_to_find;
    string word_read;
    int word_count=0;
    int match_count=0;


    ifstream infile;
    infile.open("romeoandjuliet.txt");

    if(!infile.is_open()){
        cerr<<"Problem Opening File"<<endl;
        return 1;
    }

    cout<<"Enter the substring to search for: ";
    cin>>word_to_find;
    while(infile>>word_read){
        ++word_count;
        if(find_substring(word_to_find,word_read)){
            ++match_count;
            // cout<<word_read<<" ";
        }
    }
    cout << word_count << " words were searched..." << endl;
    cout << "The substring " << word_to_find << " was found " << match_count << " times " 
    << endl;

    infile.close();
    cout<<endl;
    return 0;
}