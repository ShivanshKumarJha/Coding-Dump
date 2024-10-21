#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector <int> v1;
    vector <int> v2;

    v1.push_back(10);
    v1.push_back(20);
    cout<<v1.at(0)<<endl;
    cout<<v1.at(1)<<endl;
    cout<<v1.size()<<endl;
    
    v2.push_back(100);
    v2.push_back(200);
    cout<<v2.at(0)<<endl;
    cout<<v2.at(1)<<endl;
    cout<<v2.size()<<endl;

    cout<<endl<<"Inserting the 1d vector in 2d array"<<endl;
    vector <vector<int>> vector_2d;
    vector_2d.push_back(v1);
    vector_2d.push_back(v2);

    cout<<endl<<"Printing the elements of 2d vector using array method"<<endl;
    cout<<vector_2d[0][0]<<" ";
    cout<<vector_2d[0][1]<<" ";
    cout<<vector_2d[1][0]<<" ";
    cout<<vector_2d[1][1]<<" "<<endl;

    cout<<endl<<"Printing the elements of 2d array using at function"<<endl;
    cout<<vector_2d.at(0).at(0)<<" ";
    cout<<vector_2d.at(0).at(1)<<" ";
    cout<<vector_2d.at(1).at(0)<<" ";
    cout<<vector_2d.at(1).at(1)<<" "<<endl;

    v1.at(0)=1000;
    
    cout<<endl<<"After changing the one element of vector v1 2d vector remains same"<<endl;
    cout<<vector_2d[0][0]<<" ";
    cout<<vector_2d[0][1]<<" ";
    cout<<vector_2d[1][0]<<" ";
    cout<<vector_2d[1][1]<<" "<<endl;

    cout<<endl<<"After changing the one element of vector v1,the contents of vector v1 changed"<<endl;
    cout<<v1.at(0)<<endl;
    cout<<v1.at(1)<<endl;
    return 0;
}