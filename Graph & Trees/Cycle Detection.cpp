//cycle detection

bool cycledet(int node ,int par)
{
    color[node]=1;
    for(int child:adj[node])
    {
        if(color[child]==0)
        {
            if(cycledet(child,node)==true)return true;
        }
        else 
        if(child!=par)return true;
    }
    return false;
}