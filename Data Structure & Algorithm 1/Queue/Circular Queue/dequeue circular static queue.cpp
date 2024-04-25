#include <iostream> 
using namespace std;
#define MAX 5 
int main() 
{ 
 	char ch; 
 	int queue[MAX]={10,20,30,40,50}; 
 	int i,front=0,rear=MAX-1; 
 	cout<<"\nElements in Queue\n"; 
 	for(i=front; i!=rear; i=(i+1)%MAX) 
 	cout<<queue[i]<<" "; 
 	cout<<queue[i]<<" "; 
 	cout<<"\nDo you want to delete element?"; 
 	cin>>ch; 
 	while(ch=='y'||ch=='Y') 
 	{ 
 		if(front==-1) 
 		{ 
 			cout<<"\nQueue is Empty!!"; 
 			return 0; 
 		} 
 		else 
 		{ 
 			cout<<"Deleted Element is = "<<queue[front]; 
 			if (front == rear) 
 			{ 
 				front = -1; 
 				rear = -1; 
 			} 
 			else 
 			front=(front +1)%MAX; 
 		} 
 		cout<<"\nAfter Deletion position of Front = "<<front<<"and Rear = "<<rear; 
		cout<<"\n\nDo you want to delete element?"; 
 		cin>>ch; 
 	} 
 	if(front==-1) 
 	cout<<"\nQueue is Empty!!"; 
 	else 
 	{ 
 		cout<<"\n**** Elements in Queue*****.\n"; 
 		for(i=front; i!=rear; i=(i+1)%MAX) 
 		cout<<queue[i]<<" "; 
 		cout<<queue[i]<<" "; 
	} 
} 
