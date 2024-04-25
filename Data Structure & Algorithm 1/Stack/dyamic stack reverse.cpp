#include<iostream>
#include<stdlib.h>
using namespace std;
 typedef struct node
 {
     char data;
	 struct node *next;
 }NODE;
 NODE *top;
 void init()
 {
 	top=NULL;
 }
 void push(char ch)
 {
 	NODE *newnode;
 	newnode=(NODE*)malloc(sizeof(NODE));
 	newnode->data=ch;
 	newnode->next=top;
 	top=newnode;
 }
 void disp()
 {
 	NODE*temp;
 	for(temp=top;temp!=NULL;temp=temp->next)
 	{	
		 cout<<temp->data;
 	}
 }
 int main()
 {
 	char ch[10];
	 int i;
    
 	init();
 	cout<<"enter string : ";
 	cin>>ch;
 	for(i=0;ch[i]!='\0';i++)
 	{
 		push(ch[i]);
	}
  disp();
 }
