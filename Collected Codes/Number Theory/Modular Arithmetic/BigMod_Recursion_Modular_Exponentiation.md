
## Bigmod 
##### Source : https://cp-algorithms.com/algebra/binary-exp.html#implementation

<details> 
    <summary> Recursive Process : </summary> 
  
```

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll bigmod ( ll a , ll b , ll m){
    if(!b) return 1%m ;
    ll ans = bigmod(a,b/2,m);
    ans = (ans*ans)%m;
    if(b&1) ans = (ans*a)%m;
    return ans ;
}

int main(){
    ll a,b,m,d;
    cin>>a>>b>>m;
    d = bigmod(a,b,m);
    cout<<d<<endl;
return 0;
}

```

</details>  
    
<details> 
    <summary> Iterative Process : </summary> 


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


int main(){
    ll a , b , m , res = 1 ;
    cin >> a >> b >> m ;

    while ( b > 0 ){
        if (b&1) res = ( ( res % mod ) * ( a % mod ) ) % mod ;
        a = ( ( a % mod ) * ( a % mod) ) % mod ;
        b >>= 1 ;
    }
    cout << res << endl;


return 0 ;
}



    
 ```
    
</details>  
