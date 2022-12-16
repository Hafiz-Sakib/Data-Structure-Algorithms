//finding dia meter of a tree
//longest path of a tree

int maxD,maxNode;
void longestpath(int node,int d)
{
    color[node]=1;
    if(d>maxD)maxD=d,maxNode=node;

    for(int child :adj[node])
    {
        if(color[child]==0)
        {
            longestpath(child,d+1)
        }
    }
}

int main()
{
    //***grp__input
    maxD=-1;
    longestpath(1,0);
    memset(color,0,sizeof(color));
    maxD=-1;
    longestpath(maxNode,0);
    cout<<maxD;
}
