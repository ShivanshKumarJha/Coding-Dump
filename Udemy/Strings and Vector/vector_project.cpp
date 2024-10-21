#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout<<"Enter the number of tries"<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Number of values you want to enter in the vector"<<endl;
        cin>>n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin>>v.at(i);
        }
        cout<<"1.Add an element at the end of the vector"<<endl;
        cout<<"2.Sorting the vector in ascending order"<<endl;
        cout<<"3.Reverse the vector"<<endl;
        cout<<"4.Print the size of the vector"<<endl;
        cout<<"5.Printing the content of the vector"<<endl;

        int choice;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
            cout<<"The original vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            int n1;
            cout<<endl;
            cout<<"Enter the element you want to add in the vector"<<endl;
            cin>>n1;
            v.push_back(n1);
            cout<<"The new vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            break;

            case 2:
            cout<<"The original vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            sort(v.begin(),v.end());
            cout<<"The sorted vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            break;

            case 3:
            cout<<"The original vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            reverse(v.begin(),v.end());
            cout<<"The reversed vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            break;

            case 4:
            cout<<"The size of the vector is "<<v.size()<<endl;
            cout<<endl;
            break;

            case 5:
            cout<<"The vector is:"<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v.at(i)<<" ";
            }
            cout<<endl;
            break;
        }
    }
    return 0;
}