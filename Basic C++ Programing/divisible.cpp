#include<iostream>
using namespace std;
int main()
{
	int ch;
	cout<<"Enter Nmber : ";
	cin>>ch;
    if(ch/5==0 || ch/3==0  ||  ch/9==0)
    {
    	cout<<"Divisble by 3 and 5 and 9";
	}
	else
	{
			cout<<" NOT Divisble by 3 and 5 and 9";
	}
}
