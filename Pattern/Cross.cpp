#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Limit :: ";
	cin>>n;//n=5
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i==j) ||(i==1 && j==5) || (i==2 && j==4) || (i==4 && j==2) ||(i==5 && j==1)  )
			cout<<" * ";
			else
			cout<<"  ";
		}
		cout<<"\n";
	}
}
