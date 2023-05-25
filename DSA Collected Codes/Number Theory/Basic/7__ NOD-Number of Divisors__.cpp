//do prime factorization to get occurence : n = (p1^a1) * (p2^a2) * (p3^a3) *.....* (pk^ak)
//NOD ( n ) = (a1+1)*(a2+1)*.....*(ak+1)
//Time Complexity : O ( sqrt(n) )

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector<ll>occurence;

void primeFactor ( ll n ){
    int cnt = 0 ;
    while( n%2 == 0){
        n/=2;
        cnt+=1;
    }
    if(cnt)
            occurence.pb(cnt);
 
    for(ll i = 3 ; i*i <= n ; i+=2 ){
        cnt = 0 ;
        while(n%i==0){
            n/=i;
            cnt+=1;
        }
        if(cnt)
            occurence.pb(cnt);

    }
    if(n>1)  occurence.pb( 1 );
}

int main(){
    ll n,d, nod = 1 ;
    cin>>n;
    primeFactor(n);
    d = occurence.size();
    for(int i = 0 ; i<d; i++ )
        nod *=(occurence[i]+1);

    cout<<"Number of divisor : "<<nod<<endl;

return 0;
}

