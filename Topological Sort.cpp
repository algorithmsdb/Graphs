#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100000];
int visited[100000];
stack<int> Stack;
int V,E;

void topologicalSort(int v)
{
    visited[v] = 1;

    vector<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
        if (visited[*it]==0)
            topologicalSort(*it);

    Stack.push(v);
}


int main()
{
    cin>>V>>E;

    int a,b;
    for(int i=1;i<=E;i++)
        {
        cin>>a>>b;
        adj[a].push_back(b);
        }

    cout<<"\n\n";

    for (int i = 1; i <=V; i++)
      if (visited[i] == 0)
        topologicalSort(i);

    while (Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }

}
