#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Enter Limit :: ";
	cin>>n;
//	last term an =a+(n-1)d=1+(n-1)2=2n-1
    for(i=1;i<=2*n-1;i=i+2)
	{
		cout<<i<<" ";
	}
}
