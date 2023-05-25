//This function count all co-prime( gcd ( i,j) = 1 )  from 1 to n-1 .
// Note that phi(n) = n-1 if n is prime
//-------------------------------------------------------------------
// phi(n)  = ( n*(p1-1)*(p2-1)*(p3-1)*....*(pk-1) )/( p1*p2*p3*....*pk)
//Time Complexity : O ( sqrtn)

---------------------------------------------------------------------------
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int phi_function( int n){
    int t1 = n , t2 = 1 ;
    if(n%2==0){
        t2*=2;
        while(n%2==0) n/=2;
    }
    for(int i = 3 ; i*i<=n ; i+=2){
        if(n%i==0){
            t1*=(i-1);
            t2*=i;
            while(n%i==0) n/=i;
        }
    }
    if(n>1) {
        t1*=(n-1);
        t2*=n;
    }
    n = t1/t2;
    return n;
}

int main(){
    int n,d;
    cin>>n;
    d = phi_function(n);
    cout<<d<<endl;
return 0;
}
//------------------------------------------------------------------------------------
//In this Code , I had used prime factorization to get The value of Phi Function . 
//There is another process to get Phi Function .
//Check the following Code .
//Time Complexity : O ( sqrtn)
//------------------------------------------------------------------------------------
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int phifunction ( int n){
    int result = n;
    for(int i = 2 ; i*i<=n ; i+=1){
        if(n%i==0){
            while(n%i==0) n/=i;
            result-=result/i;
        }
    }
    if(n>1) result-=result/n;
    return result;
}

int main(){
    int n,d;
    cin>>n;
    d = phifunction(n);
    cout<<d<<endl;
return 0;
}



