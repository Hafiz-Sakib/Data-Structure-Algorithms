

///Bismillahir Rahmanir Rahim


#include<bits/stdc++.h>
using namespace std;
int main()
{
	  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

int n;
cin>>n;
int i,j;

for(i=1;i<=n;i++)
{
for(j=1;j<=2*n-1;j++)
{
if(j>=n-(i-1)&&j<=n+(i-1))
{
char s='A';
cout<<s;
s++;
}
else{cout<<" ";}
}
cout<<"\n";
}

}
