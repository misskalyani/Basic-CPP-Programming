#include <cstdlib>
#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,num;
	cout<<"ENTER LIMIT :: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%100;
	}
	cout<<"\nRANDOM NUMBERS ARE :: ";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nenter number to search :: ";
	cin>>num;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		break;
	}
	if(i==n)
	cout<<"number is not found";
	else
	cout<<"number is found POSITION = "<<i;
}
