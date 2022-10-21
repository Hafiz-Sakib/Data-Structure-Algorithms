
#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
int i,j,temp, arr[x];
for(i=0;i<x;i++)
{
scanf("%d",&arr[i]);
}
for (i=0;i<x;i++)
{
for(j=0;j<x-i-1;j++)
{
if(arr[j]<arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for (i=0;i<x;i++)
{
printf("%d ",arr[i]);
}

}
