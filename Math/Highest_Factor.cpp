#include<iostream>
using namespace std;
int main()
{
	int f=1,n,i;
	cout<<"Enter Limit :: ";
	cin>>n;

    for(i=n/2;i>=n;i--)
	{
		
		if(n%i==0)
		{
		
			f=i;
			break;
	    }
		
	}
	cout<<i<<" ";
}
