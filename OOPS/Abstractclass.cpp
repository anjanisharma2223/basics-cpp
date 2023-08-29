#include<iostream>
using namespace std;

class Draw{  // Abstract class 
	public:
		virtual void draw() = 0;  //pure virtual function
};

class Rectangle: public Draw{
	public:
		void draw(){
			cout<<"Draw Rectangle"<<endl;
		}
};


class Circle: public Draw{
	public:
		void draw(){
			cout<<"Draw Circle"<<endl;
		}
};

int main(){
    Rectangle rect;
    Draw *p = &rect;
    p->draw();
	
	return 0;
}
