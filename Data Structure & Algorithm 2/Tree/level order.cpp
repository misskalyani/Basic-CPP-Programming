#include<iostream>
#include<stdlib.h>
#define MAX 20
using namespace std;
typedef struct node
{
	int data;
	struct node *left,*right;
}NODE;
struct queue 
{
	NODE *data[MAX];
	int front,rear;
}q;
void initq()
{
	q.front=q.rear=-1;	
}
void addq(NODE*root)
{
	q.data[++q.rear]=root;
}
NODE*delq()
{
	return (q.data[++q.front]);
}
int isempty()
{
	return(q.front==q.rear);
}
int isfull()
{
	return(q.rear==MAX-1);
}
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
		printf("%d\t",temp->data);
		inorder(temp->right);
	}
}
void preorder(NODE *root)
{
	NODE *temp=root;
	if(temp!=NULL)
	{
		cout<<temp->data<<"\t";
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
		cout<<temp->data<<"\t";
	}
}

void levelorder(NODE *root)
{
	int level=0;
	NODE *temp;
	initq();
	addq(root);
	addq(NULL);
	cout<<"\nLevel =  "<<level;
	while(!isempty())
	{
		temp=delq();
		if(temp==NULL)
		{
			level++;
			if(!isempty())
			{
				addq(NULL);
				cout<<"\nLevel =  "<<level;
			}
		}
		else 
		{
			cout<<"\n"<<temp->data<<"\t";
			if(temp->left!=NULL)
				addq(temp->left);
			if(temp->right!=NULL)
				addq(temp->right);	
		}
	}
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
	cout<<"\n\nLEVELWISE ORDER ::";
	levelorder(root);
	
}
