
#include<iostream>
#include<stdlib.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *left,*right;
}NODE;
NODE *create(NODE *root)
{
	NODE *temp,*parent,*newnode;
	int i,n;
	cout<<"Enter Limit::";
	cin>>n;
	for(i=0;i<n;i++)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		cout<<"\nEnter Value::";
		cin>>newnode->data;
		newnode->left=NULL;
		newnode->right=NULL;
		if(root==NULL)
		{
			root=newnode;
			continue;
		}
		temp=root;
		while(temp!=NULL)
		{
			parent=temp;
			if(newnode->data<=temp->data)
				temp=temp->left;
			else
				temp=temp->right;
		}
		if(newnode->data<=parent->data)
			parent->left=newnode;
		else
			parent->right=newnode;
	}
	return root;
}
void inorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		inorder(temp->left);
		cout<<"\t"<<temp->data;
		inorder(temp->right);
	}
}
void preorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		cout<<"\t"<<temp->data;
	    preorder(temp->left);
		preorder(temp->right);
	}
}
void postorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		postorder(temp->left);
		postorder(temp->right);
		cout<<"\t"<<temp->data;
	}
}

NODE *copytree(NODE *root)
{
	NODE *newnode;
	if(root!=NULL)
	{
		newnode=(NODE*)malloc(sizeof(NODE));
		newnode->data=root->data;
		newnode->left=copytree(root->left);
		newnode->right=copytree(root->right);
	}
	return newnode;
}
int main()
{
	NODE*root=NULL;
	root=create(root);
	cout<<"\nPreorder::";
	preorder(root);
	cout<<"\nInorder::";
	inorder(root);
	cout<<"\nPostorder::";
	postorder(root);
	cout<<"\n\nCOPY TREE::";
	root=copytree(root);
	cout<<"\n\nPreorder::";
	preorder(root);
	cout<<"\nInorder::";
	inorder(root);
	cout<<"\nPostorder::";
	postorder(root);
}

