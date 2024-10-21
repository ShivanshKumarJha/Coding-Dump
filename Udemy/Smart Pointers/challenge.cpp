#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<memory>

using namespace std;
class Test{
private:
    int data;
public:
    Test():data{0}{cout<<"\tTest Constructor("<<data<<")"<<endl;}
    Test(int data):data{data}{cout<<"\tTest Constructor("<<data<<")"<<endl;}
    int get_data() const {return data;}
    ~Test(){cout<<"\tTest Destructor("<<data<<")"<<endl;}
};

unique_ptr<vector<shared_ptr<Test>>>make(){
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>&vec,int num){
    int temp;
    for(int i=1;i<=num;++i){
        cout<<"Enter data point["<<i<<"]:";
        cin>>temp;
        // shared_ptr<Temp>ptr=make_shared<Test>(temp);
        // vec.push_back(ptr);
        vec.push_back(make_shared<Test>(temp));
    }

}

void display(vector<shared_ptr<Test>>&vec){
    cout<<"\nDisplaying Vector Data"<<endl;
    cout<<"============================"<<endl;
    for(const auto &ptr:vec){
        cout<<ptr->get_data()<<endl;
    }
    cout<<"============================"<<endl;
}

int main(){
    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr=make();
    cout<<"How many data points do you want to enter:";
    int num;
    cin>>num;
    fill(*vec_ptr,num);
    display(*vec_ptr);
    return 0;
}