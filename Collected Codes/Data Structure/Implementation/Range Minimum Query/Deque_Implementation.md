### Problem Statement : 

![image](https://user-images.githubusercontent.com/63524824/221290222-012c849d-bee3-4f5e-83f0-e3b2406500db.png)


### Expalantion : 

  Link : http://www.shafaetsplanet.com/?p=2316
  
  
### Code : 


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
#define pii            pair<ll,ll>
#define ff             first
#define ss             second
#define mod            1000000000000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main() {
    ll n , m ;
    cin >> n >> m ;

    ll a[n];
    fr(i,0,n) cin >> a[i];

    vector<ll>ans ;
    deque<pii>dq  ;

    fr(i,0,n){

        while(dq.size()){
            if (  dq.front().ff <= a[i] ) break;
            dq.pop_front();
        }

        dq.push_front({a[i],i+1});

        while( i+1-dq.back().ss >= m) dq.pop_back();

        if(i+1>=m) ans.pb(dq.back().ff);


       // for(auto x : dq ) cout << x.ff << " " << x.ss << " | "; cout << endl;

    }

    for(auto  x : ans ) cout << x <<  " " ; cout << endl;


return 0 ;
}



```
