### Zeckendorf’s theorem :

It states that every positive integer can be written 
uniquely as a sum of distinct non-neighbouring Fibonacci numbers. Two 
Fibonacci numbers are neighbours if they one come after other in Fibonacci 
Sequence (0, 1, 1, 2, 3, 5, ..). For example, 3 and 5 are neighbours, but 2 
and 5 are not.

```

Input:  n = 30
Output: 21 8 1
21, 8 and 1 are non-consecutive Fibonacci Numbers
and sum of them is 30.

```

Using Greedy Method : Checkout Code
### Fibonacci Coding : 
![image](https://user-images.githubusercontent.com/63524824/201544116-93c3c463-9199-4cb0-bb0b-867e9871bd63.png)

### ZT_Code : 

```

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int nearest_Fibonacci( int n ){
    if(n==0|n==1) return n;
    int f1 = 0 , f2 = 1 , f3 =1 ;
    while(f3<=n){
        f1 = f2;
        f2 = f3 ;
        f3 = f2+f1 ;
    }
    return f2 ;
}

void zeckendrof( int n){

    while(n>0){
        int d = nearest_Fibonacci (n);
        cout<<d<<" ";
        n-=d;
    }
}

int main(){
    
   int n;
   cin>>n;
   zeckendrof( n );

return 0;
}

```
