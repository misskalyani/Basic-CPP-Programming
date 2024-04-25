#include<cstring>

#include<iostream>
using namespace std;
int main()
{
	char emp[100][100],ename[20];
	int i,n,flag=0,mid,top,bottom;
	cout<<"Enter limit :: ";
	cin>>n;
	cout<<"Enter n emp name :: ";
	for(i=0;i<n;i++)
	{
		cin>>emp[i];
	}
	cout<<"\nEnter emp Name To Search :: ";
	cin>>ename;
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(strcmp(emp[mid],ename)==0)
		{
			flag=1;
			break;
		}
		if(strcmp(emp[mid],ename)<0)
		    top=mid+1;
		else
		     bottom=mid-1;    
	}
	if(flag==1)
	cout<<"Ename found";
	else
	cout<<"Not found";
}
