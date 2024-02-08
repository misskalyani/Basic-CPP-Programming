#include<iostream>
using namespace std;
int main()
{
	int n,product=1,i=1;
	cout<<"Enter Limit :: ";
	cin>>n;
    while(i<=n)
	{
		
		product=product*i;
		cout<<"\n"<<  i<<"! = "<<product;
	    i++;
	    
	}

}
