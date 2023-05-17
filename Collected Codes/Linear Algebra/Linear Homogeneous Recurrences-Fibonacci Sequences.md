
![Screenshot from 2022-11-13 02-59-45](https://user-images.githubusercontent.com/63524824/201494376-f5b99983-8c65-4168-848c-517fe3cebcc0.png)


```

#include<bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

vector<vector<ll>> mat_mul ( vector<vector<ll>>fi , vector<vector<ll>>se ){
    vector<vector<ll>>res;
    fr(i,0,2){
        vector<ll>vec;
        fr(j,0,2){
            ll d = 0 ;
            fr(k,0,2){
                d += ((fi[i][k]%mod) * (se[k][j]%mod)%mod) ;
                d%=mod;
            }
            vec.pb(d);
        }
        res.pb(vec);
    }
    return res ;
}


int main(){

    ll n ;
    cin >> n ;

    ll d = n-1 ;

    vector< vector<ll> >res = {{1,0},{0,1}} , a = {{1,1},{1,0}} ;

    while(d>0){

        if(d&1) res = mat_mul(res,a);

        a = mat_mul(a,a);

        d >>= 1 ;
    }

    cout << res[0][0] << endl;


return 0 ;
}

```
