#include<iostream>
using namespace std;
int main()
{
	char a[10]={'k','a','l','y','a','i'};
	for(int i=0;i<=10;i++)
	{
		cout<<a[i];
	}
	string s;
	cout<<"\n\n\nenter string :: ";
	cin>>s;
	cout<<s;
	cout<<"\n\n\n";
	cout<<s.length();
	string b;
	cout<<"\n\n\nenter string :: ";
	getline(cin,b);
	cout<<b;
}
