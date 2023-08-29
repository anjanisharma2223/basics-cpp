#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int x)
	{
		this->data=x;
		this->next=NULL;
	}
};

Node* InsertAtHead(Node* head,int x)
{
	Node* temp=new Node(x);
	if(head==NULL)
	{
		return temp;
	}
	temp->next=head;
	return temp;
}
Node* InsertAtTail(Node* head,int x)
{
	Node* temp=new Node(x);
	if(head==NULL)
	{
		return temp;
	}
	Node* cur=head;
	while(cur->next!=NULL)
	{
		cur=cur->next;
	}
	cur->next=temp;
	return head;
}

void print(Node* head)
{
	Node* temp=head;
	while(temp!=NULL)
	{
		if(temp->next==NULL)
		{
			cout<<temp->data<<endl;
		}
		else
		{
			cout<<temp->data<<"->";
		}
		temp=temp->next;
	}
}

int main(){
	
	Node* head = NULL;
	head=InsertAtHead(head,5);//5
	head=InsertAtTail(head,6);//5 6
	head=InsertAtHead(head,10);//10 5 6
	head=InsertAtTail(head,9);//10 5 6 9
	print(head);
	return 0;
}
