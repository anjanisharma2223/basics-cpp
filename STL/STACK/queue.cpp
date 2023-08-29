#include<iostream>
using namespace std;

int queue[5],front=-1,rear=-1;

void enqueue(int x){
	if(rear==4){
		cout<<"queue is full"<<endl;
	}
	else if(front==-1){
		front = 0;
		rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}

void dequeue(){
	if(front==-1){
		cout<<"queue is empty"<<endl;
	}
	else if(front==rear){
		front = -1;
		rear=-1;
	}
	else{
		front++;
	}
}

void Front(){
	if(front==-1){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<queue[front]<<endl;
	}
}

void size(){
	cout<<(rear-front+1)<<endl;
}

void display(){
	if(front==-1){
		cout<<"queue is empty"<<endl;
	}
	else{
		cout<<endl;
		for(int i=front;i<=rear;i++){
			cout<<queue[i]<<' ';
		}
		cout<<endl;
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
			enqueue(x);
		}
		else if(ch==2){
			dequeue();
		}
		else if(ch==3){
			size();
		}
		else if(ch==4){
			Front();
		}
		else if(ch==5){
			display();
		}
		else{
			break;
		}
	}
}
