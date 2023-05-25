### Problem Statement : 

![image](https://user-images.githubusercontent.com/63524824/126884931-d5c28945-fab4-43eb-865e-7df87eed9339.png)


- problem link : https://leetcode.com/problems/number-of-longest-increasing-subsequence/



### Solution : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;

map < ll,vector <ll> > mp ;
ll n , mx  , cnt , ar[5005] , d , tmp , mem[5005];

int solve ( ll i , ll len ){

    if ( len == mx ){
        cnt = 0 ;
        for ( auto a : mp[len] ) {
            if (ar[a] > ar[i]  && a > i ) cnt+=1; ;
        }
        return cnt;
    }

    if ( mem[i] != -1 ) return mem[i] ;
    mem[i] = 0 ;

    for( auto a : mp[len] ){
        if ( ar[a] > ar[i] && a > i ) mem[i] += solve (a,len+1) ;
    }

    return mem[i] ;
}

int main(){
     cin >> n ;

     fr(i,1,n+1) cin >> ar[i] ;
     ll dp[n+1] ;
     fill (dp,dp+n+1,1);

     deque < int > lcs ;

     fr(i,1,n+1){
         fr(j,1,i){
             if ( ar[j] < ar[i]  ) dp[i] = max (dp[i],dp[j]+1);
         }
     }

     fr(i,1,n+1)
            mp[dp[i]].pb(i) ;

     mx = *max_element(dp,dp+n+1) ;

     ar[0] = INT_MIN ;
     memset(mem,-1,sizeof(mem)) ;
     
     cout << solve(0,1) << endl;
     

/*

    for ( auto a : mp ){
            cout << a.first <<" : " ;
         for ( auto b : a.second  ){
            cout <<b <<" ";
         }
         cout << endl;
    }
*/

return 0 ;
}


```

```
8
1 2 4 3 5 4 7 2

```
