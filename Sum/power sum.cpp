#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float n,i=1,x,sum=0;
	cout<<"Enter Number of terms :: ";
	cin>>n;
	cout<<"\nEnter Value Of x :: ";
	cin>>x;
	while(i<=n)
	{
		sum=sum+i/pow(x,i);
		i++;
	}
	cout<<"Sum = "<<sum;
}
