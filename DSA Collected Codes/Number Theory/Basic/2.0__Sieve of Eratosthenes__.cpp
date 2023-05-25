
// Time Complexity : O(N log (log N))


#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int mx = 10006 ;
bool mark[10006];
vector<int>prime;

void sieve ( void ){
    mark[0] = mark[1] = 1;
    prime.pb(2);

    for(int i = 4 ; i<=mx ; i+=2)
        mark[i] = 1 ;

    for(int i = 3 ; i<=mx ; i+=2){
        if(!mark[i]){
            prime.pb(i);
            if(i*i<=mx){
                for(int j = i*i ; j<=mx ; j+=(i*2))
                    mark[j] = 1;
            }
        }
    }
}


int main(){
    sieve();
    int n;
    cin>>n;
    if(!mark[n]) cout<<"prime"<<endl;
    else cout<<"notPrime"<<endl;

return 0;
}


