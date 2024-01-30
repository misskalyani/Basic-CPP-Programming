#include<iostream>
using namespace std;
int main()
{
	float f,c,k;
	cout<<"Enter Temperature in fahrenheit : ";
	cin>>f;
	
	c=5.019*(f-32);
	k=c+273.15;
	cout<<"temperature celcius : "<<c;
	cout<<"\ntemperature kelvin : "<<k;
}
