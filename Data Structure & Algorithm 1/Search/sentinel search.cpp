#include<iostream>
using namespace std;
void sentinel(int a[],int num,int n)
{
    int last=a[n-1];
	int i=0;
	a[n-1]=num;	
	while(a[i]!=num)
	i++;
	if(i<n-1||num==last)
	cout<<"num found";
	else
	cout<<"not found";
}
int main()
{
	int i,n,num,a[100];
	cout<<"enter limit :: ";
	cin>>n;
	cout<<"enter n numbres";
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"\n enter num to search";
	cin>>num;
     sentinel(a,n,num);
}
