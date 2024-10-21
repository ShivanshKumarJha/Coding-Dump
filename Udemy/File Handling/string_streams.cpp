#include<bits/stdc++.h>
using namespace std;

int main(){
    int num{};
    double total{};
    string name{};

    //Reading from the string
    string info{"Moe 100 1234.5"};
    istringstream iss{info};

    iss>>name>>num>>total;
    cout<<setw(10)<<left<<name<<setw(5)<<num<<setw(10)<<total<<endl;

    //Writing in the string
    cout<<"\n--------------------------------"<<endl;
    ostringstream oss{};
    oss<<setw(10)<<left<<name<<setw(5)<<num<<setw(10)<<total<<endl;
    cout<<oss.str()<<endl;


    cout<<"\n--- Data validation -----------------------------"<<endl;
    int value{};
    string entry{};
    bool done=false;
    do{
        cout<<"Please enter an integer:";
        cin>>entry;
        istringstream validator{entry};
        if(validator>>value){
            done=true;
        }
        else{
            cout<<"Sorry,that's not an integer"<<endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }while(!done);

    cout<<"You entered the integer:"<<value<<endl;
    cout<<endl;
    return 0;
}