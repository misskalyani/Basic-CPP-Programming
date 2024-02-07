#include<iostream>
using namespace std;
int main()
{
	int n,count=0;
	cout<<"Enter Limit :: ";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<"number of digit = "<<count;
}
