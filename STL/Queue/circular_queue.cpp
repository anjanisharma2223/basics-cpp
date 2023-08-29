#include<iostream>
using namespace std;
int queue[5],front=-1,rear=-1;

void push(int x){
	if(front==-1){
		front = 0;
		rear=0;
		queue[rear]=x;
	}
	else if((rear+1)%5 == front){
		cout<<"Overflow"<<endl;
	}
	else{
		rear = (rear+1)%5;
		queue[rear]=x;
	}
}

void pop(){
	if(front==-1){
		cout<<"Underflow"<<endl;
	}
	else if(front==rear){
		front = rear = -1;
	}
	else{
		front = (front+1)%5;
	}
}

void display(){
	if(front==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		for(int i=front;i!=rear; i = (i+1)%5){
			cout<<queue[i]<<' ';
		}
		cout<<queue[rear]<<endl;
	}
}

void Front(){
	if(front==-1){
		cout<<"Queue is empty"<<endl;
	}
	else{
		cout<<queue[front]<<endl;
	}
}

int main(){
	int ch;
	bool flag=0;
	while(1){
		cin>>ch;
		switch(ch){
			case 1:
				int x;
				cin>>x;
				push(x);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				Front();
				break;
			case 5:
				flag=1;
				break;
			default:
				cout<<"Enter valid input"<<endl;
		}
		if(flag==1) break;
	}
}
