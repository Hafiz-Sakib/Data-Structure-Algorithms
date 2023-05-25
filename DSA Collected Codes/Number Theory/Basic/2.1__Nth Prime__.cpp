#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pb push_back
// Tonmoy vai did it .But i never understood the Algorithms
//TimeComplexity : O (N)
//if i use sieve of erathosthenis in stead of this algo , this takes  O( nlog logn) time.
//----------------------------------------------------------------------------------------------

#define pob pop_back
#define all(a) a.begin(),a.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define i64 long long int
#define mem(x,y) memset(x,y,sizeof(x))
#define fill(arr,b) fill(arr, arr+sizeof(arr)/sizeof(arr[0]), b)
#define pii pair<int,int>

const double pi = 2*acos(0);
const int N = 10000000;
int pr[N+1],k=1;
int lp[N+1];
int prime()
{
    for (int i=2; i<=N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr[k++] = i;
        }
        for (int j=0; j<k && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
return 0;
}

int main()
{
    prime();
    fio;
    int n,i;
    cin>>n;
    cout<<pr[n];
return 0;
}
