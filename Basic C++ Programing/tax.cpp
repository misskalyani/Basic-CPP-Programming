#include<iostream>
using namespace std;
int main()
{
	int bsal,tax,da,tsal;
	cout<<"enter Basic Salary : ";
	cin>>bsal;
	tax=bsal*5/100;
	da=bsal*20/100;
	tsal=(bsal+da)-tax;
	cout<<"\n Tax : "<<tax;
	cout<<"\n dearness Allowance : "<<da;
	cout<<"\n Total salary : "<<tsal;
}
