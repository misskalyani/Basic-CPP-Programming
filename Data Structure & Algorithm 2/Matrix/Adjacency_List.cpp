#include<iostream>
#include<stdlib.h>
#include<String>
using namespace std;
struct node
{
	int data;
	struct node*next;
};
struct node *head[10];
void createlist(int a[10][10],int n)
{
	struct node *newnode,*temp;	
	int i,j;
	for(i=1;i<=n;i++)
	{
		head[i]=NULL;
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==1)
			{
				newnode=(struct node*)malloc(sizeof(struct node));
				newnode->data=j;
				newnode->next=NULL;
			
				if(head[i]==NULL)
				{
					head[i]=temp=newnode;
				}
				else
				{
					temp->next=newnode;
					temp=newnode;
				}
		   }
		}
	}
}
void disp(int n)
{
	struct node*temp;
		int i;
	for(i=1;i<=n;i++)
	{
		cout<<"\n Head"<<i<<"->=";
		for(temp=head[i];temp!=NULL;temp=temp->next)
		{
			cout<<temp->data<<"->";
		}
		cout<<"NULL";
	}
}
int main()
{
	int a[10][10],i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	cout<<"Enter graph in matrix format:\n ";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
				cin>>a[i][j];
			
		}
	}
	cout<<"graph in matrix format :\n";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			
				cout<<"\t"<<a[i][j];
			
		}
		cout<<" \n";
	}
	createlist(a,n);
	disp(n);
}
