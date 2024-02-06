#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter X cordinate : ";
	cin>>x;
	cout<<"Enter Y cordinate : ";
	cin>>y;
	if(x>0 and y>0)
	{
		cout<<"First Quadrant";
	}
	else if(x<0 and y<0)
	{
		cout<<"Third Quadrant";
	}
	else if(x<0 and y>0)
	{
		cout<<"Second Quadrant";
	}
	else if(x>0 and y<0)
	{
		cout<<"Fourth Quadrant";
	}
	
	else if(x!=0 and y==0)
	{
		cout<<"On X-axis";
	}
	else if(x==0 and y!=0)
	{
		cout<<"On Y-axis";
	}

	
}

