#include<iostream>
#include<string>
using namespace std;
void linear(int s1[],int n,int num)
{
	int i,flag=1;
	for(i=0;i<n;i++)
	{
		if(s1[i]==num)
		{
	      flag=0;
	      break;
	    }
	}
	if(flag==1)
	cout<<"num not found";
	else
	cout<<"num found ";
}
void binary(int s1[],int n,int num)
{	
	int i,top,bottom,mid,flag=0;
    top=0,bottom=n-1;
	for(i=0;i<n;i++)
	{
		mid=(top+bottom)/2;
		if(s1[mid]==num)
		{
		flag=1;
		break;
		}
		if(num<s1[mid])
		bottom=mid-1;
		else
		top=mid+1;
	}
	if(flag==1)
	cout<<"num found";
	else
	cout<<"num not found";
}
void sentinel(int s1[],int num,int n)
{
    int last=s1[n-1];
	int i=0;
	s1[n-1]=num;	
	while(s1[i]!=num)
	i++;
	if(i<n-1||num==last)
	cout<<"num found ";
	else
	cout<<"not found";
}
int main()
{
	int i,n,num,s1[20],ch;
	cout<<"enter limit :: ";
	cin>>n;
	cout<<"enter elements :: ";
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	cout<<"elements Are :: ";
	for(i=0;i<n;i++)
	{
		cout<<s1[i]<<" ";
	}
	cout<<"\nenter num to search :: ";
	cin>>num;
	do
	{
		cout<<"\n1-Linear Search\n2-Binary Search\n3-Sentinel Search";
		cout<<"\nEnter Choice :: ";
		cin>>ch;
		switch(ch)
		{
			case 1:linear(s1,n,num);
				   break;
			case 2:binary(s1,n,num);
				   break;
			case 3:sentinel(s1,n,num);
				   break;	      
		}
	}while(ch<4);
}
