#include<bits/stdc++.h>
using namespace std;
#define inf 9999999
int main()
{

    int n,m;        // n is number of vertices, m is the number of edges
    cin>>n>>m;

    int graph[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            {
                if(i==j) graph[i][j]=0;
                else graph[i][j]=inf;
            }
    }

    int u,v,w;
    for(int i=1;i<=m;i++)
    {
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w; // for bidirectional graph
    }


    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                graph[i][j]=min(graph[i][j], graph[i][k]+graph[k][j]);

            }
        }
    }

}



