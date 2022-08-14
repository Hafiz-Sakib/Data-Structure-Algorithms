//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long 
#define pb push_back
#define mp make_pair
#define pob pop_back
#define in insert
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define psi pair<string,int>
#define pis pair<int,string>
#define mii map<int,int>
#define msi map<string,int>
#define mis map<int,string>
#define S string
#define fi first
#define se second
#define sp " "
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define DDD fprintf(stderr, "====TESTING====\n")
#define FOR() for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("/home/mozahed/Documents/Love/input.txt", "r", stdin)
#define Output freopen("/home/mozahed/Documents/Love/output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
#define HP 1000000007
using namespace std; 
const double PI = acos(-1);
//Tinme Complexcity O(n+k);
int fact[maxx];

ull int pwr(ull int x,ull int n)
{
    DDD;
    ull int res=1;
    while(n>0)
    {
        if(n&1)         //n%2!=0
            res=(res*x)%HP;
        x=(x*x)%HP;
        n=n>>1;          //n=n/2
    }
    return res;
}

ull int ncr(ull int n,ull int k)
{
    DDD;
    if(k>n)return 0;
    ull int res=fact[n];
    res=res*pwr(fact[k],HP-2)%HP;
    res=res*pwr(fact[n-k],HP-2)%HP;
    return res;
}

int main() 
{ 

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
#endif

/*-----------------------START-----------------------*/

ull int i;
fact[0]=fact[1]=1;
for(i=2;i<=maxx;i++)
{
    fact[i]=(fact[i-1]*i)%HP;
}

int q;
cin>>q;
while(q--)
{
    ull int n,k;
    cin>>n>>k;
    cout<<ncr(n,k)<<dl;
}


/*------------------------END------------------------*/

time;
return 0;

} 
