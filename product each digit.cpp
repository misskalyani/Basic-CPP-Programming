#include <iostream>
using namespace std;
int main()
{
	int product=1,ld,n;
	cout<<"Enter Number :: ";
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
		product=product*ld;
	}
	cout<<"Product = "<<product;

}
