
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


int main(){
    string s ,p  ;
    cin >> s >> p ;

    ll dp[s.size()+1][p.size()+1] ;

    memset(dp,0,sizeof(dp)) ;

    fr(i,0,s.size()){
        fr(j,0,p.size()){
            if (s[i] == p[j]){
                dp[i+1][j+1] = dp[i][j]  + 1  ;
            }
            else {
                dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
            }
        }
    }

    fr(i,0,s.size()+1){
        fr(j,0,p.size()+1){
            cout << dp[i][j] <<" ";
        }
        cout << endl;
    }

    cout <<"LCS : " << dp[s.size()][p.size()] << endl;


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

const ll sz = 1e3+5;
string s , p ;
ll cnt = 0 ;
ll dp[sz][sz];

ll lcs( ll i , ll j ){
    
    //cout << i <<" "<< j << endl;
    //cnt+=1;
    
    if ( i == s.size() || j == p.size() ) return 0 ;
    
    if ( dp[i][j] != -1 ) return dp[i][j] ;

    if ( s[i] == p[j] ) return dp[i][j] = 1+lcs(i+1,j+1) ;
    
    else return dp[i][j] = max(lcs(i+1,j),lcs(i,j+1));
    
}


int main(){
    
    cin >> s >> p ;
    memset(dp,-1,sizeof(dp));
    cout << lcs(0,0) << endl;
    //cout << cnt << endl;

return 0 ;
}



```
