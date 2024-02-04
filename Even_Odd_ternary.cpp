#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	//(condition)    ?   if true:    if false:
	(n%2==0) ? cout<<"Even Number ":  cout<<"Odd Number "; 
}
