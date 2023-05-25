Consider a money system consisting of **n** coins. Each coin has a positive integer value. Your task is to calculate **the number of distinct ordered ways** you can produce a money **sum x** using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 3 ways:

2+2+5  |  3+3+3 | 2+2+2+3

#### Consider this Image to build intuition : 

![image](https://user-images.githubusercontent.com/63524824/126024989-05ec2604-8658-45d8-8618-661643a7b64f.png)

#### DP State : 

![image](https://user-images.githubusercontent.com/63524824/126025053-bb2be29b-42e3-4935-b90b-092b216344e3.png)


#### Code : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
 
 
int main(){
    int n , x ;
    cin >> n >> x ;
 
    int coin[n+1] ;
    fr(i,1,n+1) cin >> coin[i] ;
 
    int dp[n+1][x+1] ;
 
    fr(i,1,n+1){
        fr(j,0,x+1){
            if (j){
                int op1 = ( coin[i] > j ) ? 0 : dp[i][j-coin[i]] ;
                int op2 = ( i == 1 ) ? 0 : dp[i-1][j] ;
                dp[i][j] =(op1 + op2)%mod;
            }
            else dp[i][j] = 1 ;
        }
    }
 
    cout << dp[n][x] << endl;
 
return 0 ;
}
 
```
