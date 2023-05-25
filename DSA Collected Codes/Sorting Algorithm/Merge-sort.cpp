// Source : https://www.youtube.com/watch?v=Nrr-lwS_0LY
// Complexity = O ( n*logn )
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

void merging ( int *ar , int l , int mid , int h ) {

    int i = l , j = mid+1 , k = 0 ;
    int temp[h-l+1] ;

    while( i <= mid && j <= h ){
        if( ar[i] <= ar[j] )
            temp[k++] = ar[i++] ;
        else
            temp[k++] = ar[j++];
    }

    while( i <= mid )  temp[k++] = ar[i++] ;
    while( j <= h )    temp[k++] = ar[j++] ;
    k = 0 ;

    for(int p = l ; p <= h ; p++ )
        ar[p] = temp[k++];


}


void mergesort ( int ar[] , int l , int  h ) {

        int mid = (l+h) / 2 ;
        if( l ==  h ) return ;

        mergesort ( ar , l , mid ) ;
        mergesort ( ar , mid+1 , h ) ;

        merging( ar , l , mid , h ) ;

}

int main(){

    int n ;
    cin >> n;
    int ar[n] ;
    for( int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;


    mergesort( ar, 0, n-1 ) ;

    for( int i = 0 ; i < n ; i++ )
        cout << ar[i] << " "; cout << endl;

return 0;
}

