#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i%2==0)
	    	cout<<i<<" ";
			else
				cout<<(char )(i+64)<<" ";
			
		}
		cout<<"\n";
	}
}
