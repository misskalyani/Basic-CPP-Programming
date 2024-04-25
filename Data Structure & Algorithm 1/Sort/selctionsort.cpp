#include<iostream>
using namespace std;
int main()
{
	int i,n,j,index,a[20],t,min;
	cout<<"enter limit :: ";
	scanf("%d",&n);
	cout<<"enter n numbres :: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"n numbres are :: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		min=a[i];
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				index=j;
			}
			t=a[i];
			a[i]=a[index];
			a[index]=t;
		}
		
	}
	cout<<"\n sorted order :: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
