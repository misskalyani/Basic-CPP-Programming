#include<string>
#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	int i,n,flag=1,num,s1[20];
	cout<<"enter limit :: ";
	cin>>n;
	cout<<"enter elements :: ";
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<s1[i]<<" ";
	}
	cout<<"\nenter num to search :: ";
	cin>>num;
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
	cout<<"num found pos = "<<i;;
}
