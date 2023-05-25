
ধরা যাক কয়েনগুলোর ভ‍্যালু হলো C = {2 , 5 ,9 ,13 , 15 } টাকা । এখন তুমি এই কয়েনগুলো দিয়ে W = ২২ বানাতে চাইলে একটা উপায় হলো 15+5+2, এক্ষেত্রে কয়েন লাগছে ৩টা। কিন্তু তুমি চাইলে ২টা কয়েন ব‍্যবহার করেও 22 বানাতে পারো (9+13)। আমাদের টার্গেট কয়েন ব‍্যবহার মিনিমাইজ করা।

You can use particular coin One time only . You may use it or Not.

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
ll n , x , coin[100005] , dp[100005];

void init (){
    fr(i,1,100005) dp[i] = INT_MAX ;
}

int main(){

    cin >> n >> x ;

    fr(i,0,n) cin >> coin[i] ;
    init() ;

    fr(i,1,x+1){
        fr( j,0,n){
            if ( coin[j] <= i  )
            dp[i] = min( dp[i] , 1+dp[i-coin[j]]);
        }
    }

    fr(i,0,x+1) cout << dp[i] <<" "; cout << endl;



return 0 ;
}



```
