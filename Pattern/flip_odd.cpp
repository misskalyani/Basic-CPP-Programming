#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
		
			cout<<j*2-1<<" ";
		}
		cout<<"\n";
	}
}
