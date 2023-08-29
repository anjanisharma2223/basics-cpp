#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int x){
		data=x;
		prev = next = NULL;
	}
};

void InsertAtHead(Node* &head,int x){
	Node* temp = new Node(x);
	if(head==NULL){
		head = temp;
		temp->next = head;
		temp->prev = head;
		return;
	}
	temp->next = head;
	temp->prev = head->prev;
	head->prev->next = temp;
	head->prev = temp;
	head = temp;
}

void InsertAtTail(Node* &head,int x){
	Node* temp = new Node(x);
	if(head==NULL){
		head = temp;
		temp->next = head;
		temp->prev = head;
		return;
	}
	temp->next = head;
	temp->prev = head->prev;
	head->prev->next = temp;
	head->prev = temp;
}

void display(Node* &head){
	Node* curr = head;
	do{
		if(curr->next==head){
			cout<<curr->data<<endl;
		}
		else{
			cout<<curr->data<<"->";
		}
		curr = curr->next;
	} while(curr!=head);
}

void InsertAtAny(Node* &head,int x,int pos){
	if(pos==0){
		return InsertAtHead(head,x);
	}
	Node* temp = new Node(x);
	Node* curr = head;
	int c=1;
	while(curr->next!=NULL && c!=pos){
		curr = curr->next;
		c++;
	}
	if(c!=pos){
		return;
	}
	temp->next = curr->next;
	curr->next->prev = temp;
	temp->prev = curr;
	curr->next = temp;
}

void deleteHead(Node* &head){
	if(head==NULL) return;
	if(head->next==NULL){
		delete head;
		head = NULL;
		return;
	}
	Node* temp = head;
	head = head->next;
	head->prev = temp->prev;
	temp->prev->next = head;
	delete temp;
}

void deleteEnd(Node* &head){
	if(head==NULL) return;
	if(head->next==NULL){
		delete head;
		return;
	}
	Node* temp = head->prev;
	temp->prev->next = head;
	head->prev = temp->prev;
	delete temp;
}

void deleteAny(Node* &head,int pos){
	if(pos==0){
		deleteHead(head);
	}
	Node* curr = head;
	int c=1;
	while(curr->next!=NULL && c!=pos){
		curr=curr->next;
	}
	if(c!=pos){
		return;
	}
	Node* temp = curr->next;
	temp->next->prev = curr;
	curr->next = curr->next->next;
	delete temp;
}

int main(){
	Node* head = NULL;
	InsertAtHead(head,5); //5
	InsertAtHead(head,7); // 7 5
	InsertAtHead(head,6);// 6 7 5
	InsertAtTail(head,10);// 6 7 5 10
	InsertAtAny(head,15,3); // 6 7 5 15 10
	deleteHead(head); // 7 5 15 10
	deleteEnd(head); //7 5 15
	deleteAny(head,1); // 7 15
	display(head);  
	return 0;
}
