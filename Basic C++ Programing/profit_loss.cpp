#include<iostream>
using namespace std;
int main()
{
	int sp,cp;
	cout<<"Enter Selling Price : ";
	cin>>sp;
	cout<<"Enter cost price : ";
	cin>>cp;
	if(sp>cp)
	{
		cout<<"Profit";
	}
	else if(cp>sp)
	{
		cout<<"Loss";
	}
	else if(cp==sp)
	{
		cout<<"No Profit No Loss";
	}
	
}
