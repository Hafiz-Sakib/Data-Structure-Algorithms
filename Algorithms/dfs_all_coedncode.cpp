//dfs

vector<int>adj[max];
bool vis[max];

void dfs(int v)
{
    vis[v]=1;
    //cout<<v<< "->";
    for(auto child:adj[v])
    {
        if(!vis[child]) dfs(child);
    }
}

//bipartited

bool biper(int v,int c)
{
	vis[v]=1;
	col[v]=c;
	for(int child:adj[v])
	{
		if(vis[child==0])
		{
			if(biper(child,c^1)==false)return false;
			else if(col[v]==col[child])return false;
		}
	}
	return true;
}

//cycle detection

bool cycledet(int node ,int par)
{
	vis[node]=1;
	for(int child:adj[node])
	{
		if(vis[child]==0)
		{
			if(cycledet(child,node)==true)return true;
		}
		else if(child!=par)return true;
	}
	return false;
}

//in out time of node
 		
 		/*given two nodes,
 		find whether one 
 		node lies in the
 		subtree of other node*/

int timer=1;
bool subtree(int n)
{
	vis[v]=1;
	in[v]=timer++;
	for(int child:adj[v])
	{
		if(vis[child]==0)subtree(child);
	}
	out[v]=timer++;

}

//finding dia meter of a tree
//longest path of a tree

int maxD,maxNode;
void longestpath(int node,int d)
{
	vis[node]=1;
	if(d>maxD)maxD=d,maxNode=node;

	for(int child :adj[node])
	{
		if(vis[child]==0)
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
	memset(vis,0,sizeof(vis));
	maxD=-1;
	longestpath(maxNode,0);
	cout<<maxD;
}




//subtree size

int subtree(int node)
{
	vis[node]=1;
	int curr_size=1;
	for(int child:adj[node])
	{
		if(vis[child]==0)
		{
			curr_size=curr_size+subtree(child)
		}
		subsize[node]=curr_size;
		return curr_size;
	}
}
