তোমাকে দু্টি স্ট্রিং S & P দেয়া আছে। তুমি শুধুমাত্র S স্ট্রিংটার উপর ৩টা অপারেশন করতে পারো, কোন একটা ক্যারেকটার বদলে দিতে পারো, কোন ক্যারেকটার মুছে ফেলতে পারো, যেকোন পজিশনে নতুন ক্যারেকটার ঢুকাতে পারো। তারমানে চেঞ্জ, ডিলিট, ইনসার্ট হলো তোমার ৩টা অপারেশন। এখন তোমার কাজ মিনিমাম অপারেশনে 
S স্ট্রিংটা টাকে P বানানো।


যেমন **blog** কে **bogs** বানাতে তুমি **l** মুছে ফেলে স্ট্রিং এর শেষে **s** ইনসার্ট করতে পারো।

ইটারেটিভ এবং রিকার্সিভ দুইভাবেই  সমস্যাটির সমাধান করা সম্ভব।  আমরা সমস্যাটাকে পিছন থেকে দেখবো।  ধরা যাক আমাদের দুইটি স্ট্রিং দেওয়া আছে। 

```
S  = saturday  , length = 8 
P  = sunday  , length = 6 
```
এক্ষেত্রে আমরা সবার পিছন থেকে যাত্রা শুরু করবো। শুরুতে আমরা  [ i , j ] = [ 8 , 6 ] ইনডেক্স নিয়ে কাজ করবো। আমরা সর্বদা দুইটি অব্জারভেশন পাবো।  যথা  : 

- s[i] == p[j] , যদি লেটার দুইটি সমান হয় তবে  আমাদের কোনো অপারেশন ব্যবহার করতে হবে না এবং  আমরা সামনের ইনডেক্স এ  এগিয়ে যেতে পারি। 
    edit_distance ( i-1 , j-1 ) 

- s[i] != p[j] , যদি লেটার দুইটি সমান হয় তবে  আমাদের কোনো অপারেশন ব্যবহার করতে হবে . এক্ষেত্রে  আমরা তিনটি অপারেশন করতে পারবো।
  
  1 ) **Insert_Operation** : আমরা ইনসার্ট করলে সমান হয়ে যাবে। কিন্তু আগেরটা তো এখনো সমাধান হয়নি।  তাই এখন আমরা [ i-1 , j ] ইনডেক্সে এগিয়ে যেতে পারবো। 

  ![image](https://user-images.githubusercontent.com/63524824/126848886-2002cc57-0659-4ca6-a1ae-040d0c612802.png)

  
  2 ) **Delete_Operation** : ডিলিট করে দিলে আমাদের [i , j-1 ] ইনডেক্সে যেতে হবে।  কারণ i তম ইনডেক্সের কাজ এখনও শেষ হয়নি। 
  
  ![image](https://user-images.githubusercontent.com/63524824/126849045-c9e13e88-f26c-4d11-9815-a570067ac437.png)

  
  3 ) **Replace_Operation** : রিপ্লেস করে দিলে সেক্ষেত্রে লেটার দুইটি সমান হয়ে যাবে।  আমরা এই অপেরেশনের পর [ i-1 , j-1 ]  ইনডেক্সে এগিয়ে যেতে পারবো। 
  
  ![image](https://user-images.githubusercontent.com/63524824/126849360-0af6e742-a357-496c-9d3f-98c1cbc0a218.png)

 
 
এক্ষেত্রে  আমাদের রিকার্শন ট্রি টা দেখতে নিচের ছবিটা মত দেখতে হবে।  


![image](https://user-images.githubusercontent.com/63524824/126847329-18c3d530-38bc-4d25-9ce3-7cebd8552dbb.png)


#### Recursive Base Case :
```
Base Case  : If one string is empty , then rest of another string's length must be Deleted . So if str1 length  = 0 , 
            then it returns str2's length.
            
    if ( m == 0 ) return n ; 
    if ( n == 0 ) return m ; 
    
```

### Code : 

**Recursive**
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
const ll sz = 5005 ;
string s , p ;
ll dp[sz][sz]  ;

int ed ( ll i , ll j ){
    
    if ( i < 0  ) return j+1 ;
    if ( j < 0 ) return i+1 ;
    if ( dp[i][j] != -1 ) return dp[i][j] ;

    if ( s[i] == p[j] ) return dp[i][j] = ed(i-1,j-1) ;
    else return dp[i][j] = 1 + min(ed(i-1,j-1) ,min( ed(i,j-1) , ed(i-1,j) )) ;
}


int main(){
    cin >> s >> p ;
    memset(dp,-1,sizeof(dp)) ;
    cout << ed(s.size()-1,p.size()-1) << endl;
return 0 ;
}

```


**Iterative**

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
string s , p ;
ll dp[5005][5005] ;

int main(){
    cin >> s >> p ;

    int d1 = s.size() , d2 = p.size() ;

    fr(i,0,d1+1) dp[i][0] = i ;
    fr(i,0,d2+1) dp[0][i] = i ;

    fr(i,1,d1+1){
        fr(j,1,d2+1){
            if ( s[i-1] == p[j-1] )  dp[i][j] = dp[i-1][j-1] ;
            else dp[i][j] = min (dp[i-1][j-1] , min(dp[i-1][j],dp[i][j-1])) + 1 ;
        }
    }

    cout << dp[d1][d2] << endl;

return 0 ;
}



```
