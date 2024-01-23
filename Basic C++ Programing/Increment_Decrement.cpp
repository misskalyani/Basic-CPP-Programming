#include<iostream>
using namespace std;
int main()
{
	int x = 9;
	x++;//x=x+1,x+=1;
	cout<<x<<endl;//x=10 print
	cout<<x++<<endl;//x=10 print
	cout<<x++<<endl;//x=11 print       first x value print next increment by one     that is post increment
    cout<<++x<<endl;//x=13 print       pre increment
    cout<<--x<<endl;//x=12 print      pre decrement
    cout<<x--<<endl;//x=12 print
    cout<<x--<<endl;//x=11 print     
}
