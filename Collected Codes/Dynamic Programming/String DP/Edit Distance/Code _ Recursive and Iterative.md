

### Iterative : 
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
string s , p ;
ll dp[5005][5005] ;

int main(){
    cin >> s >> p ;

    int d1 = s.size() , d2 = p.size() ;

    fr(i,0,d1+1) dp[i][0] = i ;
    fr(i,0,d2+1) dp[0][i] = i ;

    fr(i,1,d1+1){
        fr(j,1,d2+1){
            if ( s[i-1] == p[j-1] )  dp[i][j] = dp[i-1][j-1] ;
            else dp[i][j] = min (dp[i-1][j-1] , min(dp[i-1][j],dp[i][j-1])) + 1 ;
        }
    }

    cout << dp[d1][d2] << endl;

return 0 ;
}



```

### Recursive :

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
const ll sz = 5005 ;
string s , p ;
ll dp[sz][sz]  ;

int ed ( ll i , ll j ){
    
    if ( i < 0  ) return j+1 ;
    if ( j < 0 ) return i+1 ;
    if ( dp[i][j] != -1 ) return dp[i][j] ;

    if ( s[i] == p[j] ) return dp[i][j] = ed(i-1,j-1) ;
    else return dp[i][j] = 1 + min(ed(i-1,j-1) ,min( ed(i,j-1) , ed(i-1,j) )) ;
}


int main(){
    cin >> s >> p ;
    memset(dp,-1,sizeof(dp)) ;
    cout << ed(s.size()-1,p.size()-1) << endl;
return 0 ;
}




```
