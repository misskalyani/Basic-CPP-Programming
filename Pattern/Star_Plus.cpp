#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a=0;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		   if(i==(n/2)+1)
			cout<<"*"<<" ";
		   else if(j==i)
		   cout<<"    "<<"*";
		}
		cout<<"\n";
	}
}
