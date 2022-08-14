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
using namespace std; 
const double PI = acos(-1);

int phi[maxx];
void genphi(int n)
{
    for (int i=1; i<n; i++)
        phi[i] = i; 
    for (int p=2; p<n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;
            for (int i = 2*p; i<n; i += p)
            {
            phi[i] =  ((phi[i]/p) * (p-1));
            }
        }
    }

     /*for (int i=1; i<=12; i++)
    cout << "Totient of " << i << " is "
        << phi[i] << endl;*/
}

int main() 
{ 

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
#endif

/*-----------------------START-----------------------*/


int q=1,n=10,p=n;
//cin>>q;
genphi(maxx);
while(q--)
{
    //cin>>n;
    DDD;
    ull int res=0;
    for(int j=1;j<p;j++){
        for(int i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                int d1=i;
                int d2=n/i;
                res=res+(d1*phi[d2]);
                if(d1!=d2)
                    res=res+(d2*phi[d1]);
            }
        }}
    cout<<res<<dl;
}


/*------------------------END------------------------*/

time;
return 0;

} 

