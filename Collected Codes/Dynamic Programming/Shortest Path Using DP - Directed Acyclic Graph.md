/*
If a graph has a Cycle no matter is it positive or negative , this program do not work actually . It will Work iff 
the cycle is A Directed Acyclic Graph ( DAG ) 

Source : http://www.shafaetsplanet.com/?p=1072

*/
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

const int mx = 1e5+5 ;

int node , edge , x , y , cst , cnt = 0  ;
vector < pair<int,int> > adj[mx] ;

int dp[mx] ;

int shortest_path ( int current_node ){

    cnt += 1 ;

    if ( current_node == node-1  ) return 0 ;
    if ( dp[current_node] != -1 ) return dp[ current_node ] ;

    int ret = INT_MAX ;
    for( auto a : adj[ current_node ] ){
        ret =  min ( ret , a.second + shortest_path( a.first ) );
    }
    return dp[ current_node ] = ret ;

}

int main(){

    cin >> node >> edge ;

    for ( int i = 1 ; i <= edge ; i++ ){
        cin >> x >> y >> cst ;
        adj[x].pb({ y , cst }) ;
    }

    memset( dp , -1 , sizeof(dp) );

    int ans = shortest_path (0);

    cout << ans << endl;
    cout << cnt << endl;


return 0;
}
/*
5 7
0 1 2
0 3 1
0 2 4
2 4 3
1 4 9
3 1 3
1 2 1
*/
```
