#include<iostream>
using namespace std;
int main()
{
	int a[100],i,n,num,top,bottom,mid,flag=0;
	cout<<"\nenter limit :: ";
	cin>>n;
	cout<<"\nenter n numbres :: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"enter num to search = ";
	cin>>num;
    top=0,bottom=n-1;
	for(i=0;i<n;i++)
	{
		mid=(top+bottom)/2;
		if(a[mid]==num)
		{
		flag=1;
		break;
		}
		if(num<a[mid])
		bottom=mid-1;
		else
		top=mid+1;
	}
	if(flag==1)
	cout<<"num found";
	else
	cout<<"num not found";
}
