/do prime factorization : n = (p1^a1) * (p2^a2) * (p3^a3) *.....* (pk^ak)
//SOD ( n ) = ( ( p1^(a1+1) - 1 )/(p1-1) )*( ( p2^(a2+1) - 1 )/(p2-1) )* ........* ( ( pk^(ak+1) - 1 )/(pk-1) )
//Time Complexity : O ( sqrt(n) )

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
    ll n,d, sod = 1 ;
    cin>>n;
    primeFactor(n);
    d = occurence.size();

    for(int i = 0 ; i<d; i++ )

        sod *=( (pow( prime[i] , (occurence[i]+1) )-1) / ( prime[i]-1 ));


    cout<<"Sum of divisor : "<<sod<<endl;

return 0;
}
