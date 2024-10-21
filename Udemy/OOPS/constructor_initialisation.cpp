#include<bits/stdc++.h>
using namespace std;
class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    Player();
    Player(string name_val);
    Player(string name_val,int health,int xp);
    Player(const Player &source);
    ~Player();
};

Player::Player()    
    :name{"None"},health{0},xp{0}{
        cout<<"No-args constructor"<<endl;
    }

Player::Player(string name_val)
    :name{name_val},health{0},xp{0}{
        cout<<"One-arg constructor"<<endl;
    }

Player::Player(string name_val,int health,int xp)
    :name{name_val},health{health_val},xp{xp_val}{  
        cout<<"Three-args constructor"<<endl;
    }

//DELEGATING CONSTRUCTORS
Player::Player()
    :Player{"None",0,0}{
        cout<<"No-args constructor"<<endl;
    }

Player::Player(string name_val)
    :Player{name_val,0,0}{
        cout<<"One-arg constructor"<<endl;
    }

Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout<<"Three-args constructor"<<endl;
    }

//SHALLOW COPY-Copy Constructor
Player::Player(const Player &source)
    :name{source.name},
    health{source.health};
    xp{source.xp}{
    };


int main(){
    Player empty;
    Player Shivansh("Shivansh");
    Player Prateek("Prateek",100,65);   
    return 0;
}