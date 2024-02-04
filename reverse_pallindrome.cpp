#include<iostream>
using namespace std;
int main()
{
	int a,n,rev=0;
	cout<<"Enter Number :: ";
	cin>>n;
	a=n;
	cout<<"Number = "<<a;
	while(n>0)
	{
		a=n%10;
		rev=rev*10+n%10;
		n=n/10;
	}
	cout<<"\nReverse = "<<rev;
	if(a==rev)
	cout<<" \nPalindrome";
	else
	cout<<"\n NOT Palindrome";
	
}

