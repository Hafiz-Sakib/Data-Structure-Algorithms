#include<bits/stdc++.h>
using namespace std;
#define max 100005

vector<int>adj[max];
bool color[max];

void dfs(int v)
{
    color[v]=1;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!color[child]) dfs(child);
    }
}

int main()
{

    int node,edge;
    cin>>node>>edge;
/*  for(int i=0;i<node;i++)
    {
        adj[i].clear();
        color[i]=0;
    }
*/
    for(int i=0;i<edge;i++)
    {
        int n1,n2; //two nodes that colore connected with edge i.
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1); //if the graph is directed then this line will not applied.
    }

    dfs(0);
}
