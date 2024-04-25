#include <iostream>
using namespace std; 
#define MAX 5 
int main() 
{ 
 	char ch; 
 	int i,queue[MAX],front=-1,rear=-1;  
 	do 
 	{ 
 		if((front == rear + 1) || (front == 0 && rear == MAX-1)) 
 		{	 
			 cout<<"\nQueue is Full!!"; 
 			 return 0; 
 		} 
 	else 
 	{ 
 		if(front == -1) 
 		front = 0; 
 		rear=(rear+1)%MAX; 
 		cout<<"\nEnter element to Insert : "; 
 	    cin>>queue[rear]; 
 	} 
 		cout<<"\nAfter Insertion position of Front = "<<front<<"and Rear = "<<rear; 
 		cout<<"\nDo you want to insert more elements?";
		cin>>ch; 
 	}while(ch=='y'||ch=='Y'); 
 	cout<<"\nElements in Queue\n"; 
 	for(i=front; i!=rear; i=(i+1)%MAX) 
 	cout<<queue[i]<<" "; 
 	cout<<queue[i]<<" "; 
 	return 0; 
} 

