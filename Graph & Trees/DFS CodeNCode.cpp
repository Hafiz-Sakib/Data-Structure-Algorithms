//total array

vector<int>adj[maxx];
bool vis[maxx];

//grp input

int node,edge;
cin>>node>>edge;
for(int i=0;i<edge;i++)
{
	int n1,n2; //two nodes that colore connected with edge i.
	cin>>n1>>n2;
	adj[n1].push_back(n2);
	adj[n2].push_back(n1); //if the graph is directed then this line will not applied.
}
 
//grp output

for(int i=0;i<node;i++)
{
	cout<<"Adjacent list of : "<<i<<"->";
	for(auto j:adj[i])
	{
		cout<<j<<" ";
	}
	cout<<endl;
}


//adj and vis array clear

for(int i=0;i<node;i++)
{
	adj[i].clear();
	color[i]=0;
}


//dfs

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
		else 
		if(child!=par)return true;
	}
	return false;
}

//in out time of node

/*given two nodes,
find whether one 
node lies in the
subtree of other node*/

//node y is a subtree of node x
//in time 	x>y
//out time	x<y

int timer=1;
bool subtree(int v)
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
