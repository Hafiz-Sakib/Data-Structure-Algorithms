#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;
ll t , fg = 0 ;
ll mtD[1000][3];
map< pair<ll,ll>,ll >mp ;

int main(){

    cin >> t ;
    // Matrix Input :
    fr(i,1,t+1) {
        cin >> mtD[i][1] >> mtD[i][2] ;
        if ( i>1 ) {
            if ( mtD[i][1] != mtD[i-1][2] )  fg = 1 ;
        }
    }

    if (fg) {
        cout <<"Matrix Multiplication NotPossible as two consecutive matrix's column and row is not Equal.\n";
        return 0 ;
    }

    ll j = 1 ;

    fr(i,0,t+1){
        while(1){
            if ( i+j > t  ) { j = 1 ; break;}

            if ( j == i+j ) { mp[{j,j}] = 0 ; break; }

            ll res = INT_MAX;

            fr(k,j,i+j){
                res = min( res , mp[{j,k}] + mp[{k+1,i+j}] + ( mtD[j][1]* mtD[k][2] * mtD[i+j][2]) ) ;
            }
            mp[{j,i+j}] = res;
            ++j;
        }
    }

    cout << "Total Number of Multiplication Needed : " << mp[{1,t}] << endl;


return 0 ;
}




/*
4
5 4
4 6
6 2
2 7
*/
