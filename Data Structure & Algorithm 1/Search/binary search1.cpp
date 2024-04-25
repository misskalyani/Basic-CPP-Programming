#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[100][100],city[20];
	int i,n,flag=0,mid,top,bottom;
	cout<<"Enter limit :: ";
	cin>>n;
	cout<<"Enter n City name :: ";
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	cout<<"\nEnter City Name To Search :: ";
	cin>>city;
	top=0;
	bottom=n-1;
	while(top<=bottom)
	{
		mid=(top+bottom)/2;
		if(strcmp(s1[mid],city)==0)
		{
			flag=1;
			break;
		}
		if(strcmp(s1[mid],city)<0)
		    top=mid+1;
		else
		     bottom=mid-1;    
	}
	if(flag==1)
	cout<<"city found";	
	else
    cout<<"city Not found";
}

