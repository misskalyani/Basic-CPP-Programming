#include<iostream>
using namespace std;
int main()
{
	int r,i,j;
	cout<<"Enter number of rows : ";
	cin>>r;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=r;j++)
		{
		   cout<<(char)(j+96) <<"  ";//typecast
		}
		cout<<"\n";
	}
}
