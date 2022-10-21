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
#define EPS 1e-9;
using namespace std; 
const double PI = acos(-1);

int table[256];
void initi()
{
    table[0]=0;
    for(int i=1;i<256;i++)
    {
        table[i]=(i&1)+table[i/2];
    }
}
int count (int n)
{
    int res=table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
    n=n>>8;
    res=res+table[n & 0xff];
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


int n;
cin>>n;
initi();
cout<<count(n);

/*------------------------END------------------------*/

time;
return 0;

} 

