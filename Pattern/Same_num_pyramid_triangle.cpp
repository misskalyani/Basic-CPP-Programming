#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"Enter n : ";
	cin>>n;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n-i+1;j++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<i<<"  ";
		}
		cout<<"\n";
	}
}
