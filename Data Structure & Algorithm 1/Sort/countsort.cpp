#include<iostream>
using namespace std;
void count(int a[],int k,int n)
{
	int c[100]={0},i,b[20];
	for(i=0;i<n;i++)
	c[a[i]]=c[a[i]]+1;
	for(i=1;i<=k;i++)
	c[i]=c[i]+c[i-1];
	for(i=n-1;i>=0;i--)
	{
		b[c[a[i]]-1]=a[i];
		c[a[i]]=c[a[i]]-1;
	}
	cout<<"\nsorted array :: ";
	for(i=0;i<n;i++)
	cout<<b[i]<<" ";
}
int main()
{
	int a[10],i,k,n;
	cout<<"enter limit : ";
	cin>>n;
    cout<<"enter range : ";
	cin>>k;
	cout<<"enter numbres are :: ";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"numbres are :: ";
    for(i=0;i<n;i++)
    cout<<a[i]<<" ";
    count(a,k,n);
}

