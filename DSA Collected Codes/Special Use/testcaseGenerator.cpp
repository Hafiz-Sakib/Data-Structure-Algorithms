#include<bits/stdc++.h>
#define ll unsigned long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

int main(){

    int idx = 3 ;
    char x[] = "out0000000000000000000.txt";

    for(int i = 0 ; i <= 100 ; i++){
        if(x[idx] == '9') idx+=1;
        freopen(x,"w",stdout);
        x[idx]+=1;
        int t ;
        t = rand()%100000;
        cout << t << endl;
        for(int j = 1 ; j <= t ; j++ ){
            int n , m ;
            n = rand()%19;
            m = rand()%10;
            cout << n << " "<< m << endl;
        }

    }



return 0 ;
}

