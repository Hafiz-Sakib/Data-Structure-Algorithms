
### প্রশ্ন : ( ৬ <sup>-১</sup> )  % ৫ = কত ?

```
আমরা Modular Arithmetic অনুযায়ী যোগ ,বিয়োগ ,এবং গুনের জন্য সূত্র পাই । কিন্তু ভাগের জন্য 
কোনো সূত্র নেই ।মূলত ভাগের ক্ষেত্রে কাজে আসে এই মডুলার ইনভার্স প্রক্রিয়া। 

```

##### যেমন : ( ৫ / ৬ ) % ৫ = কত ?

তখন আমরা লিখতে পারবো  :( ৫ *( ৬<sup>-১</sup>) )% ৫ = ( ৫ % ৫  * ( ৬<sup>-১</sup>))% ৫ ) % ৫

```

এখন প্রশ্ন আসলো কিভাবে আমরা ইনভার্স করবো ?  ইনভার্স কি করা যাবে  ?

ইনভার্স করা যাবে শুধুমাত্র যখন  a & m  কো প্রাইম হবে।  কো প্রাইম না হলে সম্ভব নয়। 
দুই ভাবে করা যাবে । একটা হচ্ছে  ইউলার ফাঙ্কশন &  Fermat’s Little theorem ব্যবহার করে।  
    
    ইউলার ফাঙ্কশন  :  a ^ (m-2) % m = answer .
     আমরা বিগমড় এর সাহায্যে এটা সল্ভ করবো ।
    

আরেকটা হচ্ছে  ইউক্লিডিয়ন এলগোরিদমস এর সাহায্যে |

```

### Time Complexity: O(Log m)

We have discussed three methods to find multiplicative inverse modulo m. 
1) Naive Method, O(m) 
2) Extended Euler’s GCD algorithm, O(Log m) [Works when a and m are coprime] 
3) Fermat’s Little theorem, O(Log m) [Works when ‘m’ is prime]

Check out Following Code : 

```


#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

// 6^-1 mod 5 = ?
int gcd(int a , int b , int &x , int &y ){
    if(b==0){
        x = 1 ;
        y = 0;
        return a;
    }
    int x1,y1 , d;
    d = gcd(b,a%b , x1 , y1);
    x = y1 ;
    y = x1 - (a/b)*y1;
    return d;
}
int bigmod(int a, int b , int m){
    if(b==1) return a%m;
    if(b==0) return 1%m;
    int d = bigmod(a,b/2,m);
    if(b&1) d = (d*d*a)%m;
    else d = (d*d);
    return d%m;
}

int main(){
    int a,b,d,m;
    cin>>a>>m;
    b = m-2;
    d = bigmod(a,b,m);




    cout<<d<<endl;
    int x,y;
    int g = gcd(a,m,x,y);
    cout<<g<<" "<<x<<" "<<y<<endl;
    x = (x%5+5)%5;
    cout<<x<<endl;
return 0;
}


```

