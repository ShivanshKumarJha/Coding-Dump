#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    Player(string name_val="None",int health=0,int xp=0);

    string get_name() const{return name;}

    int get_health() const{return health;}

    int get_xp() const{return xp;}
};

Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{}

int main(){
    const Player p("Shivansh");
    cout<<p.get_health()<<endl;
    return 0;
}