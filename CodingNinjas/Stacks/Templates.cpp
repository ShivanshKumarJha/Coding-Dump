#include<bits/stdc++.h>
using namespace std;

template<typename T,typename V>

class Pair{
	T x;
	V y;

public:
	void setX(T x){this->x=x;}
	T getX(){return x;}
	void setY(V y){this->y=y;}
	V getY(){return y;}
};


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	Pair<int,int> p1;
	p1.setX(10);
	p1.setY(20);

	Pair<Pair<int,int>,int> p2;
	p2.setY(30);
	p2.setX(p1);

	cout<<p2.getY()<<endl;
	cout<<p2.getX().getX()<<endl;
	cout<<p2.getX().getY()<<endl;
	return 0;
}