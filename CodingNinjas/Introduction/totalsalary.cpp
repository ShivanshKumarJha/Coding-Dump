#include<bits/stdc++.h>
using namespace std;

int main() {
	// Write your code here
	int bSalary;
    char grade;
    cin>>bSalary>>grade;
    double hra=0.2*bSalary;
    double da=0.5*bSalary;
    double pf=0.11*bSalary;
    int allow;
    
    if(grade=='A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    int totalSalary=round(bSalary+hra+da+allow-pf);
    cout<<totalSalary<<endl;
}
