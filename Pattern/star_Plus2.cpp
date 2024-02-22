#include<iostream>
using namespace std;
int main()
{
	int i,j,n,mid;
	cout<<"Enter limit :: ";
	cin>>n;
	mid=n/2+1; 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(mid==i   || mid==j)
			{
				cout<<"*"<<" ";
			}
			else
			{
				cout<<"  ";
			}
		}
		cout<<"\n";
	}
}
