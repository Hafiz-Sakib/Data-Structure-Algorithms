//Divisors of an Integer  | Sum of Divisors of an Integer || Number of divisors
//-----------------------------------------------------------------------------

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll n , sum = 0 ;
    cin>>n;
    vector<int>divisor;

    for(int i = 1 ; i*i<=n ; i++){
        if(n%i==0){
            divisor.pb(i);
            sum+=i;
            if(i*i!=n){
                divisor.pb(n/i);
                sum+=(n/i);
            }
        }
    }
    sort(divisor.begin() , divisor.end());
    
    // Divisor of a Number
    for(auto a : divisor ) cout<<a<<" ";cout<<endl;
    
    //Number of divisor of a Number
    cout<<divisor.size()<<endl;
    
    //Sum of Divisor of an number
    cout<<sum<<endl;
    
return 0;
}
