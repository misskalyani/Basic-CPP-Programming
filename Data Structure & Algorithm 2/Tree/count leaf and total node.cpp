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
int Count_total_nodes(NODE *root)
{
	static int count=0;
	NODE *temp=root;
	if(temp!=NULL)
	{
		count++;
		Count_total_nodes(temp->left);
		Count_total_nodes(temp->right);
	}
    return count;
}
int Count_leaf_nodes(NODE *root)
{
	static int count=0;
	NODE *temp=root;
	if(temp!=NULL)
	{
		if((temp->left==NULL)&&(temp->right==NULL))
			count++;
		Count_total_nodes(temp->left);
		Count_total_nodes(temp->right);
	}
	return count;
}
int main()
{
	NODE*root=NULL;
	root=create(root);
    cout<<"\nCount Total node = %d",Count_total_nodes(root);
	cout<<"\nCount Leaf Node = %d",Count_leaf_nodes(root);
}
