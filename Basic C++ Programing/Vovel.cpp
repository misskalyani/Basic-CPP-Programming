#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter Character : ";
	cin>>ch;
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
	{
		cout<<"VOWELS";
	}
	else
	{
		cout<<"CONSONANTS";
	}
}
