#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Year : ";
	cin>>n;
	if(n%4==0)
	{
		cout<<"Leap year";
	}
    else
	{
		cout<<"Not Leap Year";
	}
}
