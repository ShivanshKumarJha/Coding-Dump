#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<string>
#include<vector>
#include<memory>
#include<set>
#include<utility>
using namespace std;

template<typename T,int N>
class Array{
    int size{N};
    T values[N];

    friend ostream &operator<<(ostream &os,const Array<T,N> &arr){
        os<<"[ ";
        for(const auto &val:arr.values){
            os<<val<<" ";
        }
        os<<"]"<<endl;
        return os;
    }

public:
    Array()=default;
    Array(T init_value){
        for(auto &item:values){
            item=init_value;
        }
    }

    void fill(T val){
        for(auto &item:values){
            item=val;
        }
    }

    int get_size() const{
        return size;
    }

    T &operator[](int index){
        return values[index];
    }

};

int main(){
    Array<int,5> nums;
    cout<<"The size of the nums is:"<<nums.get_size()<<endl;
    cout<<nums<<endl;

    nums.fill(0);
    cout<<"The size of the nums is:"<<nums.get_size()<<endl;
    cout<<nums<<endl;

    nums.fill(10);
    cout<<nums<<endl;

    nums[0]=1000;
    nums[1]=100;
    cout<<nums<<endl;

    Array<int,100> nums2{1};
    cout<<"The size of the nums is:"<<nums.get_size()<<endl;
    cout<<nums<<endl;

    Array<string,10> strings(string{"Shivansh"});
    cout<<"The size of the strings is:"<<strings.get_size()<<endl;
    cout<<strings<<endl;

    strings[0]=string{"Ravi"};
    cout<<strings<<endl;

    return 0;
}