#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"After Swapping :: \n  ";
	cout<<"\na = "<<a;
	cout<<"\nb = "<<b;
}
int main()
{
	int a,b;
	cout<<"Enter First Number :: ";
	cin>>a;
	cout<<"Enter Second Number :: ";
	cin>>b;
	swap(a,b);
}
//Swapping Hot Nahi Because varibale a & variable b Address are not same.In Swap Function a and b address are change.
//#include<iostream>
//using namespace std;
//void swap(int a,int b)
//{
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//int main()
//{
//	int a,b;
//	cout<<"Enter First Number :: ";
//	cin>>a;
//	cout<<"Enter Second Number :: ";
//	cin>>b;
//	swap(a,b);
//	cout<<"After Swapping :: \n  ";
//	cout<<"\na = "<<a;
//	cout<<"\nb = "<<b;
//
//}

// but solve this problem using pointer.
//#include<iostream>
//using namespace std;
//void swap(int &a,int &b)
//{
//	int temp;
//	temp=a;
//	a=b;
//	b=temp;
//}
//int main()
//{
//	int a,b;
//	cout<<"Enter First Number :: ";
//	cin>>a;
//	cout<<"Enter Second Number :: ";
//	cin>>b;
//	swap(a,b);
//	cout<<"After Swapping :: \n  ";
//	cout<<"\na = "<<a;
//	cout<<"\nb = "<<b;
//
//}



