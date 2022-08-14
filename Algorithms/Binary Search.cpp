
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x,i;
cin>>n>>x;
int arr[n];
for(i=0;i<n;i++)
{
cin>>arr[i];
}
///After Sort

int left =0;
int mid,right=n-1;
while(left<=right)
{
mid=(left+right)/2;
if(arr[mid]==x)
{
cout<<arr[mid];
break;
}
else if(arr[mid]<x)
{
left=mid+1;
}
else if(arr[mid]>x)
{
right=mid-1;
}
}
}
