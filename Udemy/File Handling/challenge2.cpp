#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
#include<set>
using namespace std;

void print_header(){
    cout<<setw(15)<<left<<"Student"<<setw(5)<<"Score"<<endl;
    cout<<setw(20)<<setfill('-')<<""<<endl;
    cout<<setfill(' ');
}

void print_footer(double average){
    cout<<setw(20)<<setfill('-')<<""<<endl;
    cout<<setfill(' ');
    cout<<setw(15)<<left<<"Average Score"<<setw(5)<<right<<average;
}

void print_student(string &student,int score){
    cout<<setprecision(1)<<fixed;
    cout<<setw(15)<<left<<student<<setw(5)<<right<<score<<endl;
}

int process_response(const string &response,const string &answer_key){
    int score{0};
    for(size_t i=0;i<answer_key.size();++i){
        if(response.at(i)==answer_key.at(i)){
            score++;
        }
    }
    return score;
}

int main(){
    ifstream infile;
    infile.open("responses.txt");
    string answer_key;
    string name;
    string response;
    int running_sum {0};
    int total_students {0};
    double average_score {0.0};


    if(!infile.is_open()){
        cerr<<"Problem Opening File"<<endl;
        return 1;
    }

    infile>>answer_key;

    print_header();

    while(infile>>name>>response){
        ++total_students;
        int score=process_response(response,answer_key);
        running_sum+=score;
        print_student(name,score);
    }

    if(total_students!=0){
        average_score=static_cast<double>(running_sum)/total_students;
    }

    print_footer(average_score);

    infile.close();
    cout<<endl<<endl;
    return 0;
}