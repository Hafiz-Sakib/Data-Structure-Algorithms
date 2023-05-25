
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;


ll pathCompression ( ll parent[] , ll n ){
    if( parent[n] < 0 ) return n ;
    parent[n] = pathCompression(parent,parent[n]);
}


void DSU (ll parent[] , vector<pair<ll,pair<ll,ll>>>graph ){

    for(auto a : graph ){
        ll x = a.second.first ;
        ll y = a.second.second ;

        while( parent[x] > 0 || parent[y] > 0 ){
            if( parent[x] > 0 ) x = parent[x];
            if( parent[y] > 0 ) y = parent[y];
        }

        if( x != y ) {
            if( parent[x] <= parent[y]){
                parent[x]+=parent[y] ;
                parent[y] = x ;
            }
            else {
                parent[y]+=parent[x] ;
                parent[x] = y ;
            }
        }
    }

}



int main(){

    #ifndef CP
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll n , e , x , y , cost ;
    cin >> n >> e ;

    vector < pair<ll ,pair<ll,ll>>  > graph  ;

    fr(i,0,e){
        cin >> x >> y >> cost ;
        graph.pb({cost,{x,y}});
    }

    sort(graph.begin(),graph.end());


    ll parent[n+1];
    memset(parent,-1,sizeof(parent));

    DSU(parent,graph);


    
    for(int i = 1 ; i <= n ; i++ )
        cout << parent[i] <<" " ; cout << endl;

    for(int i = 1 ; i <= n ; i++ ){
        pathCompression(parent,i);
        cout << parent[i] <<" "; 
    }
    cout << endl;




return 0 ;
}

/*

    Collapsing Find / Path Compression :  Making all the node with same parent here .
    For given Graph Below :

       parent[] = { -8 1 1 3 1 5 1 7 }

       Here , Node_8's parent is 7 and Node_7's parent is 1 . We can make
       the parent of Node_8 is 1 , which may help us to find a cycle IN Case Of
       MST.
       This is known as Collapsing Find. It's also known as Path Compression .

    for(int i = 1 ; i <= n ; i++ ){
        x = i ;
        if( parent[i] > 0 ){
            while( parent[x] > 0 ) x = parent[x];
            parent[i] = x;
        }
    }

    */

/*
8 9
1 2 1
1 3 7
2 4 5
2 5 6
3 4 2
5 6 3
5 7 9
6 8 8
7 8 4

*/
