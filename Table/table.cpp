#include<iostream>
using namespace std;
int main()
{
	int i,n,m;
	cout<<"Enter Number::";
    cin>>n;
    for(i=1;i<=10;i++)
    {
    	m=n*i;
    	cout<<"\n\t"<<n<<"\t"<<i<<"\t"<<m;
	}
}
