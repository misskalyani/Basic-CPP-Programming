#include<iostream>
using namespace std;
#define MAX 5
struct stack
{
   int a[MAX];
   int top;
}s1,s2;
void init(struct stack *s)
{
  s->top=-1;
}
int isempty(struct stack *s)
{
  if(s->top==-1)
    return 1;
  else
    return 0;
}
int isfull(struct stack *s)
{
   if(s->top==MAX-1)
     return 1;
   else
     return 0;
}
void push(struct stack *s,int num)
{
  if(isfull(s))
  {
     cout<<"Stack is full";
  }
  else
  {
    s->top++;
    s->a[s->top]=num;
  }
}
int pop(struct stack *s)
{
  int val;
   if(isempty(s))
   {
      cout<<"Stack is empty";
   }
   else
   {
     val=s->a[s->top];
     s->top--;
   }
   return val;
}
int main()
{
	
	  int n,i,val;
	  init(&s1);
	  init(&s2);
	  cout<<"Enter limit : ";
	  cin>>n;
	  cout<<"\nEnter values ion stack 1 : ";
	  for(i=0;i<n;i++)
	  {
	  	cout<<"\nEnter value : ";
	  	cin>>val;
	  	push(&s1,val);
	  }
	  cout<<"\nEnter values in stack 2 : ";
	  for(i=0;i<n;i++)
	  {
	  	cout<<"\nEnter value : ";
	  	cin>>val;
	  	push(&s2,val);
	  }
	  while(!isempty(&s1)&&!isempty(&s2))
	  {
		   if(pop(&s1)!=pop(&s2))
		      break;
	  }
	  if((isempty(&s1))&&(isempty(&s2)))
		    cout<<"Identical";
	  else
		   cout<<"not identical......";
}

