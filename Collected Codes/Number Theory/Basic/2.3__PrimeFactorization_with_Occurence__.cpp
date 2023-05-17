// Time Complexity : O(sqrt(n)) 
// input 100 : output 2^2 * 5^2


#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<ll>prime,occurence;

void primeFactor ( ll n ){
    int cnt = 0 ;
    while( n%2 == 0){
        n/=2;
        cnt+=1;
    }
    if(cnt){
            occurence.pb(cnt);
            prime.pb(2);
    }
    
    for(ll i = 3 ; i*i <= n ; i+=2 ){
        cnt = 0 ;
        while(n%i==0){
            n/=i;
            cnt+=1;
        }
        if(cnt){
            occurence.pb(cnt);
            prime.pb(i);
        }
    }
    if(n>1){
         occurence.pb( 1 );
         prime.pb( n );
    }
}

int main(){
    ll n;
    cin>>n;
    primeFactor(n);
    for(auto a : prime)
        cout<<a<<" ";cout<<endl;
    for(auto a : occurence)
        cout<<a<<" ";cout<<endl;
return 0;
}
