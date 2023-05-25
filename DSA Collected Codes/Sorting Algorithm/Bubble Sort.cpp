/*
Bubble sort has a worst-case and average complexity of О(n2), where n is the number of items 
being sorted. Most practical sorting algorithms have substantially better worst-case or average 
complexity, often O(n log n). ... When the list is already sorted (best-case), the complexity 
of bubble sort is only O(n).
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){

    int n ;
    cin >> n ;
    int ar[n] ;

    for( int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;
    //for( int i = 0 ; i < n ; i++ ) cout << ar[i] << " " ; cout << endl;

    for(int i = n-1 ; i >= 0 ; i-- ){
        for( int j = 0 ; j < i ; j++ ){
                
            if(ar[j] > ar[j+1] ) //swap ( ar[j] , ar[j+1] ) ;
            {
                int  tmp = ar[j] ; 
                ar[j] = ar[j+1] ;
                ar[j+1] = tmp ;
            }
        
        }
    }

    for( int i = 0 ; i < n ; i++ ) cout << ar[i] << " " ; cout << endl;


return 0;
}
