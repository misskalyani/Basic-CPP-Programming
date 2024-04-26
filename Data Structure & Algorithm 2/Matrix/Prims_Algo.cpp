#include<iostream>
#include<conio.h>
using namespace std;
int i,n,j,min,u,v,a,b;	
int cost[10][10],visited[10]= {0},ne=1,mincost=0;
int main()
{
	int i,n,j,min,u,v,a,b;	
	cout<<"\nEnter n Number Of Vertex : ";
	scanf("%d",&n);
	cout<<"\nEnter Graph in the matrix format : \n ";
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
			cost[i][j]=999;
		}
		
     }
     cout<<"\nAdjacency Matrix :: \n";
     for(i=1;i<=n;i++)
     {
     	for(j=1;j<=n;j++)
     	{
     		cout<<"\t"<<cost[i][j];
		}
		 cout<<"\n";
	 }
		visited[1]=1;
		cout<<"\n";
		for(ne=1;ne<=n;ne++)
		{
			min=999;
			for(i=1;i<=n;i++)
			{	
				for(j=1;j<=n;j++)
				{
				
					if(cost[i][j]<min && visited[j]==0)
					{
				    	min=cost[i][j];
						a=u=i;
						b=v=j;	
					}
				}
			}
					if(visited[u]==0 || visited[v]==0)
					{
						cout<<"\n Edge "<<ne<<" : ("<<a<<","<<b<<") min : "<<min;
						mincost+=min;
						visited[v]=1;
					}
					cost[a][b]=cost[b][a]=999;
		        
		}
		cout<<"\n Minimum Cost = "<<mincost;
	
}
