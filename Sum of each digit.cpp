#include <iostream>
using namespace std;
int main()
{
	int sum=0,ld,n;
	cout<<"Enter Number :: ";
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		sum=sum+ld;
	}
	cout<<"Sum = "<<sum;

}
