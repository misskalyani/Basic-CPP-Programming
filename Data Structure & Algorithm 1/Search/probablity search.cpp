#include<iostream>
using namespace std;
int probability(int a[],int n,int num)
{
	int i,temp,compcount;
	for(i=0;i<n;i++)
	{
		compcount++;
		if(a[i]==num)
		{
			if(i!=0)
			{
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
				return i-1;
			}
		}
	}
	return -1;
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
	probability(a,n,num);
	if(i==-1)
	cout<<"Key NOT Found";
	else
	cout<<"Key Found";
}
	
