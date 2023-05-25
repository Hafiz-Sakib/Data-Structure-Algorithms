Greedy Algorithm can help us to solve most of problems but in some case it Fails . 0 - 1 Knapsack is one of them , in which case 
it fails . Apparently it will assume that we can solve it using greedy approach , But there is some trivial case which can not be solved using greedy .
In this case , solving approach will be Dynamic programming . Let's have a look on following example down below : 


There is sack and the maximum weight it can hold is 7 kg . There are multiple object of different wight and price given below .
We need to full our sack in such a way that we can gain maximum profit . 

```
            price  : 1  4  5  7 
            weight : 1  3  4  7 
```

For this case , a diagram have drawn to show how we can move using DP approach .Check out the jpg file outside this file . Here a short description is 
given which may help . 

![image](https://user-images.githubusercontent.com/63524824/125389541-2ee7c080-e3c3-11eb-935c-244375d1d52f.png)


In DP process , there is only 2 state . If we take i -th  object , then for this object situation is 1 and if we donot take , then it is a 0 - state . 
That's why this is known as 0 - 1 knapsack . There is no chance of taking a fraction of a object. If we want to keep any of them , then we have to keep whole object.

we check all possibility by not taking a object and we check again by taking this object . If we preserve our previous result , then it will help us if we
find the same dp state again . Check out 0 - 1 knapsack Image which will help in details .

**Time Complexity : O ( 2^n ) without dp**
**| using dp : O ( n . w )**

#### Code : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int sz = 1e5+5;

ll obj , max_weight ;
ll dp[105][sz] , price[105] , weight[105] ;

ll solve ( ll current_obj  , ll current_weight ){

        if( current_obj > obj ) return 0 ;

        if( dp[ current_obj ][current_weight] != -1 ) return dp[ current_obj ][current_weight] ;

        ll taken_obj  = 0 , not_taken_obj = 0 ;

        if( current_weight + weight [ current_obj ] <= max_weight ){

                    taken_obj = price[ current_obj ] + solve ( current_obj + 1 ,  current_weight + weight [ current_obj ] ) ;
        }

        not_taken_obj = solve ( current_obj + 1 ,  current_weight ) ;

        dp[ current_obj ][current_weight ] = max ( taken_obj , not_taken_obj );

        return dp[current_obj][current_weight];

}

int main(){

    memset(dp,-1,sizeof(dp));

    cin >> obj >> max_weight ;

    for ( int i = 1 ; i <= obj ; i++ ){
        cin >> weight[i] >> price[i] ;
    }

    ll ans = solve ( 1 , 0 )  ;

    cout << ans << endl ;

return 0;
}
```
