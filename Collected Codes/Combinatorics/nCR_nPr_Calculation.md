## nCR _ nPr 


<br>

ReSource : 
<br>
<ul>
    <li> https://www.youtube.com/watch?v=4HvoYmYQOeQ&list=PLk_DdB3uhk2AQalRT2sFhEtatiwaik_YJ&index=8 </li>
    <li> https://www.youtube.com/watch?v=-OPohCQqi_E </li>
</ul>

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
ll facto[1000006];

void modnor(ll &x){
    x = ((x%mod)+mod)%mod ;
}
ll modadd(ll x , ll y ){
    x%=mod , y%=mod ;
    modnor(x);modnor(y);
    return (x+y)%mod ;
}

ll modsub(ll x , ll y ){
    x%=mod , y%=mod ;
    modnor(x);modnor(y);
    x-=y;
    modnor(x);
    return x ;
}

ll modmul(ll x , ll y ){
    x%=mod , y%=mod ;
    modnor(x);modnor(y);
    return (x*y)%mod ;
}

ll modpow(ll a , ll b ){
    //cout << a <<" "<<b << endl;
    ll res = 1 ;
    while(b){
        if(b&1) res = modmul(res,a);
        a = modmul(a,a);
        b >>= 1 ;
    }
    return res ;
}

ll modinverse(ll x){
    return modpow(x,mod-2);
}

ll moddiv( ll x , ll y ){
    return modmul(x,modinverse(y));
}


void factorial(){
    facto[0] = 1 ;
    fr(i,1,1000006){
        facto[i] = modmul(facto[i-1],i);
    }
}

ll ncr( ll n , ll r ){
    // n! / r!*(n-r)!
    return modmul( facto[n] , modinverse( modmul(facto[r] , facto[n-r] ) ) );
}

ll npr(ll n , ll r ){
    // n! / (n-r)!
    return modmul( facto[n] , modinverse(facto[n-r]) );
}


int main(){
    ll n , r  ;
    factorial();

    cin >> n >> r ;

    cout << ncr(n,r) << endl;

    cout << npr(n,r) << endl;



return 0 ;
}

```
