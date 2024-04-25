#include <iostream> 
#include <stdlib.h> 
using namespace std;
void display(); 
struct node 
{ 
 	int data; 
 	struct node *next; 
}*head=NULL; 
int main(void) 
{ 
 	int num,n,i; 
 	char ch; 
 	struct node *q, *tmp; 
 	cout<<"Enter Limit::\n";
 	cin>>n;
 	for(i=0;i<n;i++)
 	{
 		tmp=(struct node*)malloc(sizeof(struct node)); 
 		cout<<"Enter element : "; 
 		cin>>num; 
 		tmp->data=num; 
 		tmp->next=NULL; 
 		if(head==NULL) 
 		head=tmp; 
		else 
 		{ 
 			q=head; 
 			while(q->next!=NULL) 
 			q=q->next; 
 			q->next=tmp; 
 		}
	}
 	display(); 
 	return 0; 
} 
void display() 
{ 
 	struct node *q; 
 	if(head==NULL) 
 	cout<<"List is empty!!\n"; 
 	else 
 	{ 
 		cout<<"Elements in Linked List\n"; 
 		q=head; 
 		while(q!=NULL) 
 		{ 
 			cout<<"\t"<<q->data; 
 			q=q->next; 
 		} 
 	} 
} 


