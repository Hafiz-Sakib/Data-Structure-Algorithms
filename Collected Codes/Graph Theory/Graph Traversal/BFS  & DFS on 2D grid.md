## Traversal on 2D Grid

<details> 
    
<summary> BFS </summary>
    
```
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<int,int>
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll x[] = {-1,1,0,0} ;
ll y[] = {0,0,-1,1};
ll vis[1001][1001] , n , m , a[1001][1001] , level[1001][1001];
map<pii,pii>parent;

int main(){

    cin >> n >> m ;

    fr(i,0,n){
        fr(j,0,m){
            cin >> a[i][j];
        }
    }

    queue<pair<ll,ll>>q ;
    q.push({0,0});



    while(!q.empty()){
        auto p = q.front();
        ll i = p.first , j = p.second ;
        q.pop();

        fr(k,0,4){
            ll nx = i+x[k] , ny = j+y[k] ;
            if( nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny]  && a[nx][ny] != "Obstacle" ){
                vis[nx][ny] = 1 ;
                q.push({nx,ny});
                level[nx][ny] = level[i][j]+1;
                parent[{nx,ny}] = {i,j};

            }

        }
    }

return 0 ;
}





```
    
</details>     
    
<details> 
    
<summary> DFS </summary>
    
```
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<int,int>
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll x[] = {-1,1,0,0} ;
ll y[] = {0,0,-1,1};
ll vis[1001][1001] , n , m , a[1001][1001] , level[1001][1001];
map<pii,pii>parent;


void dfs(ll i , ll j ){

    vis[i][j] = 1 ; 
    
     fr(k,0,4){
        ll nx = i+x[k] , ny = j+y[k] ;
        if( nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && a[nx][ny] != "Obstacle" ) {
           dfs(nx,ny); 
        }
    }
    
}

int main(){

    cin >> n >> m ;

    fr(i,0,n){
        fr(j,0,m){
            cin >> a[i][j];
        }
    }
    
    dfs(source_X , source_Y) ; 


return 0 ;
}





    
```
   
</details>  
    

<details> 
    
<summary> Source :  </summary>
    
 https://www.youtube.com/watch?v=V-w2ur2kVh0
 
   Safaets Planet - USe Direction array
    
</details>
    
