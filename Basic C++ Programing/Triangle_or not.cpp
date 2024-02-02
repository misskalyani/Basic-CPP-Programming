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
	if(a+b>c ||  b+c>a   || b+a>c)
	{
		cout<<"Valid Triangle";
	}
	else 
	{
		cout<<"Invalid Triangle";
	}

	
}
