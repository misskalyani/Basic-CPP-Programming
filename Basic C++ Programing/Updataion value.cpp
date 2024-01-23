#include<iostream>
using namespace std;
int main()
{
	int x=8,y=4;
	cout<<x;
	x=78;
	cout<<"\n";
	cout<<x;
	cout<<"\n";
	cout<<x+y;//x=78,y=4
	y=90;
	x=60;
	cout<<"\n";
	cout<<x*y;//y=90,x=60
	cout<<"\n";
	cout<<x-y;//y=90,x=60
	x=x+6;//x=60
	cout<<"\n";
	cout<<x;
	x=x/3;
	cout<<"\n";
	cout<<x;
	x+=2;
	cout<<"\n";
	cout<<x;
}
