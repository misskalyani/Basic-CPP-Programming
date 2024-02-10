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
			if(i%2==0)
			cout<<(char )(i+64)<<" ";
			else
			cout<<i<<" ";
		}
		cout<<"\n";
	}
}
