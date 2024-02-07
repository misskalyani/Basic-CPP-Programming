#include<iostream>
using namespace std;
int main()
{
	int n,r=0,ld,a;
	cout<<"Enter Limit :: ";
	cin>>n;
    a=n;
	while(n!=0)
	{
		ld=n%10;
		r=r*10;
		r=r+ld;
		n=n/10;
	
	}
	cout<<"reverse and original number sum = "<<r+n;
}
