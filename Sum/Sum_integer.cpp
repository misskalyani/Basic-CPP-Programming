#include<iostream>
using namespace std;
int main()
{
	int sum=0,x,y;
	cout<<"Enter Number :: ";
	cin>>x>>y;
	while(x<=y)
	{
		sum=sum+x;
		x++;
	}
	cout<<"\nSum = "<<sum;
}
