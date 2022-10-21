

#include<stdio.h>
int main()
{
int x;
scanf("%d",&x);
int i,j,temp,min, arr[x];
for(i=0;i<x;i++)
{
scanf("%d",&arr[i]);
}

for(i=0;i<x-1;i++)
{
min=arr[i];
for(j=i+1;j<x;j++)
{
if(arr[j]<min)
{
min=arr[j];
}
}
arr[i]=min;
}
for (i=0;i<x;i++)
{
printf("%d ",arr[i]);
}

}
