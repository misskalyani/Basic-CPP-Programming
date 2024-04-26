#include<iostream>
#include<stdlib.h>
using namespace std;
int i, j, k, a, b, u, v, n, ne = 1;
int min, mincost = 0, cost[9][9], parent[9];
 
int find(int);
int check(int, int);
 
int main()
{
  int min;
  cout<<"\n";
 
  cout<<"limit:\n";
  cin>>n;
 
  cout<<"\nEnter edges:\n";
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      cin>>cost[i][j];
      if (cost[i][j] == 0)
        cost[i][j] = 999;
    }
  }
 
  cout<<"mst\n";
  while(ne<n)
  {
    for (i = 1, min = 999; i <= n; i++)
    {
      for (j = 1; j <= n; j++)
      {
        if (cost[i][j] < min)
        {
          min = cost[i][j];
          a = u = i;
          b = v = j;
        }
      }
    }
 
    u = find(u);
    v = find(v);
 
    if (check(u, v)==1)
    {
      cout<<ne++<<"edge("<<a<<","<<b<<") ="<<min<<"\n";;
      mincost += min;
    }
 
    cost[a][b] = cost[b][a] = 999;
  }
 
  cout<<"\nMinimum cost = "<< mincost;
  
}
 
int find(int i)
{
  while (parent[i])
    i = parent[i];
  return i;
}
 
int check(int i, int j)
{
  if (u != v)
  {
    parent[v] = u;
    return 1;
  }
 
  return 0;
}
