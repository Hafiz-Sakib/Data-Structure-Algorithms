/*
In Quick sort algorithm, partitioning of the list is performed using following steps...

Step 1 - Consider the last element of the list as pivot (i.e., Element at first position in the list).
Step 2 - Define two variables i and j. Set i and j to first and last elements of the list respectively.
Step 3 - Increment i until list[i] > pivot then stop.
Step 4 - Decrement j until list[j] < pivot then stop.
Step 5 - If i < j then exchange list[i] and list[j].
Step 6 - Repeat steps 3,4 & 5 until i > j.
Step 7 - Exchange the pivot element with list[i] element.
*/

#include<bits/stdc++.h>
using namespace std;
int cnt = 0 ;

int partion ( int ar[] , int l , int h ){
    int i = l , p = ar[h] , j = h-1 ;
    cnt += 1 ;
    while( 1 ){
        while(ar[i] < p ) i++ ;
        while(ar[j] > p ) j--;

        if ( i > j ) break;
        swap(ar[i] , ar[j] );
        
    }

    swap(ar[h] , ar[i] );
    return i;

}

void quicksort ( int ar[] , int l , int h ){

    if( l < h ){
        int pi = partion ( ar , l , h  );
        quicksort( ar , l , pi-1 );
        quicksort( ar , pi+1 , h );
    }

}

int main(){

    int n ;
    cin >> n ;
    int ar[n] ;

    for(int i = 0 ; i < n; i++ ){
        cin >> ar[i] ;
    }

    quicksort(ar, 0 , n-1 ) ;

    for(int i = 0 ; i < n ; i++ )
        cout << ar[i] << " " ;       cout << endl;

    cout << cnt << endl;

return 0;
}
// 10 67 78 54 3 56 0 51 24 12 6
