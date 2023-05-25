**Code : Iterative : Space Optimized**

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
ll dp[2][5005] ;

int main(){
    cin >> s >> p ;

    int d1 = s.size() , d2 = p.size() ;

    fr(i,0,d2+1) dp[0][i] = i ;

    fr(i,1,d1+1){

        bool ind = (i&1) ? 1 : 0 ;
        dp[ind][0] = i ;

        fr(j,1,d2+1){
            if ( s[i-1] == p[j-1] )  dp[ind][j] = dp[!ind][j-1] ;
            else dp[ind][j] = min (dp[!ind][j-1] , min(dp[!ind][j],dp[ind][j-1])) + 1 ;
        }

    }

    cout << dp[d1&1][d2] << endl;

return 0 ;
}



```
