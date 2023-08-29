#include<iostream>
#include<queue>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x){
		data=x;
		left=right=NULL;
	}
};

void preorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<(root->data);
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<(root->data);
	inorder(root->right);
}

void postorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<(root->data);
}

int main(){
	Node* root=NULL;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(6);
	root->right->right=new Node(7);
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	
	
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		int size=q.size();
		for(int i=0;i<size;i++)
		{
			Node* temp=q.front();
			q.pop();
			cout<<temp->data<<' ';
			if(temp->left!=NULL)
			{
				q.push(temp->left);
			}
			if(temp->right!=NULL)
			{
				q.push(temp->right);
			}
		}
		cout<<endl;
	}
	return 0;
}
