#include<bits/stdc++.h>
using namespace std;
#define  max 100005 // max will highest number of nodes that can be.
vector<int>adj[max];
int main()
{
    int node,edge;
    cin>>node>>edge;

    for(int i=0;i<edge;i++)
    {
        int n1,n2;//two nodes thatare connected with edge i.
        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);//if the graph is directed then this line will not applied.
    }

    for(int i=0;i<node;i++)
    {
        cout<<"Adjacent list of : "<<i<<"->";
        for(auto j:adj[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

}