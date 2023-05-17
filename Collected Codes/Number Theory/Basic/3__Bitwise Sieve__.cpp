#include<bits/stdc++.h>
#define ll long long
using namespace std;
int m = 100000000;
int marker[100000000/32];

bool check( int n ){
    bool fg = (marker[n/32] & (1<<(n%32)));
    return fg ;
}
void fixer ( int n ){
    marker[n/32] = (marker[n/32]|(1<<(n%32)));
}

void bitwise_sieve(void){
    int lm = sqrt(m)+1;
    marker[0] = 1 ;
    marker[0]= (marker[0]<<1)|1;
    for(int i = 4 ; i<=m ; i+=2)
        fixer(i);

    for(int i = 3 ; i<=m ; i+=2){
       if( !check(i) ){
            for(int j = i+i ; j<=m ; j+=(i))
                fixer(j);
       }
    }
}

int main(){
    bitwise_sieve();
   while(1){
        int n;
        cin>>n;
        if( !check(n) ) cout<<"prime"<<endl;
        else cout<<"notPrime"<<endl;
    }
return 0;
}
