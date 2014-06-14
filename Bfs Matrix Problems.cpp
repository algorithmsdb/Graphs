#include<bits/stdc++.h>
using namespace std;
struct node
{
int x,y;
};

int main()
{

int t,n,m;
char str[1000][1000];
vector<node> adj[100][100];

cin>>t;

while(t--)
    {
    cin>>m>>n;
    for(int i=0;i<m;i++)
        scanf("%s",str[i]);

    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            {

                for(int p=i-1;p<=(i+1);p++)
                    {
                    for(int q=j-1;q<=(j+1);q++)
                        {
                        if((p!=i && q!=j) && (p>=0 && p<n && q>=0 && q<m))
                            {
                            adj[i][j].push_back((node){p,q});
                            }
                        }
                    }

            }
        }
        
        
        

        }


}


