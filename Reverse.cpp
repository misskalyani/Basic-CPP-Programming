#include <iostream>
using namespace std;
int main()
{
	int rev=0,ld,n;
	cout<<"Enter Number :: ";
	cin>>n;
	while(n!=0)
	{
		ld=n%10;
		n=n/10;
	    rev=rev*10;
	    rev=rev+ld;
	}
  cout<<"Reverse = "<<rev;
}
