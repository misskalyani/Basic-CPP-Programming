#include<iostream>
using namespace std;
int main()
{
	int a[20][20],i,n,j,sum_indegree,sum_outdegree,total;
	cout<<"Enter Limit : ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			a[i][j]=0;
			if(i!=j)
			{
				cout<<"Enter Edge Betwwen v"<<i<<"v : "<<j;
				cin>>a[i][j];
			}
		}
	}
	cout<<"\nAjacency Matrix::\n ";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<"\t"<<a[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nVertex\tsum of indegree\tsum of outdegree\ttotal\n";
	for(i=1;i<=n;i++)
	{
		sum_indegree=sum_outdegree=0;
		for(j=1;j<=n;j++)
		{
			sum_indegree=sum_indegree+a[j][i];
			sum_outdegree=sum_outdegree+a[i][j];
		}
		cout<<"\nv"<<i<<"\t"<<"\t"<<sum_indegree<<"\t"<<sum_outdegree<<"\t"<<"\t"<<sum_indegree+sum_outdegree;
	}
}
