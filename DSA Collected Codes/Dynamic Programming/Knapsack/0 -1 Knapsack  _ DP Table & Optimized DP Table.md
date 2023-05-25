### Iterative Approach

**Build DP Table**

Space & Time Complexity : O ( item*weight) 

*Source : https://www.youtube.com/watch?v=WNkqbqyvR_0&list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS&index=6*
    
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pi acos(-1)
#define FOR(i,a,b) for (ll i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define io  ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main(){

    int item , weight  ;
    cin >> item >> weight ;

    int dp[ item+1 ][ weight+1 ] , wt[ item+1 ] , profit [ item+1 ] ;

    for( int i = 1 ; i <= item ; i++ ) cin >> wt[i] >> profit[i] ;

    memset( dp , 0 , sizeof ( dp ))  ;

    for( int i = 1 ; i <= item ; i++ ){

        for( int j = 1 ; j <= weight ; j++ ){

            if( wt[ i ] <= j )
                    dp[i][j] = max( dp[i-1][j] , profit[i] + dp[ i - 1 ][j - wt[i]] ) ;
            else
                dp[i][j] = dp[i-1][j] ;

        }

    }
   
    //DP Table : Space Complexity ( O(item * weight) ) 
    for(int i = 0 ; i <= item ; i++ ){
        for(int j =  0 ; j <= weight ; j++ ){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Maximum Profit : " << dp[item][weight] << endl;
    
return 0;

}
```

**Space Optimized DP Table**

Time Complexity : O(item * weight) | Space Complexity : O(2 * weight) = O(2 * weight)

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define pi acos(-1)
#define FOR(i,a,b) for (ll i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define io  ios_base::sync_with_stdio(false); cin.tie(0);
using namespace std;

int main(){

    int item , weight  ;
    cin >> item >> weight ;

    int dp[2][weight+1] , wt[ item+1 ] , profit [ item+1 ] ;

    for( int i = 1 ; i <= item ; i++ ) cin >> wt[i] >> profit[i] ;

    memset( dp , 0 , sizeof ( dp ))  ;

    for( int i = 1 ; i <= item ; i++ ){

        int tmp = i%2 ? 0 : 1 ;

        for( int j = 1 ; j <= weight ; j++ ){

            if( wt[ i ] <= j ){
                dp[i%2][j] = max( dp[tmp][j] , profit[i] + dp[ tmp ][j - wt[i]] ) ;
            }
            else 
                dp[i%2][j] = dp[tmp][j] ;
        }

    }

        // Last Row
        for(int j =  0 ; j <= weight ; j++ ){
            cout << dp[item%2][j] << " ";
        } cout << endl;


    cout << "Maximum Profit : " << dp[item%2][weight] << endl;

return 0;
}
