#include<iostream>
using namespace std;
int power(int n ,int b)
{
	if(b==0)
	 return 1;
	else
	 return n*power(n,b-1);
}
int main()
{
	int n,b;
	cout<<"Enter num :: ";
	cin>>n;
	cout<<"\nEnter Power :: ";
	cin>>b;
	cout<<power(n,b);
}
