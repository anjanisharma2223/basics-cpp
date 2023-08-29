#include<iostream>
using namespace std;

class Hero{
	int health;
	string name;
	int attack;
	public:
		Hero(){
			health=100;
			attack = 30;
			name = "XXXX";
		}
		Hero(string name,int health,int attack){
			this->attack  = attack;
			this->health = health;
			this->name = name;
		}
		Hero(Hero &h1){
			name = h1.name;
			health = h1.health;
			attack = h1.attack;
		}
		void input(){
			cout<<"Enter name,health and attack: ";
			cin>>name>>health>>attack;
		}
		void output(){
			cout<<"Name: "<<name<<endl;
			cout<<"health: "<<health<<endl;
			cout<<"attack: "<<attack<<endl;
		}
};

int main(){
	Hero h1;
//	h1.input();
	h1.output();
	Hero h2("Pankaj",90,23);
	Hero h3(h2);
	h2.output();
	h3.output();
}
