//in out time of node

/*given two nodes,
find whether one 
node lies in the
subtree of other node*/

//node y is a subtree of node x
//in time   x>y
//out time  x<y

int timer=1;
bool subtree(int v)
{
    color[v]=1;
    in[v]=timer++;
    for(int child:adj[v])
    {
        if(color[child]==0)subtree(child);
    }
    out[v]=timer++;

}