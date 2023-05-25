<details> 
  <summary> Basic  :  </summary>
  
  Link : http://www.shafaetsplanet.com/?p=763
  
  </details> 


<details> 
  <summary> Code :  </summary>
  
Another Code link : https://github.com/Sajjad-Hossain-Talukder/DataStructures-and-Algorithms/blob/main/Data%20Structure/Implementation/Disjoint%20Set%20Union/Code.cpp
  
```

ll par[100] , cnt[100];

ll findpar( ll i ){
    if ( par[i] == i ) return i ;
    par[i] = findpar(par[i]);
    return par[i] ;
}

void union_node( ll x , ll y ){
    ll par_x =findpar(x);
    ll par_y =findpar(y);
    if(par_x != par_y){
        if( cnt[par_x] < cnt[par_y] ) swap( par_x , par_y ) ;                          
        par[par_y] = par_x ;
        cnt[par_x]+=cnt[par_y];
    }
}

int main() {

    ll n , m ;
    cin >> n >> m ;

    fr(i,1,n+1) {
        par[i] = i ;
        cnt[i] = 0 ;
    }

    fr(i,0,m){
        ll x , y ;
        cin >> x >> y ;
        union_node(x,y);
    }

    fr(i,1,n+1) cout <<par[i] <<" " ;

return 0 ;
}


  
```
  
  
  </details> 



<details> 
  <summary> Problem List: </summary> 
  
  list :
  
  
  1 ) https://codeforces.com/contest/1263/problem/D
  
  2 ) https://codeforces.com/problemset/problem/1559/D1
  
  
  </details> 
