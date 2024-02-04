#include<iostream>
using namespace std;
int main()
{
    int a,b;
	char oper ;
	cout<<"Enter Number first : ";
	cin>>a;
	cout<<"Enter Operator : ";
	cin>>oper;
	cout<<"Enter Number second : ";
	cin>>b;
    
	
		switch(oper)
		{
			case '+':cout<<"\nADD = "<<a+b;
		         break;
			case '-':cout<<"\nSUB = "<<a-b;
		         break;     
			case '*':cout<<"\nMUL = "<<a*b;
		         break;
			case '/':cout<<"\nDIV = "<<a/b;
		         break; 
			case '%':cout<<"\nFRACTION = "<<a%b;		    
		}
   	
}
	
