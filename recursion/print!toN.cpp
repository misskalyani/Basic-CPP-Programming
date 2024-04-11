#include<iostream>
using namespace std;
void print(int n)
{
	if(n==0)
		return;
	else
	{
		print(n-1);	
		cout<<n<<endl;
	}	
}
int main()
{
	print(10);
}

//OR
//#include<iostream>
//using namespace std;
//void print(int n)
//{
//	if(n==11)
//		return;
//	else
//	{
//	   cout<<n<<endl;	
//     print(n+1);	
//	}	
//}
//int main()
//{
//	print(10);
//}
