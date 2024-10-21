#include<bits/stdc++.h>
using namespace std;

class Player{
    private:
    string name;
    int health;
    int xp;

    public:
    //Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val,int health_val,int xp_val);
};

Player::Player()
    :Player("None",0,0){
        cout<<"No-args Constructor"<<endl;
    }

Player::Player(string name_val)
    :Player(name_val,0,0){
        cout<<"One-args Constructor"<<endl;
    }

Player::Player(string name_val,int health_val,int xp_val)
    :name{name_val},health{health_val},xp{xp_val}{
        cout<<"Three-args Constructor"<<endl;
    }

int main(){
    Player empty;
    Player frank("Frank");
    Player villain("Villain",100,55);
    return 0;
}