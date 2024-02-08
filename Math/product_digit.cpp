#include<iostream>
using namespace std;
int main()
{
	int n,product=1,ld;
	cout<<"Enter Limit :: ";
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		product=product*ld;
	}
	cout<<"Product of digit = "<<product;
}
