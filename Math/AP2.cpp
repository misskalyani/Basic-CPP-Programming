#include<iostream>
using namespace std;
int main()
{
	int n,i,a=1;
	cout<<"Enter Limit :: ";
	cin>>n;

    for(i=1;i<=n;i=i+3)
	{
		cout<<a<<" ";
		a=a+3;
		
	}
}
