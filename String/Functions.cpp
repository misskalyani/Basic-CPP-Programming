#include<iostream>
using namespace std;
int main()
{
	string s="Kalyani";
	cout<<s<<endl;
	s.push_back('a');
	cout<<s<<endl;
	s.push_back('b');
	cout<<s<<endl;
	
	
	
	
//	s.pop_back();
//	cout<<s<<endl;
	
	
	
	s.append("Chaudhari");
	cout<<s<<endl;
	
	
	cout<<s.length();
	s.clear();
	cout<<s<<s.length()<<endl;
}
