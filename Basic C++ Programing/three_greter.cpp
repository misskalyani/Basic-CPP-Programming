#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter First side: ";
	cin>>a;
	cout<<"Enter Second side: ";
	cin>>b;
	cout<<"Enter Third side: ";
	cin>>c;
	if(a>b and a>c)
	{
		cout<<a <<"is greatest";
	}
	else if(b>a and b>c)
	{
		cout<<b <<"is greatest";
	}
	else
	{
		cout<<c <<"is greatest";
	}

	
}
