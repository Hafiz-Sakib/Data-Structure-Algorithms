//Problem Link: https://www.spoj.com/problems/PPATH/
//Sollution:
// took all 4 digit prime number and build a graph with those number
// whose one digit is different..


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
#define www fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("/home/mozahed/Documents/Love/input.txt", "r", stdin)
#define Output freopen("/home/mozahed/Documents/Love/output.txt", "w", stdout)
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
vector<int>prime;
bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i = i + 6)
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
      
        return true;
    }
   bool isvalid(int a,int b)
   {
    int cnt =0;
    while(a)
    {
        if(a%10!=b%10)cnt++;
        a=a/10;
        b=b/10;
    }
    if(cnt==1)return true;
    else return false;
   }


void buildgrp()
{

    for(int i=0;i<prime.size();i++)
    {
        for(int j=i+1;j<prime.size();j++)
        {
            int a=prime[i];
            int b=prime[j];
            if(isvalid(a,b))
            {
                adj[a].pb(b);
                adj[b].pb(a);
            }
        }
    }
}
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
            }
        }
    }
}


void Boom()
{
    //Let's Move
    int a,b;
    cin>>a>>b;
    for(int i=1000;i<10000;i++)dist[i]=-1;
    memset(vis,0,sizeof(vis));
    bfs(a);
    if(dist[b]==-1)cout<<"Impossible"<<dl;
    else cout<<dist[b]<<dl;

}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif

    for(int i=1000;i<10000;i++)
    {
        if(isPrime(i))
        {
            prime.pb(i);
        }
        //dist[i]=-1;
    }
    buildgrp();
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 
  

