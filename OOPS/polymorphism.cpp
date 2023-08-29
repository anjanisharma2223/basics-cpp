#include<bits/stdc++.h>
using namespace std;

class Parent{
	public:
		virtual void fun(){  // dynamic binding 
			cout<<"Name of class is parent"<<endl;
		}
};

class child: public Parent{
	public:
		void fun(){
			cout<<"Name of class is child"<<endl;
		}
};
int main()
{
	child c;
	Parent *p = &c;
	p->fun();   // static binding parent class k fun k sath
}
