#include<iostream>
using namespace std;
int main()
{
	int i,m,j;
	for(i=1;i<=10;i++)
	{
		for(j=2;j<=9;j++)
		{
			m=j*i;
			cout<<"\t"<<m;
		}
		cout<<"\n";
	}
}

