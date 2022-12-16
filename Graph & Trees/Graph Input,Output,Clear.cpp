//total array

vector<int>adj[maxx];
bool color[maxx];
//int level[maxx];


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


//grp clear

for(int i=0;i<node;i++)
{
    adj[i].clear();
    color[i]=0;
    //level[i]=0;
}

