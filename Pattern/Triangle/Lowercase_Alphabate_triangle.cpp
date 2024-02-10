#include<iostream>
using namespace std;
int main()
{
	int i,n,j;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<(char)(j+96)<<" ";
		}
		cout<<"\n";
	}
}
