#include<iostream>
using namespace std;
int main()
{
	int a,b,ch;
	cout<<"\nEnter Numbers Are ::";
	cin>>a>>b;
    do
    {
		cout<<"MENU";
		cout<<"\n1-ADDITION";
		cout<<"\n2-SUBTRACTION";
		cout<<"\n3-MULTIPLICATION";
		cout<<"\n4-DIVISION";
		cout<<"\n5-FRACTION";
		cout<<"\nEnter Choice ::";
		cin>>ch;
	
		switch(ch)
		{
			case 1:cout<<"\nADD = "<<a+b;
		         break;
			case 2:cout<<"\nSUB = "<<a-b;
		         break;     
			case 3:cout<<"\nMUL = "<<a*b;
		         break;
			case 4:cout<<"\nDIV = "<<a/b;
		         break; 
			case 5:cout<<"\nFRACTION = "<<a%b;		    
		}
   	}while(ch>6);
}
	
