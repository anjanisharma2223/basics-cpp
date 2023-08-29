#include<iostream>
using namespace std;
int stack[5],top=-1;
void push(){
	int a;cout<<"Enter a number: ";cin>>a;
	if(top==4){
		cout<<"Overflow "<<endl;
	}
	else{
		top++;
		stack[top]=a;
	}
}
void pop(){
	if(top==-1){
		cout<<"Stack is empty "<<endl;
	}
	else{
		top--;
	}
}
void Top(){
	if(top==-1){
		cout<<"Stack is empty "<<endl;
	}
	else{
		cout<<stack[top]<<endl;
	}
}
void size(){
	if(top==-1){
		cout<<"Stack is empty "<<endl;
	}
	else{
		cout<<top+1<<endl;
	}
	
}
void display(){
	for(int i=top;i>=0;i--)
	{
		cout<<stack[i]<<endl;
	}
}
int main()
{
	while(1)
	{
		int ch;cout<<"Enter choice: ";cin>>ch;
		if(ch==1){
			push();
		}
		else if(ch==2){
			pop();
		}
		else if(ch==3){
			Top();
		}
		else if(ch==4){
			size();
		}
		else if(ch==5){
			display();
		}
		else{
			break;
		}
	}
}
