#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int x){
		data=x;
		left = right = NULL;
	}
};

int c = 0;

Node* push(Node* &root,int x){
	Node* temp = new Node(x);
	if(root==NULL){
		return temp;
	}
	if(root->data > x){
		root->left = push(root->left,x);
		return root;
	}
	if(root->data <= x){
		root->right = push(root->right,x);
		return root;
	}
}

bool find(Node* root,int data){
	if(root==NULL) return false;
	if(root->data==data){
		return true;
	}
	if(root->data <= data){
		return find(root->right,data);
	}
	if(root->data > data){
		return find(root->left,data);
	}
}

void preorder(Node* root){
	if(root==NULL){
		return;
	}
	cout<<(root->data)<<' ';
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root){
	if(root==NULL) return;
	inorder(root->left);
	cout<<(root->data)<<' ';
	inorder(root->right);
}

int search(int inorder[],int ele,int st,int en){
	for(int i=st;i<=en;i++){
		if(inorder[i]==ele) return i;
	}
	return -1;
}

Node* buildTree(int preorder[],int inorder[],int st,int en){
	if(en<st){
		c--;
		return NULL;
	}
	Node* temp = new Node(preorder[c]);
	int ind = search(inorder,preorder[c],st,en);
	c++;
	temp->left = buildTree(preorder,inorder,st,ind-1);
	c++;
	temp->right = buildTree(preorder,inorder,ind+1,en);
	return temp;
}


int main(){
	Node* root = NULL;
	int preorder[] = {16,10,6,15,20,18,22};
	int inorder[] = {6,10,15,16,18,20,22};
	root = buildTree(preorder,inorder,0,6);
//	root = push(root,16);
//	root = push(root,10);
//	root = push(root,20);
//	root = push(root,6);
//	root = push(root,15);
//	root = push(root,18);
//	root = push(root,22);
//	if(find(root,19)){
//		cout<<"Found"<<endl;
//	}
//	else{
//		cout<<"Not Found"<<endl;
//	}
	preorder(root);
	cout<<endl;
	inorder(root);
	return 0;
}
