দুইটি স্ট্রিং এর মধ্যে Longest Common Sequence টি আমাদের প্রিন্ট করতে হবে। এক্ষেত্রে আমরা প্রথমে আমরা ইটারেটিভ DP ব্যবহার করে DP টেবিল তৈরি করতে হবে। 

![image](https://user-images.githubusercontent.com/63524824/126563974-542de3cc-5211-4f5a-bd03-a0edfc5ba2ed.png)

উপরোক্ত টেবিলে আমরা সর্বশেষ সেল থেকে ইটারেশন করে একদম শুরুর সেলে আসবো এবং আসার সময় LCS এর লেটারগুলো Ans স্ট্রিংয়ে স্টোর করে রাখতে হবে। এক্ষেত্রে আমরা কিছু Conditions Apply করবো।

![image](https://user-images.githubusercontent.com/63524824/126563874-c7b3f563-946c-438a-b92b-f3de0cace41b.png)

যেকোনো সেল থেকে পাশের , উপরের এবং কোনাকুনি , তিনটি সেলের মান গুলো দেখবো। যদি , 
- সবগুলো সমান হয় , তবে আমরা পাশের ইনডেক্স এ যাবো। 
- যদি পাশের , উপরের এবং কোনাকুনি সবগুলো সমান হয় এবং এরা সেলের মান থেকে কম হয় , তবে আমরা কোনাকুনি যাবো এবং সেলের লেটারটা স্ট্রিং এ স্টোরে করবো। 
- সব সমান না হলে , উপরের এবং পাশের মানগুলোর মধ্যে যেটা বড় আমরা ঐদিকে যাবো।   

### Code : 

```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;

ll dp[1005][1005];


int main(){
    string s ,p  ;
    cin >> s >> p ;

    fr(i,0,s.size()){
        fr(j,0,p.size()){
            if (s[i] == p[j])   dp[i+1][j+1] = dp[i][j]  + 1  ;
            else dp[i+1][j+1] = max(dp[i][j+1],dp[i+1][j]);
        }
    }

    // Printing DP Table : 
    
    fr(i,0,s.size()+1){
        fr(j,0,p.size()+1){
            cout << dp[i][j] <<" ";
        }
        cout << endl;
    }

    // Resulting LCS : 
    
    ll r = s.size() , c = p.size() ;
    string ans ;
    while(1){
            cout << r <<" "<<c << endl;
        if ( !dp[r-1][c-1] && !dp[r-1][c] && !dp[r][c-1] ){
            if(dp[r][c]) ans+=s[r-1];
            break;
        }

        else if( dp[r-1][c-1] == dp[r][c-1] && dp[r-1][c-1] == dp[r-1][c] ) {
            if ( dp[r-1][c-1] != dp[r][c]) {
                    ans+=s[r-1] ;
                    r-=1 , c-=1;
            }
            else r-=1;
        }
        else {
            if ( dp[r][c-1] > dp[r-1][c] ) c-=1;
            else r-=1;
        }
    }
    reverse(ans.begin(),ans.end());
    
    cout <<" LCS :  "<< ans << endl;
    
    cout <<"LCS length : " << dp[s.size()][p.size()] << endl;


return 0 ;
}

```
