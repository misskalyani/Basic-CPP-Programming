#include <iostream>
using namespace std;
int main()
{
	int count=0,n;
	cout<<"Enter Number :: ";
	cin>>n;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	cout<<"count= "<<count;

}
