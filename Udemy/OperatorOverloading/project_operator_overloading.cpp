#include<bits/stdc++.h>
using namespace std;

class Mystring
{
    friend ostream &operator<<(ostream &os,const Mystring &rhs);
    friend istream &operator>>(istream &in, Mystring &rhs);
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    Mystring &operator=(const Mystring &rhs);

    Mystring operator-();                          //Unary- Operator Overloading
    bool operator==(const Mystring &rhs) const;    //Equal To Operator
    bool operator!=(const Mystring &rhs) const;    //Not Equal To Operator
    bool operator<(const Mystring &rhs) const;     //Less Than Opeartor
    bool operator>(const Mystring &rhs) const;     //Greater Than Operator
    Mystring operator+(const Mystring &rhs) const; //Concatenation
    Mystring &operator+=(const Mystring &rhs);     //Add rhs to lhs
    Mystring operator*(int x) const;               //*= Operator
    Mystring &operator*=(int x);                   //*= Operator

    int get_length(){return strlen(str);}

    void display() const;

    ~Mystring();

};

Mystring::Mystring()
    :str{nullptr}{
        str=new char[1];
        *str='\0';
    }

Mystring::Mystring(const char *s)
    :str{nullptr}{
        if(s==nullptr){
            str=new char[1];
            *str='\0';
        }
        else{
            str=new char[strlen(s)+1];
            strcpy(str,s);
        }
    }

Mystring::Mystring(const Mystring &source)
    :str{nullptr}{
        str=new char[strlen(source.str)+1];
        strcpy(str,source.str);
    }

Mystring::~Mystring(){
    delete []str;
}

Mystring &Mystring::operator=(const Mystring &rhs){
    cout<<"Copy Assignment"<<endl;
    if(this==&rhs){
        return *this;
    }
    else{
        delete []this->str;
        str=new char [strlen(rhs.str)+1];
        strcpy(this->str,rhs.str); 
        return *this;
    }
}

Mystring Mystring::operator-(){
    char *buff=new char[strlen(this->str)+1];
    strcpy(buff,this->str);
    for(size_t i=0;i<strlen(buff);i++){
        buff[i]=tolower(buff[i]);
    }
    Mystring temp{buff};
    delete []buff;
    return temp;
}

bool Mystring::operator==(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)==0);
}

bool Mystring::operator!=(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)!=0);
}

bool Mystring::operator<(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)==-1);
}

bool Mystring::operator>(const Mystring &rhs) const{
    return (strcmp(str,rhs.str)==1);
}

Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff=new char[strlen(str)+strlen(rhs.str)+1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete []buff;
    return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs){
    *this= *this + rhs;
    return *this;
}

Mystring Mystring::operator*(int x) const{
    char *buff=new char[(strlen(str)*x)+1];
    strcpy(buff,str);
    for(size_t i=0;i<x-1;i++){
        strcat(buff,str);
    }
    Mystring temp{buff};
    delete []buff;
    return temp;
}

Mystring &Mystring::operator*=(int x){
    *this = *this * x;
    return *this;
}

ostream &operator<<(ostream &os,const Mystring &rhs){
    os<<rhs.str;           //Insertion Operator
    return os;
}

istream &operator>>(istream &in,Mystring &rhs){
    char *buff=new char[1000];
    in>>buff;             //Extraction Operator
    rhs=Mystring{buff};
    delete []buff;
    return in;
}

int main(){
    cout<<boolalpha;
    Mystring a{"Frank"};
    Mystring b{"Frank"};

    cout<<(a==b)<<endl;
    cout<<(a!=b)<<endl;

    b="george";
    cout<<(a==b)<<endl;   
    cout<<(a!=b)<<endl;   
    cout<<(a<b)<<endl;   
    cout<<(a>b)<<endl;

    Mystring s1{"frank"};
    s1=-s1;
    cout<<s1<<endl;

    s1=s1+"*****";
    cout<<s1<<endl;

    s1+="----";
    cout<<s1<<endl;
    return 0;
}