#include<stdlib.h>
#include<cstring>
#include<iostream>
using namespace std;
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100];
int main()
{
	char sname[20];
	int i,n,flag=0;
	cout<<"ENTER LIMIT :: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter rno :: ";
		cin>>s1[i].rno;
		cout<<"name ::  ";
		cin>>s1[i].name;
		cout<<"per :: ";
		cin>>s1[i].per;
	}
	cout<<"\nenter student name to search :: ";
	cin>>sname;
	for(i=0;i<n;i++)
	{
		if(strcmp(s1[i].name,sname)==0)
	    {
		   flag=1;
	       break;
	    }
	}
	if(flag==0)
	cout<<"number is not found";      
	else
	cout<<"number is found rno = "<<s1[i].rno<<"per = "<<s1[i].per;  
} 
