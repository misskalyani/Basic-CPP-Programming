#include<iostream>
using namespace std;
int main()
{
	int x=3;
	int* p=&x;
	cout<<&x<<endl;
	cout<<&p<<endl;
	cout<<x<<endl;
	cout<<*p<<endl;	
	
	cout<<"\n\n\n\n";
    x = 89;
	int* ptr=&x;
	cout<<x<<endl;
	*ptr=78;
	cout<<x<<endl;			
}
