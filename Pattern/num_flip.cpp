#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
		
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}
