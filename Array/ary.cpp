#include<iostream>
using namespace std;
int main()
{
	int i, a[5];
	cout<<"enter Array element :: ";
	for(i=1;i<5;i++)
	{
		cin>>a[i];
	}
	cout<<"\nArrya elements are :: ";
	for(i=1;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	a[0]=100;
	cout<<"\nArrya elements are :: ";
	for(i=1;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<" \nReverse Arrray :: ";
	for(i=5;i>=1;i--)
	{
		cout<<a[i]<<" ";
	}
}
