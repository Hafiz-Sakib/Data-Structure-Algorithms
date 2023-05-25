// Time Complexity : O(n)

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    int n ;
    cin >> n ;
    int ar[n] , d = log(n) + 1  , tmp = n-1 , p , a , b ;
    //cout << d << endl;
    int sparseTable[d+1][n];

    memset(sparseTable, -1 , sizeof(sparseTable)) ;

    for(int i = 0 ; i < n ; i++ ){
        cin >> ar[i] ;
        sparseTable[0][i] = i ;
    }

    for(int i = 1 ; i <= d ; i++ ){
        for(int j = 0 ; j < tmp ; j++ ){
            if ( j+i <= tmp )
            sparseTable[i][j] = ( ar[sparseTable[i-1][j]] <= ar[sparseTable[i-1][j+i] ]) ? sparseTable[i-1][j] : sparseTable[i-1][j+i] ; // use ">=" to get Maximum
        }
        tmp-=i;
    }

   /* for(int i = 0 ; i <= d   ; i++ ){
        for(int j = 0 ; j < n ; j++ )
            cout << sparseTable[i][j] << " ";
        cout << endl;
    }*/

    int q , x, y , t ;
    cin >> q ;
    while( q-- ){

        cin >> x >> y ;
        d = y - x + 1 ;
        p = log2(d)   ;
        t = pow( 2 , p ) ;
        y = y - t + 1  ;

        int ans = ( ar[ sparseTable[p][x] ]  <= ar[ sparseTable[p][y] ]) ? ar[ sparseTable[p][x] ] : ar[ sparseTable[p][y] ] ;
        cout << ans << endl;

    }

return 0;
}
