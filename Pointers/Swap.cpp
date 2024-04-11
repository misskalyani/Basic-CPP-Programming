#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	cout<<"Enter First Number :: ";
	cin>>a;
	cout<<"Enter Second Number :: ";
	cin>>b;
	swap(a,b);
	cout<<"After Swapping :: \n  ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;

}
