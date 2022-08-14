#include <bits/stdc++.h> 
using namespace std; 
bool prime(int n)  
{  
    if(n==1) return false;
    else if(n==2)return true;
    else if(n%2==0)return false;
    else
    {
    int c=0;
    for(int i=3;i<=sqrt(n);i++)
    {
    if(n%i==0)
    {
        c++;
        break;
    }
    }
    (c==0)?return true;:return false;;
    }
}  

int main()  
{  
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n; 
    prime(n);   
}  