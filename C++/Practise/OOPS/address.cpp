#include<bits/stdc++.h>
using namespace std;
class Address{
    private:
    int houseNo;
    string streetName,cityName,stateName;
    int zipcode;

    public:
    Address(int houseNo,string streetName,string cityName,string stateName,int zipcode);
    void display();
};

Address::Address(int houseNo=100,string streetName="X",string cityName="Y",string stateName="Z",int zipcode=200)
    :houseNo{houseNo},streetName{streetName},cityName{cityName},stateName{stateName},zipcode{zipcode}{}

void Address::display(){
    cout<<houseNo<<" "<<streetName<<" "<<cityName<<" "<<stateName<<" "<<zipcode<<endl;
}

int main(){
    Address a1(100);
    a1.display();
    Address a2(101,"Lakkarpur","Faridabad");
    a2.display();
    Address a3(102,"Benipatti","Madhubani","Bihar",121003);
    a3.display();
    return 0;
}