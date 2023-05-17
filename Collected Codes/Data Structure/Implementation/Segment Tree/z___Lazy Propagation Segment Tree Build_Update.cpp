#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

struct node {
    int sum ;
    int prop ;
};

void build( node segTree[] , int ar[] , int n ,  int i , int f ){

    if( i == f ){
        segTree[n].sum = ar[i] ;
        segTree[n].prop = 0 ;
        return ;
    }

    int l , r , m ;
    l = n*2+1 ;
    r = n*2+2 ;
    m = ( i+f) / 2 ;

    build ( segTree , ar , l , i , m ) ;
    build ( segTree , ar , r , m+1 , f ) ;

    segTree[n].sum =  segTree[l].sum  + segTree[r].sum ;
    segTree[n].prop = 0 ;
}

void update ( node segTree[] , int n , int i , int f , int a , int b , int val  ){
    if ( a >  f || b < i )  return ;
    if ( i >= a && f <= b  ) {
        segTree[n].sum += ( ( f-i+1) *val ) ;
        segTree[n].prop = val ;
        return ;
    }
    int l , r , m ;
    l = n*2+1 ;
    r = n*2+2 ;
    m = ( i+f) / 2 ;

    update ( segTree , l , i , m  ,a , b ,val ) ;
    update ( segTree , r , m+1 , f,a , b ,val ) ;

    segTree[n].sum =  segTree[l].sum  + segTree[r].sum ;


}

int main(){

    int n ;
    cin >> n ;
    int ar[n] ;
    for(int i = 0 ; i <  n ; i++ ) cin >> ar[i] ;

    node segTree[n*3] ;

    memset(segTree,0,sizeof(segTree));


    build( segTree , ar , 0 ,  0 , n-1 ) ;


    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i].sum << " " ;
    cout << endl;

    int a , b , val ;
    cin >> a >> b >> val ;

    update(segTree,0,0,n-1,a , b , val ) ;

    for(int i = 0 ; i < n*3 ; i++ )
        cout << segTree[i].sum << " " ;
    cout << endl;


return 0;
}

