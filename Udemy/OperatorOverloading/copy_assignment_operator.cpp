#include<bits/stdc++.h>
using namespace std;

class Mystring
{
private:
    char *str;
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    
    Mystring &operator=(const Mystring &rhs);     //Copy Assignment
    
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

void Mystring::display() const{
    cout<<str<<":"<<get_length()<<endl;
}

int Mystring::get_length() const{return strlen(str);}

const char *Mystring::get_str() const{return str;}


int main(){
    Mystring a("Hello");
    Mystring b;
    b=a;
    b="This is a test";

    Mystring empty;
    Mystring larry("Larry");
    Mystring stooge(larry);
    Mystring stooges;

    empty=stooge;

    empty.display();
    larry.display();
    stooge.display();
    empty.display();

    stooges="Larry,Moe and Curly";
    stooges.display();

    vector<Mystring> stooges_vec;
    stooges_vec.push_back("Larry");
    stooges_vec.push_back("Moe");
    stooges_vec.push_back("Curly");

    cout<<"============Loop 1=================="<<endl;
    for(const Mystring &s:stooges_vec){
        s.display();
    }
    
    cout<<"============Loop 2=================="<<endl;
    for(Mystring &s:stooges_vec){
        s="Changed";
    }

    cout<<"============Loop 3=================="<<endl;
    for(const Mystring &s:stooges_vec){
        s.display();
    }

    return 0;
}