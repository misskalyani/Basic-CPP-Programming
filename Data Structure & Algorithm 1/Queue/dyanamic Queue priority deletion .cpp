#include<iostream> 
#include<stdlib.h> 
using namespace std;
void insert(); 
void del(); 
void display(); 
struct node 
{ 
 	int data, priority; 
 	struct node *next; 
}*start; 
int main() 
{ 
 	int ch; 
 	while(1) 
 	{ 
 		cout<<"\n1.Insertion \n2.Deletion\n3.Display \n4.Exit:\n"; 
 		cout<<"\nEnter Choice :: ";
 		cin>>ch; 
 		switch(ch) 
 		{ 
 			case 1: 
 					insert(); 
 					break; 
 			case 2: 
 					del(); 
 					break; 
 			case 3: 
 					display(); 
 					break; 
 			case 4: 
 					exit(0); 
 			default: 
 					cout<<"\nWrong Choice!!"; 
 		} 
 	} 
 	return 0; 
} 
void insert() 
{ 
 	int data, pr; 
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
} 
void del() 
{ 
 	if(start!=NULL) 
 	{ 
 		cout<<"\nRemoved Element :: "<<start->data; 
 		start = start->next; 
 	} 
 	else 
 		cout<<"\nQueue is Empty"; 
} 
void display() 
{ 
 	cout<<"\n**** Elements in Circular Queue*****\n"; 
 	struct node *temp1 = start; 
 	while(temp1!=NULL) 
 	{ 
 		cout<<"\nData = "<<temp1->data<<"Priority = "<<temp1->priority; 
 		temp1=temp1->next; 
	} 
} 
