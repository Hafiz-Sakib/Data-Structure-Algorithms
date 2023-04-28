/*// 1 is not a prime number.

#include <bits/stdc++.h> 
using namespace std; 
void primeFactors(int n)  
{  
    while (n % 2 == 0)  
    {  
        cout << 2 << " ";  
        n = n/2;  
    }  
    for(int i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            cout << i << " ";  
            n = n/i;  
        }  
    }  
    if (n > 2)  
        cout << n << " ";  
}  
int main()  
{  
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n; 
    primeFactors(n);  
    return 0;  
}  */




/*
#include <bits/stdc++.h> 
using namespace std; 
void primeFactors(int n)  
{  
    int c=0; 
    while (n % 2 == 0)  
    {  
        c++;
        n = n/2;
    }
    if(c!=0)cout<<2<<"^"<<c<<endl;
    for(int i = 3; i <= sqrt(n); i=i+2)  
    { 
        c=0;
        while (n % i == 0)  
        {  
            c++;
            n = n/i;
        } 
        if(c!=0)cout<<i<<"^"<<c<<endl;
    }  
    if (n > 2)  
    cout << n <<"^"<<1<<endl;  
}  
int main()  
{  
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n; 
    primeFactors(n);  
    return 0;  
}  */