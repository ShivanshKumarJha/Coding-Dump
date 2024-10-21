#include<bits/stdc++.h>
using namespace std;

unordered_map<char,int> m={{'(',0},{'+',1},{'-',1},{'*',2},{'/',2},{'^',3}};

string toPrefix(string input){
    stack<char> s;
    string prefix="";
    for(int i=input.size()-1;i>=0;i--){
        if(isalpha(input[i])){prefix+=input[i];}
        else if(input[i]==')'){s.push(input[i]);}
        else if(input[i]=='('){
            while(!s.empty() && s.top()!=')'){prefix+=s.top();s.pop();}     
            s.pop();            
        }
        else{
            while(!s.empty() && s.top()!='(' && m[input[i]]<m[s.top()]){
                prefix+=s.top();
                s.pop();
            }
            s.push(input[i]);
        }
    }
    while(!s.empty()){prefix+=s.top();s.pop();}
    reverse(prefix.begin(),prefix.end());
    return prefix;
}

double evaluatePrefix(string input){
    if(input.size()==0){return -1;}
    stack<double> s; 
    reverse(input.begin(),input.end());
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
    string output=toPrefix(expression);
    cout<<output<<endl;
    cout<<evaluatePrefix(expression)<<endl;
    return 0;
}
