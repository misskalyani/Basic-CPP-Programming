#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter Limit :: ";
	cin>>n;
    bool flag=false;//Prime number
    for(i=2;i<=n/2;i++)
	{
		
		if(n%i==0)
		{
		    flag=true;
			break;
	    }
		
	}
    if(n==1)
    {
    	cout<<"Neigther Composite Not Prime";
	}
	else if(flag==true)
	{
		cout<<"Composite Number ";
	}
	else
	{
		cout<<"Prime Number ";
	}
}
