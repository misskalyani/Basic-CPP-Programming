#include<iostream>
using namespace std;
int main()
{
	float r,h,a,v;
	cout<<"Enter radius : ";
	cin>>r;
	cout<<"Enter height : ";
	cin>>h;
	
	a=2*3.14*r*h;
	v=3.14*r*r*h;
	cout<<"Area : "<<a;
	cout<<"\nVolume : "<<v;
}
