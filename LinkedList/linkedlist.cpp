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

Node* InsertAtHead(Node* head,int x){
	Node* temp = new Node(x);
	if(head==NULL) return temp;
	temp->next = head;
	return temp;
}

Node* InsertAtTail(Node* head,int x){
	Node* temp = new Node(x);
	if(head==NULL) return temp;
	Node* curr = head;
	while(curr->next!=NULL){
		curr=curr->next;
	}
	curr->next = temp;
	return head;
}

void display(Node* head){
	Node* curr = head;
	while(curr!=NULL){
		if(curr->next==NULL){
			cout<<curr->data<<endl;
		}
		else{
			cout<<curr->data<<"->";
		}
		curr = curr->next;
	}
}

Node* InsertAtAny(Node* head,int x,int pos){
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
		return head;
	}
	temp->next = curr->next;
	curr->next = temp;
	return head;
}

Node* deleteHead(Node* head){
	if(head==NULL) return NULL;
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node* temp = head;
	head = head->next;
	delete temp;
	return head;
}

Node* deleteEnd(Node* head){
	if(head==NULL) return NULL;
	if(head->next==NULL){
		delete head;
		return NULL;
	}
	Node* curr = head;
	while(curr->next->next!=NULL){
		curr=curr->next;
	}
	Node* temp = curr->next;
	curr->next = NULL;
	delete temp;
	return head;
}

Node* deleteAny(Node* head,int pos){
	if(pos==0){
		return deleteHead(head);
	}
	Node* curr = head;
	int c=1;
	while(curr->next!=NULL && c!=pos){
		curr=curr->next;
	}
	if(curr->next==NULL){
		return head;
	}
	Node* temp = curr->next;
	curr->next = curr->next->next;
	delete temp;
	return head;
}

int main(){
	Node* head = NULL;
	head = InsertAtHead(head,5); //5
	head = InsertAtHead(head,7); // 7 5
	head = InsertAtHead(head,6);// 6 7 5
	head = InsertAtTail(head,10);// 6 7 5 10
	head = InsertAtAny(head,15,3); // 6 7 5 15 10
	head = deleteHead(head); // 7 5 15 10
	head = deleteEnd(head); //7 5 15
	head = deleteAny(head,1); // 7 15
	display(head);  
	return 0;
}
