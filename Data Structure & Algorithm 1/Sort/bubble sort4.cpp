#include<iostream>
using namespace std;
struct student
{
	int rno;
	char name[20];
	float per;
}s1[100],t;
int main()
{
	int i,n,pass;
	cout<<"Enter Limit :: ";
	cin>>n;
	cout<<"\nEnter n studentr info :: ";
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter rno :: ";
		cin>>s1[i].rno;
		cout<<" name :: ";
		cin>>s1[i].name;
		cout<<" per :: ";
		cin>>s1[i].per;
    }
	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(s1[i].rno<s1[i+1].rno)
			{
				t=s1[i];
				s1[i]=s1[i+1];
				s1[i+1]=t;
			}
		}
	}
	cout<<"\n Display sorted order student info :: ";
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<s1[i].rno<<" "<<s1[i].name<<" "<<s1[i].per;
	}
}



