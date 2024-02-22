#include<iostream>
using namespace std;
int fact(int x)
{
	int f=1,i,n;
	for(i=1;i<=n;i++)
	{
	 	f=f*i;
	}	
}
int main()
{
	int n,r;
	cout<<"\n n : ";
	cin>>n;
	cout<<"\n r : ";
	cin>>r;
	int a = fact(n);
	int b = fact(r);
	int c = fact(n-r);
	cout<<"\nCombination = "<<a/b*c;
	cout<<"\nPermutation = "<<a/c;
}
