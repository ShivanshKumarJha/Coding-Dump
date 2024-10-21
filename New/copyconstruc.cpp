#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(string name_val="None",int health_val=0,int xp_val=0);
    //Copy Constructor
    Player(const Player &source);
    ~Player(){cout<<"Destructor called for:"<<name<<endl;}
};

Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout<<"Three-args constructor for "<<name<<endl;
    }

Player::Player(const Player &source)
    :name{source.name},health{source.health},xp{source.xp}{
        cout<<"Copy Constructor - made copy of:"<<source.name<<endl;
    }

void display_player(Player p){
    cout<<"Name:"<<p.get_name()<<endl;
    cout<<"Health:"<<p.get_health()<<endl;
    cout<<"Xp:"<<p.get_xp()<<endl;
}

int main(){
    Player empty;
    display_player(empty);
    Player frank("Frank");
    display_player(frank);
    Player villain("Villain",100,55);
    display_player(villain);
    Player hero("Hero",25);
    display_player(hero);
    Player copy(hero);
    display_player(copy);
    return 0;
}