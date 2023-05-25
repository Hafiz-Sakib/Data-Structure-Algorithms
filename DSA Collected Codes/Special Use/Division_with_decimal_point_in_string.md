
### Division to avoid Double precision

In case of division of floating value, we have to always face precision error. It can be replacement of precision error in string format. 

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
#define fi             first
#define se             second
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){
    ll n , m , place_after_decimal = 20 ; 
    cin >> n >> m ; 
    
    ll d = n/m;
    string s = "";
    while( d ){
        s+=(char)(d%10+48);
        d/=10 ;
    }
    s+='.';
    n %= m ;
    while(place_after_decimal--){
        n*=10 ;
        s += (char)(n/m+48);
        n%=m ;
    }
    
    cout << "Result : " << s << endl;
    // if result is negative , it will add a * at first position instead of - //

return 0 ;
}




```
