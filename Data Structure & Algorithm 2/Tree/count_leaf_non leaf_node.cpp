#include<iostream>
#include<stdlib.h>
#define MAX 100
using namespace std;

typedef struct node
{
   int data;
   struct node *left,*right;
}NODE;

struct stack
{
	struct node *data[MAX];
	int top;
}s;

void init()
{
   s.top=-1;
}

int isempty()
{
	if(s.top==-1)
	   return 1;
	else
	   return 0;
}
int isfull()
{
	if(s.top==MAX-1)
	   return 1;
	else
	  return 0;
}
void push(struct node *temp)
{
	if(isfull())
	   cout<<"stack is full";
	else
	{
		s.top++;
		s.data[s.top]=temp;
	}
}
struct node *pop()
{
	struct node *temp;
	if(isempty())
	   cout<<"stack is underflow";
	else
	{
		temp=s.data[s.top];
		s.top--;
	}
  return temp;
}
NODE * create(NODE *root)
{
   int i,n;
   NODE *temp,*parent,*newnode;
   cout<<"Enter limit:";
   cin>>n;
   for(i=1;i<=n;i++)
   {
      newnode=(NODE*)malloc(sizeof(NODE));
      cout<<"Enter value:";
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

void disp_leaf(NODE*root)
{
	int count=0;
	NODE*temp=root;
	while(temp!=NULL)
	{
		push(temp);
		temp=temp->left;
	}
	while(!isempty())
	{
		temp=pop();
		if(temp->left==NULL && temp->right==NULL)
		{
			cout<<"\t"<<temp->data;
			count++;
		}
		temp=temp->right;
		while(temp!=NULL)
		{
			push(temp);
			temp=temp->left;
		}
	}
	cout<<"\n\n total leaf node = "<<count;
}
void disp_Non_leaf(NODE*root)
{
	int count=0;
	NODE*temp=root;
	while(temp!=NULL)
	{
		push(temp);
		temp=temp->left;
	}
	while(!isempty())
	{
		temp=pop();
		if(temp->left==NULL || temp->right==NULL)
		{
			cout<<"\t"<<temp->data;
			count++;
		}
		temp=temp->right;
		while(temp!=NULL)
		{
			push(temp);
			temp=temp->left;
		}
	}
	cout<<"\n\n total Non leaf node = "<<count;
}
int main()
{
   NODE *root=NULL;
   init();
   root=create(root);
   cout<<"\nLeaf Node Display:";
   disp_leaf(root);
   cout<<"\n\n Non Leaf Node Display:";
   disp_Non_leaf(root);
}
