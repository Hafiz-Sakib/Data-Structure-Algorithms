//dfs

void dfs(int v)
{
    color[v]=1;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!color[child]) dfs(child);
    }
}