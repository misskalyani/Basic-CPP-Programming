#include<stdlib.h>
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
	int i,n,flag=0,rnum;
	cout<<"ENTER LIMIT :: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter rno :: ";
		cin>>s1[i].rno;
		cout<<"\nEnter name :: ";
		cin>>s1[i].name;
		cout<<"\nEnter per :: ";
		cin>>s1[i].per;
	}
	cout<<"\nenter roll number to search :: ";
	cin>>rnum;
	for(i=0;i<n;i++)
	{
		if(s1[i].rno==rnum)
	    flag=1;
		break;
	}
	if(flag==1)
    cout<<"number is not found";
	else
    cout<<"number is found name = "<<s1[i].name<<"per = "<<s1[i].per;	
}

