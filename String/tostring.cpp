#include<iostream>
using namespace std;
int main()
{
	int x = 796543;
	string s = to_string(x);
	s = s + "dd";
	cout<<s;
	
	
	string str = "345678";
	int x = stoi(str);
	cout<<x+1;
}
