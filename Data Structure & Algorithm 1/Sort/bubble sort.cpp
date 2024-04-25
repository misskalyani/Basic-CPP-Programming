#include<iostream>
using namespace std;
void accept(int a[],int n)
{
	int i;
	cout<<"enter numbers : ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void disp(int a[],int n)
{
	int i;
	cout<<"\n numbers are : ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void bubble(int a[],int n)
{
	int i,pass,t;
	for(pass=1;pass<=n;pass++)
	{
		for(i=0;i<n-pass;i++)
		{
			if(a[i]<a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	cout<<"\nsorted order :: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[100],n;
	cout<<"enter limit : ";
	cin>>n;
	accept(a,n);
	disp(a,n);
	bubble(a,n);
}

