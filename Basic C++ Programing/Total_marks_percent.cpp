#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5,t;
	float per;
	
	cout<<"Enter Fisrt Subject Marks : ";
	cin>>s1;
	cout<<"Enter Second Subject Marks : ";
	cin>>s2;
	cout<<"Enter Third Subject Marks : ";
	cin>>s3;
	cout<<"Enter Fourth Subject Marks : ";
	cin>>s4;
	cout<<"Enter Fifth Subject Marks : ";
	cin>>s5;
	
	t=s1+s2+s3+s4+s5;
	cout<<"Total Marks : "<<t;
	per=t/5;
	cout<<"\nPercentage : "<<per;
	
}
