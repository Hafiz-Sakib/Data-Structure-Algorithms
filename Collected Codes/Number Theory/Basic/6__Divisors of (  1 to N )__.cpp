// Divisor of 1 to N .
//Time complexity : O ( nlogn ) 

#include<bits/stdc++.h>
using namespace std;

vector<int>divisors[100005];

void divi ( int n){
    for(int i = 1 ; i <= n ; i++ ){
        for(int j = i ; j <= n ; j+=i){
            divisors[j].push_back(i);
        }
    }
}
int main(){
      int n ;
      cin>>n;
      divi(n);

      // Result 
      for(int i = 1 ; i <= n ; i++ ){
          for(auto a : divisors[i] )
              cout<<a<<" "; cout<<endl;
      }
  return 0;
}

