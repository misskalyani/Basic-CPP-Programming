#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
		    if(i%2==0)
			cout<<(char)(j+96) <<" ";
			else
			cout<<j<<" ";
		}
		cout<<"\n";
	}
}
