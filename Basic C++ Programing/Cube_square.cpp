#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"Enter Number : ";
	cin>>n;
	if(n<10)
	{
		a=n*n*n;
		cout<<"Cube : "<<a;
	}
	else 
	{
		a=n*n;
		cout<<"Square : "<<a;
	}
}
