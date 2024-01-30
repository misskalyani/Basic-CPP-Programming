#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter 1st number = ";
	cin>>a;
	cout<<"\nEnter 2nd number = ";
	cin>>b;
	cout<<"\n\nOriginal a = "<<a<<"  b = "<<b;
	swap(a,b);
	cout<<"\n\nSwapped  a = "<<a<<"  b = "<<b;
}
