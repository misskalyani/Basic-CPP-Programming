#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Enter number of rows : ";
	cin>>r;
	cout<<"Enter number of columns : ";
	cin>>c;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		   cout<<(char)(j+96)<<" ";//typecasting
		}
		cout<<"\n";
	}
}
