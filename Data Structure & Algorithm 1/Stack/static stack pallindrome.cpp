#include<iostream>
#include<stdlib.h>
#define MAX 7
using namespace std;
struct stack
{
	char a[MAX];
	int top;
}s;
void init()
{
	s.top=-1;
}
int isfull()
{
	if(s.top==MAX-1)
	return 1;
	else
	return 0;
}
int isempty()
{
	if(s.top==-1)
	return 1;
	else 
	return 0;
}
void push(char ch)
{
	if(isfull())
	cout<<"stack is overflow";
	else
	{
		s.top++;
		s.a[s.top]=ch;
 	}
}
int pop()
{
	char val;
	if(isempty())
	cout<<"stack is underflow";
	else
	{
		val=s.a[s.top];
		s.top--;
		return val;
	}
}
int main()
{
	char ch[20];
    int i;
	cout<<"enter string :: ";
	cin>>ch;
	for(i=0;ch[i]!='\0';i++)
	{
		push(ch[i]);
	}
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]!=pop())
		break;
	}
	if(isempty())
	cout<<" not pallindrome";
	else
	cout<<"pallindrome";
}
