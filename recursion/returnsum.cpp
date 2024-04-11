#include<iostream>
using namespace std;
int sum(int n)
{
	if(n==1)
	 return 1;
	else
	 return n+sum(n-1);
}
int main()
{
	int n;
	cout<<"Enter num :: ";
	cin>>n;
	cout<<sum(n);
}
//without return
//#include<iostream>
//using namespace std;
//int sum(int n)
//{
//   int s=0;
//	if(n==1)
//	 return 1;
//	else
//	  s=s+sum(n-1);
//}
//int main()
//{
//	int n;
//	cout<<"Enter num :: ";
//	cin>>n;
//   sum(n);
//}
