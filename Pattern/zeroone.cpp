#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		    if((i+j)%2==0)
			cout<<"0"<<" ";
			else
			cout<<"1"<<" ";
		}
		cout<<"\n";
	}
}
