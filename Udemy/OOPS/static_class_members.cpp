#include<bits/stdc++.h>
using namespace std;

class Player{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
    
public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name_val="None",int health_val=0,int xp_val=0);
    Player(const Player &source);
    ~Player();
     static int get_num_players(); 
};

int Player::num_players={0};
Player::Player(std::string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
    ++num_players;
}

Player::Player(const Player &source)
    :Player{source.name,source.health,source.xp}{
}
Player::~Player(){
    --num_players;
}

int Player::get_num_players(){
    return num_players;
}

void display_active_players(){
    cout<<"Active Players are: "<<Player::get_num_players()<<endl;
}

int main(){
    display_active_players();
    Player Hero{"Hero"};
    display_active_players();
    {
        Player Shivansh{"Shivansh"};
        display_active_players();
    }
    display_active_players();
    Player *enemy=new Player("Enemy",100,100);
    display_active_players();
    delete enemy;
    display_active_players();
    return 0;   
    return 0;
}