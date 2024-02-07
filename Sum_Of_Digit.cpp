#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,ld;
	cout<<"Enter Limit :: ";
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		sum=sum+ld;
	}
	cout<<"Sum of digit = "<<sum;
}
