#include<iostream>
using namespace std;
int main()
{
	int i,j,n1,n2;
	cout<<"Enter Number Of Row : ";
	cin>>n1;
	cout<<"Enter Number Of Column : ";
	cin>>n2;
	for(i=1;i<=n1;i++)
	{
		for(j=1;j<=n2;j++)
		{
			if(i%2==0)
		    	cout<<i<<" ";
			else
		
			    cout<<(char )(i+64)<<" ";
		}
		cout<<"\n";
	}
}
