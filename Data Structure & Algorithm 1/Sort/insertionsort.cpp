#include<iostream>
using namespace std;
int main()
{
	int i,k,n,key,a[20],t;
	cout<<"enter limit : ";
	cin>>n;
	cout<<"enter n numbers : ";
	for(i=0;i<n;i++)
	{
	   cin>>a[i];
    }
	cout<<"n numbres are : ";
	for(i=0;i<n;i++)
	{
	  cout<<a[i]<<" ";
    } 
	for(i=0;i<n;i++)
	{
		 key=a[i];
	    for(k=i-1;k>=0&&key<a[k];k--)
 			{
 				t=a[k+1];
 				a[k+1]=a[k];
   				a[k]=t;
 			}
 		a[k+1]=key;
    }
	cout<<"\nsorted order : ";
 	for(i=0;i<n;i++)
 		{
 			cout<<a[i]<<" ";
 		}
}	
