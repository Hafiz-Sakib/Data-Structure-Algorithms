<details> 
  <summary>Explanation : </summary>
  
  
    Source : http://www.shafaetsplanet.com/?p=3416
  
    <img src="../sqExp.png">
    
</details> 
<details> 
  <summary>Query on a range for Sum-Max-Min  | Update indivuidual | Update Range  : </summary>
  
  ##### Building Segment : O ( N ) 
  ##### Update Individual : O ( 1 ) 
  ##### Update Range: O ( Sqrt(N) ) 
  ##### Query :  O ( Sqrt(N) ) 
  
  
```
  
    
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,0,sizeof(a))
#define pii            pair<ll,ll>
#define ff             first
#define ss             second
#define mod            1000000000000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;
ll a[1000], seg[1000] , n , seg_size , k ,upd[1000], updRan[1000];

// Build Segment
void buildSegment(){
    seg_size = sqrt(n) , k = -1 ;
    mem1(seg);
    fr(i,0,n){
        if(i%seg_size==0) k+=1;
        seg[k]+=a[i];
    }
}

// Query operation with updated value
ll query( ll l , ll r ){
    ll ans = 0 ;
    while( l < r && l%seg_size != 0  ) {
        ans += (a[l]+upd[l]+updRan[l/seg_size]);
        l+=1;
    }

    while(l+seg_size<=r){
        ans+=(seg[l/seg_size]+upd[l/seg_size]*seg_size);
        l+=seg_size ;
    }

    while(l <= r ) {
        ans += (a[l]+upd[l]+updRan[l/seg_size]);
        l+=1;
    }

    return ans ;
}

               
// Replace a single index 
void Replace(ll i , ll val ){
    i-=1;
    seg[i/seg_size] +=(val-a[i]);
    a[i] = val ;
}

               
// update a single index by adding 
void UpdateAdd(ll i , ll val ){
    i-=1;
    seg[i/seg_size] +=(val);
    a[i] += val ;
}
               
// Update Range means adding 'val' to a range of index from i to j             
void updateRange(ll l , ll r , ll val ){
    l-=1 , r-=1;
    while( l < r && l%seg_size!=0) upd[l++] += val ;
    while( l+seg_size <= r ){
        updRan[l/seg_size] += val ;
        l+=seg_size;
    }
    while(l<=r) upd[l++]+=val;
}



int main() {

    cin >> n ;
    fr(i,0,n) cin >> a[i];

    buildSegment();

    fr(i,0,k+1) cout << seg[i] <<" "; cout << endl;

    // update

//    Replace(2,0);
//    updateAdd(2,10);
    updateRange(2,5,10);

    fr(i,0,k+1) cout << seg[i] <<" "; cout << endl;

    // Query

    ll q , l , r ;
    cin >> q ;
    while( q-- ){
        cin >> l >> r ;
        cout << query(l-1,r-1) << endl;
    }

return 0 ;
}






    
```
  
    
    
  </details> 
