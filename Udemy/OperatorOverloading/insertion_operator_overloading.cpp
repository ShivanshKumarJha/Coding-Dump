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
    Mystring(Mystring &&source);

    Mystring &operator=(const Mystring &rhs);     //Copy Assignment

    Mystring &operator=(Mystring &&rhs);          //Move Assignment

    void display() const;
    
    int get_length() const;
    
    const char *get_str() const;

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
    
Mystring::Mystring(Mystring &&source)
    :str{source.str}{
    source.str=nullptr;
    cout<<"Move constructors - moving resources:"<<str<<endl;
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

Mystring &Mystring::operator=(Mystring &&rhs){
    cout<<"Move Assignment"<<endl;
    if(this==&rhs){
        return *this;
    }
    else{
        delete []this->str;
        str=rhs.str;
        rhs.str=nullptr; 
        return *this;
    }
}

void Mystring::display() const{
    cout<<str<<":"<<get_length()<<endl;
}

int Mystring::get_length() const{return strlen(str);}

const char *Mystring::get_str() const{return str;}

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
    Mystring larry{"Larry"};
    Mystring moe{"Moe"};
    Mystring curly;

    cout<<"Enter the third stooge first name:";    
    cin>>curly;

    cout<<"The three stooges are "<<larry<<","<<moe<<" and "<<curly<<endl;

    cout<<"\nEnter the three stooges name seperated by a space:";
    cin>>larry>>moe>>curly;

    cout<<"The three stooges are "<<larry<<","<<moe<<" and "<<curly<<endl;
    return 0;
}