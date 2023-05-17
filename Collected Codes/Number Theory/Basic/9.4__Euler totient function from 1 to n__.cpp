Time Complexity :  O(nloglogn)
using  Sieve of Eratosthenes

There is a property called Divisor Sum Property which also help us to find ETF from 1 to N
but its complexity is higher and it is :  O ( logn)
Check : CP -Algorithms
//---------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void phi_sieve ( int n){

    int mark[n+1] , phi[n+1];
    memset(mark ,0,sizeof(mark));

    for(int i = 1; i<=n ; i++) phi[i] = i;

    for(int i = 2 ; i<=n ; ){
        if(!mark[i]){
            for(int j = i ; j<=n ; j+=i){
                mark[j] = 1 ;
                phi[j] = (i-1)*phi[j] /i;
            }
        }
        if(i==2) i+=1;
        else i+=2;
    }
}

int main(){
    int n,d;
    cin>>n;
    phi_sieve(n);
    for (int i = 1 ; i<=n ;i+=1)
        cout<<i<<"  "<<phi[i]<<endl;;
return 0;
}

