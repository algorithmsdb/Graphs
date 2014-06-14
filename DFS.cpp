#include<bits/stdc++.h>
using namespace std;

int visited[100000];
vector<int> adj[100000];
int V,E;

void DFS(int v)
{

    visited[v] = 1;
    cout << v << " ";
    vector<int>::iterator it;
    for(it = adj[v].begin(); it != adj[v].end(); ++it)
       {
       if(visited[*it]==0)
            {
            DFS(*it);
            }
       }

}


int main()
{

    cin>>V>>E;

    int a,b;
    for(int i=1;i<=E;i++)
    {
     scanf("%d%d",&a,&b);

     adj[a].push_back(b);
     adj[b].push_back(a);  // for bidirectional graph
    }

    int start;
    scanf("%d",&start);

    DFS(start);

}
