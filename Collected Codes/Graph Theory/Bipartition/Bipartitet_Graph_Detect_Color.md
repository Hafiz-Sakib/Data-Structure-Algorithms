
<details>
  <summary> Explanation : </summary>
  <b> Link : https://www.youtube.com/watch?v=MtFPqCcsoeA&list=PL2q4fbVm1Ik6DCzm9XZJbNwyHtHGclcEh&index=9 </b>
</details>

<details>
  <summary> Problem Link: </summary>
   <b> Link : https://cses.fi/problemset/task/1668 </b> <br>
   <b> Link : https://codeforces.com/problemset/problem/862/B </b>
</details>

<details>
  <summary> Code: </summary>
  
  ```
  
  #include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
const ll sz = 1e5+5 ;
vector < ll > graph[sz] , vis(sz,0) , grpcol(sz,-1);

bool dfs(ll node , ll col ){

    //cout << node <<" "<< col << endl;

    vis[node] = 1 ;
    grpcol[node] = col ;

    for(auto a : graph[node] ){
        if ( vis[a] ){
            if ( grpcol[a] == grpcol[node] ) return false ;
        }
        else {
            ll val =  col == 1 ? col+1 : col-1;
            if ( !dfs(a,val) ) return false ;
        }
    }
    return true ;
}


int main(){
    ll n , m , x , y , fg = 1 ;
    cin >> n >> m ;

    fr(i,0,m){
        cin >> x >> y ;
        graph[x].pb(y);
        graph[y].pb(x);
    }
/*
    fr(i,1,n+1){
        cout << i <<" : ";
        for(auto a : graph[i] ) cout << a <<" "; cout << endl;
    }
*/

    fr(i,1,n+1){
        if(!vis[i]) {
            if(!dfs(i,1)) {
                fg = 0 ;
                break;
            }
        }
    }

    if(fg) {
        fr(i,1,n+1) cout << grpcol[i] <<" "; cout << endl;
    }
    else cout <<"IMPOSSIBLE\n";


return 0 ;
}



  
  ```
</details>

