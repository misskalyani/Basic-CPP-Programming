#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char ch;
	cout<<"Enter Number first : ";
	cin>>n1;
	cout<<"Enter Operator : ";
	cin>>ch;
	cout<<"Enter Number second : ";
	cin>>n2;
	if(ch=='+')
	{
		cout<<"Addtion = "<<n1+n2;
	}
	if(ch=='-')
	{
		cout<<"Subtraction = "<<n1-n2;
	}
		if(ch=='*')
	{
		cout<<"Multiplication = "<<n1*n2;
	}
		if(ch=='/')
	{
		cout<<"Division = "<<n1/n2;
	}
}
