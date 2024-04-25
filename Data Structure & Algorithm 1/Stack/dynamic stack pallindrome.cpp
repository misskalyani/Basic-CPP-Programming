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
int isempty()
{
	if(top==NULL)
	return 1;
	else
	return 0;
}
void push(char ch)
{
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=ch;
	newnode->next=top;
	top=newnode;
}
int pop()
{
	NODE *temp;
	char val;
	if(isempty())
    {
		cout<<"stack is underflow";
		return 0;
	}
	else
	{
		top=temp;
		top=top->next;
		val=temp->data;
		free(temp);
		return val;
	}
}
int main()
{
	char ch[20];
	int i;
	cout<<"enter string :: ";
	cin>>ch;
	init();
	for(i=0;ch[i]!='\0';i++)
	{
		push(ch[i]);
	}
    for(i=0;ch[i]!='\0';i++)
    {
    	if(ch[i]=pop())
    	 break;
	}
	if(isempty())
		cout<<"string is not pallindrome";
	else
		cout<<"string is pallindrome";
}
