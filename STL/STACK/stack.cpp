#include<iostream>
using namespace std;
int stack[5],top=-1;

void push(int x){
	if(top==4){
		cout<<"Overflow"<<endl;
	}
	else{+
	 
		top++;
		stack[top]=x;
	}
}

void pop(){
	if(top==-1){
		cout<<"underflow"<<endl;
	}
	else{
		top--;
	}
}

void display(){
	if(top==-1){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<endl;
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<endl;
		}
		cout<<endl;
	}
}

void size(){
	cout<<(top+1)<<endl;
}

void Top(){
	if(top==-1){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<stack[top]<<endl;
	}
}

int main(){
	while(1){
		int ch;
		cout<<"Enter choice: ";
		cin>>ch;
		if(ch==1){
			int x;
			cout<<"Enter number: ";
			cin>>x;
			push(x);
		}
		else if(ch==2){
			pop();
		}
		else if(ch==3){
			size();
		}
		else if(ch==4){
			Top();
		}
		else if(ch==5){
			display();
		}
		else{
			break;
		}
	}
}
