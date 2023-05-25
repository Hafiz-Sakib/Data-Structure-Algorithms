### Code : Return LCS length and LCS itself 

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
    ll n , d , tmp  , pre = INT_MAX ;
    cin >> n ;
    ll ar[n] ;

    fr(i,0,n) cin >> ar[i] ;

    ll dp[n] ;
    fill (dp,dp+n,1);

    deque < int > lcs ;

    fr(i,1,n){
        fr(j,0,i){
            if ( ar[j] < ar[i]  ) dp[i] = max (dp[i],dp[j]+1);
        }
    }

    d = *max_element(dp,dp+n) ;
    tmp = d ;



    rfr(i,n-1,0){
        if ( !tmp ) break;
        if ( dp[i] == tmp && ar[i] < pre ){
            lcs.push_front(ar[i]);
            pre = ar[i] ;
            tmp-=1;
        }
    }

    for( auto a : lcs ) cout << a <<" "; cout <<endl;

return 0 ;
}




```

