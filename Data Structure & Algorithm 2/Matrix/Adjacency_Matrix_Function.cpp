#include<iostream>
using namespace std;
void indegree(int a[20][20],int n)
{
	int i,j,ind;
	cout<<"\nIndeggre";
	for(i=1;i<=n;i++)
	{
		ind=0;
		for(j=1;j<=n;j++)
		{
			ind=ind+a[j][i];
		}
		cout<<"\nv"<<i<<" = "<<ind;
		
	}
	
}
void outdegree(int a[20][20],int n)
{ 
	int i,j,outd;
	cout<<"\n\nOutdegree";
	for(i=1;i<=n;i++)
	{
		outd=0;
		for(j=1;j<=n;j++)
		{
			outd=outd+a[i][j];
		}
		cout<<"\nv"<<i<<" = "<<outd;
		
	}
	
}
void totaldegree(int a[20][20],int n)
{
	int i,j,total;
	cout<<"\n\nTotalDeggre";
	for(i=1;i<=n;i++)
	{
		total=0;
		for(j=1;j<=n;j++)
		{
			total=total+a[i][j]+a[j][i];
		}
		cout<<"\nv"<<i<<" = "<<total;
		
	}
	
}
int main()
{
	int a[20][20],i,n,j;
	cout<<"Enter Limit : ";
	cin>>n;
	cout<<"Enter Graph in the matrix format : \n ";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
		
	}
   indegree(a,n);
   outdegree(a,n);
   totaldegree(a,n);

}
