#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m={{'+',1},{'-',1},{'*',2},{'/',2},{'^',3}};

void printPostfix(string input){
    if(input.size()==0){return;}
    stack<char> s;
    for(char c:input){
        if(isalpha(c)){cout<<c;}
        else if(c=='('){s.push(c);}
        else if(c==')'){
            while(!s.empty() && s.top()!='('){cout<<s.top();s.pop();}
            s.pop();
        }
        else{
            // if(s.empty()){s.push(c);}
            // else{
            //     if(m[c]>m[s.top()]){s.push(c);}
            //     else if(m[c]<m[s.top()]){
            //         while(!s.empty() && m[c]<=m[s.top()]){cout<<s.top();s.pop();}
            //         s.push(c);
            //     }
            //     else{
            //         if(m[c]==3){s.push(c);}
            //         else{cout<<s.top();s.pop();s.push(c);}
            //     }
            // }
            while(!s.empty() && s.top()!='(' && m[c]<=m[s.top()]){
                cout<<s.top();
                s.pop();
            }
            s.push(c);
        }
    }
    while(!s.empty()){cout<<s.top();s.pop();}
}

double evaluatePostfix(string input){
    if(input.size()==0){return -1;}
    stack<double> s;

    int i=0;
    for(char c:input){
        if(isdigit(c)){s.push(c-'0');}
        else{
            double operand2=s.top();
            s.pop();
            double operand1=s.top();
            s.pop();

            double result=0;
            switch(c){
                case '+':
                    result=operand1+operand2;
                    break;
                case '-':
                    result=operand1-operand2;
                    break;
                case '*':
                    result=operand1*operand2;
                    break;
                case '/':
                    result=operand1/operand2;
                    break;
                case '^':
                    result=pow(operand1,operand2);
                    break;
            }
            s.push(result);
        }
        
    } 
    return s.top();
}

int main(){
    string expression;
    cin>>expression;
    printPostfix(expression);
    cout<<evaluatePostfix(expression)<<endl;
    return 0;
}