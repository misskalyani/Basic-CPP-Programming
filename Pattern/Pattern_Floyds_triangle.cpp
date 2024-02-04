#include<iostream>
using namespace std;
int main()
{
	int n,r,c,count=1;
	cout<<"Enter Number Of r for Floyds Triangle :: ";
	cin>>n;
	for(r=1;r<=n;r++)
	{
		for(c=1;c<=r;c++)
		{
			cout<<"\t"<<count++;
		}
		cout<<"\n";
	}
}

