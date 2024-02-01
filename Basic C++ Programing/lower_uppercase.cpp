#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter Character : ";
	cin>>ch;
	if(ch>='A' && ch<='Z')
	{
		cout<<"UPPERCASE";
	}
	else
	{
		cout<<"LOWERCASE";
	}
}
