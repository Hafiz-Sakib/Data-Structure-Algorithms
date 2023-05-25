<details>
<summary> Explanation : </summary>
    Floyd Warshall's Algorithm is used to find the shortest paths between between all pairs of vertices in a graph, where each edge in the graph has a weight which is positive or negative.
</details>

<details>
<summary> Complexity : </summary>
    O(N<sup>3</sup>) , Where N = Number of Nodes/Vertices in Graph
</details>

<details>
<summary> Algorithm Steps : </summary>
<ol>
    <li>Initialize the shortest paths between any  vertices with Infinity.</li>
<li>Find all pair shortest paths that use  intermediate vertices, then find the shortest paths that use  intermediate vertex and so on.. until using all  vertices as intermediate nodes.</li>
<li>Minimize the shortest paths between any  pairs in the previous operation.</li>
<li>For any  vertices  , one should actually minimize the distances between this pair using the first  nodes, so the shortest path will be:  adj[i][j] = min( adj[i][j] , adj[i][k] + adj[k][j] </li>
  </ol>  
</details>

<details>
<summary> Code : </summary>


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
const ll sz = 1e3+5 ;
ll adj[sz][sz] , x , y , cost , n , e ;

void init(int n){
    fr(i,1,n+1){
        fr(j,1,n+1){
            adj[i][j] = (i!=j)? INT_MAX : 0 ;
        }
    }
}


int main(){

    cin >> n >> e ;
    init(n);

    fr(i,0,e){
        cin >> x >> y >> cost ;
        adj[x][y] = cost;
    }

    fr(k,1,n+1){
        fr(i,1,n+1){
            fr(j,1,n+1){
               adj[i][j] = min(adj[i][j] , adj[i][k]+adj[k][j]);
            }
        }
    }

    // All pair Shortest Path - Adjacency Matrix Rep:
    fr(i,1,n+1){
        fr(j,1,n+1){
              cout << adj[i][j] <<" ";
        }
        cout << endl;
    }


return 0 ;
}

/*
5 6
1 2 2
2 3 1
1 3 1
1 4 3
4 5 2
5 3 5
*/





```

</details>
