//prime or notPrime

//------------------

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
    ll n , fg = 0 ;
    cin>>n;

    for(int i = 2 ; i*i<=n ; i++){
       if(n%i==0){
            fg = 1;
            break;
       }
    }
    if(!fg) cout<<"Prime"<<endl;
    else cout<<"notPrime"<<endl;

return 0;
}
