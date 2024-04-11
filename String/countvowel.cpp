#include<iostream>
using namespace std;
int main()
{
	string s="Hii I am Kalyani Annasaheb Chaudhari";
	cout<<s;
	int count=0;
	for(int i=0;i<=s.length();i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			count++;
		}
	}
	cout<<"\n\n\n";
	cout<<count;
}
