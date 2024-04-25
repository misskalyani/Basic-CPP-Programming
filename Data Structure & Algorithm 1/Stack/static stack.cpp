#include<iostream>
#include<stdlib.h>
#define MAX 5
using namespace std;
struct stack
{
	int a[MAX];
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
void push(int num)
{
	if(isfull())
	cout<<"stack is full dont push";
	else
	{
		s.top++;
		s.a[s.top]=num;
		cout<<"\nstack push succec...";
	}
}
void pop()
{
    int val;
	if(isempty())
	cout<<"stack is empty dont pop";
	else
	{
		val=s.a[s.top];
		s.top--;
		cout<<"\n poped value = "<<val;
	}
}
void peek()
{
	cout<<"last element = "<<s.a[s.top];
}
void disp()
{
	int i;
	for(i=s.top;i>=0;i--)
	{
		cout<<s.a[i]<<" ";
	}
}
int main()
{
	int ch,num;
	do
	{
		cout<<"\n1-push\n2-pop\n3-peek\n4-disp";
		cout<<"\nenter choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter num :: ";
			       cin>>num;
			       push(num);
			       break;
			case 2:pop();
			       break;  
		  case 3:peek();
			       break;
		  case 4:disp();
			       break;      
		}
	}while(ch<5);
}

