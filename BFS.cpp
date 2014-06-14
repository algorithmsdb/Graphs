#include<bits/stdc++.h>
using namespace std;
int V,E;

vector<int> adj[100000];
int visited[100000];

void BFS(int s)
{
    queue<int> q;

    visited[s] = 1;
    q.push(s);

    vector<int>::iterator it;

    while(q.empty()==0)
    {
        s = q.front();
        cout << s << " ";
        q.pop();

        for(it = adj[s].begin(); it != adj[s].end(); ++it)
        {
            if(visited[*it]==0)
            {
                visited[*it] = 1;
                q.push(*it);
            }
        }
    }
}

int main()
{

    cin>>V>>E;

    int a,b;
    for(int i=1;i<=E;i++)
    {
    cin>>a>>b;

    adj[a].push_back(b);
    adj[b].push_back(a);
    }

    int start;
    cin>>start;

    BFS(start);

}
