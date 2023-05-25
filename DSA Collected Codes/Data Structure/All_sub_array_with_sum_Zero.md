### All Subarray with sum Zero 
<details>
  <summary> Explanation : </summary> 
  
  Link : https://www.geeksforgeeks.org/print-all-subarrays-with-0-sum/
  
  ![image](https://user-images.githubusercontent.com/63524824/209904935-a0a2a7e3-62d2-4260-83dc-ac465b6d8ac7.png)

  
</details>


<details>
  <summary> Code : </summary> 
  
  
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
    ll n , x , sm = 0 , total_subarray = 0 ;
    cin >> n ;

    map<ll,vector<ll>>mp;
    vector< pii > ans ;
    mp[0].pb(0);

    fr(i,1,n+1) {
        cin >>  x ;
        (sm+=x);
        mp[sm].pb(i);
    }

    for(auto a : mp ){
        ll d = a.se.size();
        total_subarray += (d*(d-1)/2);
        fr(i,0,d-1){
            fr(j,i+1,d){
                ans.pb({a.se[i]+1,a.se[j]});
            }
        }
    }
    cout << total_subarray << endl;
    for(auto a : ans ) cout << a.fi <<" "<< a.se << endl;


return 0 ;
}



  ```
  
  
</details>
