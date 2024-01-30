#include<iostream>
using namespace std;
int main()
{
	int rs1,ten,five,one;
	cout<<"enter amount : ";
	cin>>rs1;
	ten=rs1/10;
	rs1=rs1%10;
	five=rs1/5;
	rs1=rs1%5;
	one=rs1/1;
	rs1=rs1%1;
	
	cout<<"\n 10rs Notes : "<<ten;
	cout<<"\n 5rs Notes : "<<five;
	cout<<"\n 1rs Notes : "<<one;
}
