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
#define S string
#define fi first
#define se second
#define sp ' '
#define dl "\n"
#define all(data) data.begin(),data.end()
#define b() begin()
#define e() end()
#define cY cout<<"YES\n"
#define cN cout<<"NO\n"
#define cy cout<<"Yes\n"
#define cn cout<<"No\n"
#define setp(n) setprecision(n)
#define debug(x) cerr<<x<<dl;
#define here fprintf(stderr, "====I am Here====\n");
#define FOR(data) for(auto it=data.begin();it!=data.end();it++)
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time : "<<(float)clock()/CLOCKS_PER_SEC<<" s"<<endl
#define maxx 100005
#define EPS 1e-9
using namespace std; 
const double PI = acos(-1);
ll int hp = 1e9+7;

ll int findSubarraySum(ll int arr[],ll int n,ll int sum)
{
          //Ref:    https://www.youtube.com/watch?v=20v8zSo2v18


    map<ll int,ll int> prevSum;
    ll int res = 0;
    ll int currsum = 0;
    prevSum[0]=1;
    for (ll int i = 0; i < n; i++) 
    {
        currsum += arr[i];                  //prefix sum
        res+=prevSum[currsum-sum];             //same value er jonno age pawa gese kina
        prevSum[currsum]++;                     
    }
    return res;
}
void Boom()
{
     ll int n;
     cin>>n;
     ll  int arr[n];
     ll int sum=0;              //sum joto chaw
    for(ll int i=0;i<n;i++)cin>>arr[i];
    cout << findSubarraySum(arr, n, sum)<<dl;



   
}

int main() 
{ 
    Boost;
    #ifndef ONLINE_JUDGE
    Input;
    Output;
    #endif


    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        //cout<<"Case "<<i<<" : ";
        Boom();
    }


    time;
    return 0;

} 