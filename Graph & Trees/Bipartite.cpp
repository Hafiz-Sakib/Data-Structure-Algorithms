bool biper(int v,int c)
{
    color[v]=1;
    col[v]=c;
    for(int child:adj[v])
    {
        if(color[child==0])
        {
            if(biper(child,c^1)==false)return false;
            else if(col[v]==col[child])return false;
        }
    }
    return true;
}
