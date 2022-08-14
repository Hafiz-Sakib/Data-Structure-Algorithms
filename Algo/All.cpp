//BFS

vector<int>adj[maxx];
bool vis[maxx];
int dist[maxx];
int path[maxx];

void bfs(int src)
{
	queue<int>q;
	q.push(src);
	vis[src]=1;
	dist[src]=0;
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();

		for(int child : adj[curr])
		{
			if(vis[child]==0)
			{
				q.push(child);
				dist[child]=dist[curr]+1;
				vis[child]=1;
				//path[child]=curr;
			}
		}
	}
}



\\Finding  Brideges

int in[maxx],low[maxx];
bool vis[maxx];
int time=0;
void dfs (int node,int par) //dfs(1,-1)
{
	vis[node]=1;
	in[node]=low[node]=timer++;
	for(int child : adj[node])
	{
		if(child==par)continue;
		if(vis[child]==1)
		{
			//edge node - child is a back edge
			low[node]=min(low[node],in[child]);
		}
		else
		{
			// edge node -child forward edge
			dfs(child,node);
			if(low[child]>in[node])
				cout<<node<<sp<<child<<" is  a Brideges"<<endl;

			low[node]=min(low[node],in[child]);
		}
	}
}




