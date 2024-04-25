#include<iostream>

#define MAX 25
using namespace std;
struct stack
{
	char a[MAX];
	int top;
}s1;
void init()
{
        s1.top=-1;
}
int isempty()
{
        if(s1.top==-1)
        return 1;
        else
        return 0;
}
int isfull()
{
        if(s1.top==MAX-1)
        return 1;
        else
        return 0;
}
void push(char x)
{
        if(isfull())
        cout<<"Stack Is Full Now";
        else
        {
           s1.top++;
           s1.a[s1.top]=x;
        }
}
char pop()
{
        char ch;
        if(isempty())
        cout<<"Stack Is Empty Now";
        else
        {
          ch=s1.a[s1.top];
          s1.top--;
          return ch;
        }
}
int main()
{
        char p[30],q[30];
        int i,k=0;
        init();
        cout<<"Enter String 1 = ";
        cin>>p;
        for(i=0;p[i]!='\0';i++)
        push(p[i]);

        while(!isempty())
        {
           q[k++]=pop();
        }
        q[k++]='\0';

        for(i=0;q[i]!='\0';i++)
        {
           push(q[i]);
        }

        while(!isempty())
        {
           cout<<pop();
        }
    if(isempty())
    cout<<"\n order Identical";
    else
    cout<<"\n order not identical......";
}

   

