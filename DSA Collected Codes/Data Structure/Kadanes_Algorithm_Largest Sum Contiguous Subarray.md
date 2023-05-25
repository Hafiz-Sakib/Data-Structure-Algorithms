### Kadane's Algorithm ( Largest Sum Contiguous Subarray )

<details> 
  <summary> Exaplanation : </summary> 
  
  <br> 
  
  <b>Problem Statement :</b> Given an array arr[] of size N. The task is to find the sum of the contiguous subarray within a arr[] with the largest sum. 
  ![image](https://user-images.githubusercontent.com/63524824/209971209-10cb05ea-fce2-4393-abd5-1adb4fea36ec.png)

  <br> 
  Source Link : 
  <ul> 
    <li> https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/  </li>
    <li> https://www.youtube.com/watch?v=w_KEocd__20 </li> 
  </ul> 
  
  
  
</details> 



<details> 
  <summary> Code : Sum & Subarray </summary> 
  
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
    ll n;
    cin >> n ;
    ll a[n];
    fr(i,0,n) cin >> a[i];

    ll sum = 0 , subarray_sum = INT_MIN , l , r , new_start = 0 ;

    fr(i,0,n){
        sum += a[i];
        if( sum > subarray_sum ){
            subarray_sum = sum ;
            l = new_start ;
            r = i+1;
        }
        if( sum < 0 ) {
            sum = 0 ;
            new_start = i+1 ;
        }
    }

    cout << subarray_sum << endl ;
    cout << "Sub-Array : ";
    fr(i,l,r) cout << a[i] << " "; cout << endl;



return 0 ;
}


  
  ```
  
</details> 
