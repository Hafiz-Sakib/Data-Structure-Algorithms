#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,i,a,b;
cin>>n;
int arr[n],prefixsum[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
prefixsum[0]=arr[0];
if(i!=0)
{
prefixsum[i]=prefixsum[i-1]+arr[i];
}
}
for(i=0;i<n;i++)
{
cout<<prefixsum[i]<<" ";
}
cout<<'\n';
cout<<"Sum of Array = "<<prefixsum[n-1];
cout<<'\n';
cin>>a>>b;
cout<<"Sum Between Index "<<a<<" to "<<b<<" Index = ";
cout<<arr[b]-arr[a-1];
}
