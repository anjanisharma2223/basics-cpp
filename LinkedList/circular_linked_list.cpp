#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node(int x){
		data=x;
		next = NULL;
	}
};

void InsertAtHead(Node* &head,int x){
	Node* temp = new Node(x);
	if(head==NULL){
		temp->next = temp;
		head= temp;
		return;
	}
	Node* curr = head;
	while(curr->next!=head){
		curr = curr->next;
	}
	curr->next = temp;
	temp->next = head;
	head = temp;
}

void InsertAtTail(Node* &head,int x){
	Node* temp = new Node(x);
	if(head==NULL){
		temp->next = temp;
		head = temp;
		return;
	}
	else{
		Node* curr = head;
		while(curr->next!=head){
			curr = curr->next;
		}
		curr->next = temp;
		temp->next = head;
	}
}

void InsertAtAny(Node* &head,int x,int pos){
	if(pos==0){
		InsertAtHead(head,x);
	}
	else{
		Node* temp = new Node(x);
		Node* curr = head;
		int c=1;
		while(curr->next!=head && c!=pos){
			curr=curr->next;
			c++;
		}
		if(c!=pos){
			return;
		}
		temp->next = curr->next;
		curr->next = temp;
	}
}

void deleteHead(Node* &head){
	if(head==NULL){
		return;
	}
	if(head->next==head){
		head=NULL;
		return;
	}
	Node* curr = head;
	while(curr->next!=head){
		curr=curr->next;
	}
	Node* temp = head;
	head = head->next;
	curr->next = head;
	delete temp;
}

void deleteEnd(Node* &head){
	if(head==NULL){
		return;
	}
	if(head->next==head){
		head=NULL;
		return;
	}
	Node* curr = head;
	while(curr->next->next!=head){
		curr = curr->next;
	}
	Node* temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
}

void deleteAny(Node* &head,int pos){
	if(pos==0){
		deleteHead(head);
		return;
	}
	int c=1;
	Node* curr = head;
	while(curr->next->next!=head && c!=pos){
		curr= curr->next;
	}
	if(c!=pos){
		return;
	}
	Node* temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
}

void display(Node* head){
	if(head==NULL){
		cout<<"Linked List is empty"<<endl;
		return;
	}
	Node* curr = head;
	do{
		if(curr->next==head){
			cout<<(curr->data)<<endl;
			return;
		}
		cout<<(curr->data)<<"->";
		curr = curr->next;
	}while(curr!=head);
}

int main(){
	Node* head = NULL;
	InsertAtHead(head,5); //5
	InsertAtHead(head,7); // 7 5
	InsertAtHead(head,6);// 6 7 5
	InsertAtTail(head,10);
	InsertAtAny(head,15,3);
	deleteHead(head); // 7 5 15 10
	deleteEnd(head); //7 5 15
	deleteAny(head,1); // 7 15
	display(head); 
}
