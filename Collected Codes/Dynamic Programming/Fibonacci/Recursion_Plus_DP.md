```

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int sz = 1e4+4;
ll cnt ;

ll dp[sz];

ll fibo ( ll n ){

    cnt += 1 ;

    if( n <= 1 ) return n;
    
    if(dp[n] != -1 ) return dp[n];
    
    dp[n] = fibo(n-1)+fibo(n-2);
    
    return dp[n];
}

int main(){

    fill( dp , dp+sz , -1 );

    ll n;
    
    cin >> n;
    
    ll ans = fibo ( n );

    cout<< ans <<endl;
    cout<< cnt <<endl;


return 0;
}

```
