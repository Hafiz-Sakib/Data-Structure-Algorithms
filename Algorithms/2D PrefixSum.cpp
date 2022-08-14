//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ull unsigned long long 
#define ll long long
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define vs vector<string>
#define ST string
#define F first
#define S Second
#define Input freopen("input.txt", "r", stdin)
#define Output freopen("output.txt", "w", stdout)
#define Error freopen("error.txt", "w", stderr) 
#define Boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL) 
#define time cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" sec"<<endl
using namespace std; 


int main() 
{ 

Boost;
#ifndef ONLINE_JUDGE
Input;
Output;
Error;
#endif

/*-----------------------START-----------------------*/


int r,c,i,j;
cin>>r>>c;
int arr[r][c];

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cin>>arr[i][j];
	}
}

for(i=1;i<c;i++)
	arr[i][0]=arr[i-1][0]+arr[i][0];

for(i=1;i<r;i++)
	arr[0][i]=arr[0][i-1]+arr[0][i];

for(i=1;i<r;i++)
{
	for(j=1;j<c;j++)
	{
		arr[i][j] = arr[i - 1][j] + arr[i][j - 1]
                        - arr[i - 1][j - 1] + arr[i][j];
	}
}

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}


/*------------------------END------------------------*/

time;
return 0;

} 
