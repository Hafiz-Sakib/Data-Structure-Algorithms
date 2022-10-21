//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std; 
int main() 
{ 
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
} 



//Algorithm 1
int maxsum = 0;
for (int a = 0; a < n; a++) {
for (int b = a; b < n; b++) {
int sum = 0;
for (int k = a; k <= b; k++) {
sum += array[k];
}
maxsum = max(maxsum,sum);
}
}
cout << maxsum << "\n";




//Algorithm 2
int maxsum = 0;
for (int a = 0; a < n; a++) {
int sum = 0;
for (int b = a; b < n; b++) {
sum += array[b];
maxsum = max(maxsum,sum);
}
}
cout << maxsum << "\n";




//Algorithm 3





} 
