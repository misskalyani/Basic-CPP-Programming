#include<iostream>
using namespace std;
int fact(int x)
{
	int i,n,f=1;
	for(i=1;i<=x;i++)
	{
		f=f*i;
	}
	return f;
}
int ncr(int n,int r)
{
	return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
	int i,n,j;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i+1;j++)
		{
			cout<<"  ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<ncr(i,j)<<" ";
		}
		cout<<"\n";
	}
}
