#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

map<ll,pair<ll,ll>>discover_finish ;
ll n , e  , x , y , t ;

void dfs(ll i , vector<ll> graph[] ,ll *vis ){
    if ( !vis[i] ){
        ll p , q ;
        p = ++t ;
        vis[i] = 1 ;
        for( auto a : graph[i] )
            if( !vis[a] ) dfs(a,graph,vis);
        q = ++t ;
        discover_finish[i] = {p,q} ;
    }

}



int main(){
    
    cin >> n >> e ;

    vector < ll > graph[n+1] ;
    ll vis[n+1];
    memset(vis,0,sizeof(vis));

    fr(i,0,e) {
        cin >> x >> y ;
        graph[x].pb(y);
        graph[y].pb(x) ;
    }

    fr(i,1,n+1){
        if(!vis[i])
            dfs(i,graph,vis);
    }
    
/*
    cout << endl;

    for( auto a : discover_finish ){
        cout << a.first <<" : " << a.second.first <<" "<< a.second.second << endl;
    }
*/

return 0 ;
}
/*
9 10
1 2
1 4
1 6
2 8
3 8
3 4
4 5
5 9
3 6
6 7
*/

