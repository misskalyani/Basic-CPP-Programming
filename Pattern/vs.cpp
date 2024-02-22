#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"Enter Row : ";
	cin>>i;
	cout<<"Enter Colmun : ";
	cin>>j;
	for(i=1;i>0;i++)
	{

		for(j=1;j>0;j++)
		{
			if((i==2 && j==2) )
			cout<<"   ";
			else
			cout<<" * ";
		}
		cout<<"\n";
	}
}