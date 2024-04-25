#include<iostream> 
#include<stdlib.h> 
using namespace std;
struct node 
{ 
 	int data, priority; 
 	struct node *next; 
}*start; 
int main() 
{ 
 	int data, pr; 
 	char ch; 
 	do 
 	{ 
 		cout<<"\nEnter element and its priority :: "; 
 		cin>>data>>pr; 
 		struct node *temp, *t; 
 		temp = (struct node *)malloc(sizeof(struct node)); 
 		temp->data=data; 
 		temp->priority=pr; 
 		temp->next=NULL; 
 		if(start==NULL) 
 		start = temp; 
 		else if(start->priority>pr) 
 		{ 
 			temp->next=start; 
 			start=temp; 
 		} 
 		else 
 		{ 
 			t=start; 
 			while(t->next!=NULL && (t->next)->priority<=pr )
 				t=t->next; 
 			temp->next=t->next; 
 			t->next=temp; 
 		} 
		cout<<"\nDo you want to insert more elements?";
 		scanf(" %c",&ch); 
	}while(ch=='y'||ch=='Y'); 
 	cout<<"\n Elements in Circular Queue\n"; 
 	struct node *temp1 = start; 
 	while(temp1!=NULL) 
 	{ 
 		cout<<"\nData = "<<temp1->data<<"\nPriority =  "<<temp1->priority; 
 		temp1=temp1->next; 
 	} 
 	return 0; 
}
