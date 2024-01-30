#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number : ";
	cin>>n;
	if(n<1000 || n>100)
	{
		cout<<"Number is Betwwen 100 and 1000";
	}
    else
	{
		cout<<"Number is Not betwwen 100 and 1000";
	}
}
