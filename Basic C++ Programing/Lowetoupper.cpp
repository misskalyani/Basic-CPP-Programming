#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter Character : ";
	cin>>ch;
	if(ch>='A' && ch<='Z')
	{
		ch=ch+32;
		cout<<"LOWERCASE character : "<<ch;
	}
	else
	{
		ch=ch-32;
		cout<<"UPPERCASE character : "<<ch;
	}
}
