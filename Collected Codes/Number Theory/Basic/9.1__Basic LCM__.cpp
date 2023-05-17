// a * b = lcm(a,b) * gcd(a,b) 
// lcm ( x , 0 ) = 0 
---------------------------------

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,d,lcm;
    cin>>a>>b;
    d = __gcd(a,b);
    lcm = (a*b)/d;
    cout<<lcm<<endl;
return 0;
}
