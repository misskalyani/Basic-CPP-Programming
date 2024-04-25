#include<iostream>
using namespace std;
int orderlist(int a[],int n,int num)
{
	int i,sentinel,compcount;
	sentinel=a[n-1];
	if(num>sentinel)
	{
		return -1;
	}
	i=0;
	while(a[i]<num&&a[i]!=sentinel)
	{
		compcount++;
		i++;
	}
	compcount++;
	if(num=a[i])
	cout<<"Key Found";
	else
	cout<<"Key Not Found";
}
int main()
{
	int i,n,num,a[20],ch;
	cout<<"enter limit :: ";
	cin>>n;
	cout<<"enter elements :: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"elements Are :: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nenter num to search :: ";
	cin>>num;
	orderlist(a,n,num);
}
