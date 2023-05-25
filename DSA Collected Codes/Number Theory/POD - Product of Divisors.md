## Product of all divisors(POD) 


if NOD is Even ,  POD(n) = n<sup>(NOD/2)</sup>

if NOD is Odd, POD(n) = n<sup>(NOD/2)</sup>*sqrt(n)


```

#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int>occurence,vec;

void primeFactor ( int n ){
    int cnt = 0 ;
    while( n%2 == 0){
        n/=2;
        cnt+=1;
    }
    if(cnt) occurence.pb(cnt);
    for(int i = 3 ; i*i <= n ; i+=2 ){
        cnt = 0 ;
        while(n%i==0){
            n/=i;
            cnt+=1;
        }
        if(cnt)  occurence.pb(cnt);
    }
    if(n>1) occurence.pb( 1 );
}


//Array multiplication Process

void multi ( int  m){

   int  d = vec.size() , carry = 0 ,prod ;
   for(auto a : vec)
    cout<<a<<" ";cout<<endl;

   for(int i = 0 ; i<d ; i++){
        prod = vec[i]*m+carry;
        vec[i]= prod%10;
        carry = prod/10;
   }

   while(carry){
     vec.pb(carry%10);
     carry/=10;
   }

}


int main(){
    int n,d,nod = 1 ;
    cin>>n;
    d = n ;
    while(d){
        vec.pb(d%10);
        d/=10;
    }
    
    primeFactor(n);
    d = occurence.size();
    cout<<d<<endl;

    for(int i = 0 ; i<d; i++ )
        nod *=(occurence[i]+1);

       d=nod/2;


    for(int i = 1 ; i< d ; i++)
        multi(n);
    
    if(nod&1) multi(sqrt(n));

   reverse(vec.begin(),vec.end());

//Result
   for(auto a : vec )
    cout<<a;

return 0;
}

```

