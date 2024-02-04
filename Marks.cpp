#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Percentage: ";
	cin>>n;
	
	if(n>=80 and n<=100)
	{
		cout<<" Very Godd";
	}
	else if(n>=61 and n<=80)
	{
		cout<<" Good";
	}
	else if(n>=41 and n<=61)
	{
		cout<<" Good";
	}
	else
	{
		cout<<"FAILL";
	}

	
}
