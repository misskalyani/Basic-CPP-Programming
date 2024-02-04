#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i=1,y=1,x;
	cout<<"Enter Number of terms :: ";
	cin>>n;
	cout<<"\nEnter Value Of x :: ";
	cin>>x;
	while(i<=n)
	{
		sum=sum+y*x;
		y=y+2;
		i++;
		
	}
	cout<<"Sum = "<<sum;
}
