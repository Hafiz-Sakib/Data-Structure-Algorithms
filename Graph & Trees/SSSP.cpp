//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;


vector<int>adj[maxx];
bool vis[maxx];
int dist[maxx];


 void dfs(int v,int d)
 {
     vis[v]=1;
     dist[v]=d;
     //cout<<v<< "->";
     for(auto child:adj[v])
     {
         if(!vis[child]) dfs(child,dist[v]+1);
     }
 }
 
void Boom()
{
    //Let's Move

       int node,edge;
       cin>>node>>edge;
   
       for(int i=0;i<edge;i++)
       {
           int n1,n2;
           cin>>n1>>n2;
           adj[n1].push_back(n2);
           adj[n2].push_back(n1);
       }
    
       dfs(1,0);

for(int i=1;i<=node;i++)cout<<dist[i]<<sp;

   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif


    int t=1;
    //cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 
