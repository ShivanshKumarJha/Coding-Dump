#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<cmath>
#include<algorithm>
#include<numeric>        //for adjacent algorithm used with container
#include<string>
#include<vector>
#include<set>
#include<map>
#include<list>
#include<memory>        //For Smart Pointers 
#include<cctype>
#include<utility>
using namespace std;

void display(array<int,5> &arr){
    cout<<"[ ";
    for(const auto &i:arr){
        cout<<i<<" ";
    }
    cout<<"]"<<endl;
}

void test1(){
    cout<<"\nTest1================================"<<endl;
    array<int,5> arr1 {1,2,3,4,5};
    array<int,5> arr2;

    display(arr1);
    display(arr2);

    arr2={10,20,30,40,50};

    display(arr1);
    display(arr2);

    cout<<"Size of the arr1 is: "<<arr1.size()<<endl;
    cout<<"Size of the arr2 is: "<<arr2.size()<<endl;

    arr1[0]=1000;
    arr1.at(1)=2000;
    display(arr1);

    cout<<"Front of arr2 is: "<<arr2.front()<<endl;
    cout<<"Back of arr2 is: "<<arr2.back()<<endl;
}

void test2(){
    cout<<"\nTest2================================"<<endl;
    array<int,5> arr1 {1,2,3,4,5};
    array<int,5> arr2 {10,20,30,40,50};

    display(arr1);
    display(arr2);
    
    arr1.fill(0);
    display(arr1);
    display(arr2);

    arr1.swap(arr2);
    display(arr1);
    display(arr2);
}

void test3(){
   cout<<"\nTest3================================"<<endl; 
   array <int,5> arr1{1,2,3,4,5};

   int *ptr=arr1.data();
   cout<<ptr<<endl;
   *ptr=1000;
   display(arr1); 
}

void test4(){
    cout<<"\nTest4================================"<<endl;
    array<int,5> arr1{2,1,4,5,3};
    display(arr1);

    sort(arr1.begin(),arr1.end());
    display(arr1);
}

void test5(){
    cout<<"\nTest5================================"<<endl;
    array<int,5> arr1{2,1,4,5,3};
    array<int,5>::iterator min_num=min_element(arr1.begin(),arr1.end());
    auto max_num=max_element(arr1.begin(),arr1.end());
    cout<<"min: "<<*min_num<<" ,max: "<<*max_num<<endl;
}

void test6(){
    cout<<"\nTest6================================"<<endl;
    array<int,5> arr1{2,1,3,3,5};
    //returns the first occurence of the two adjacent values
    auto adjacent=adjacent_find(arr1.begin(),arr1.end());
    if(adjacent!=arr1.end()){
        cout<<"Adjacent element found with value: "<<*adjacent<<endl;
    }
    else{
        cout<<"No adjacent elements found"<<endl;
    }
}

void test7(){
    cout<<"\nTest7================================"<<endl;
    array<int,5> arr1{1,2,3,4,5};

    int sum=accumulate(arr1.begin(),arr1.end(),0); //Starts adding from zero
    cout<<"Sum of the elements in arr1 is: "<<sum<<endl;
}

void test8(){
    cout<<"\nTest8================================"<<endl;
    array<int,10> arr1{1,2,3,1,2,3,3,3,3,3};

    int Count=count(arr1.begin(),arr1.end(),3);
    cout<<"Found 3: "<<Count<<" times"<<endl;
}

void test9(){
    cout<<"\nTest9================================"<<endl;
    array<int,10> arr1{1,2,3,50,60,70,80,200,300,400};
    //Find how many numbers are between 10 and 200

    int Count=count_if(arr1.begin(),arr1.end(),
                    [](int x){return x>10 && x<200;});
    cout<<"Found "<<Count<<" matches"<<endl;
}

int main(){
    test1();
    test2();
    test3();
    test4();
    test5();
    test6();
    test7();
    test8();
    test9();
    cout<<endl;
    return 0;
}