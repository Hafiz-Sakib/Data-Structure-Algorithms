#include<bits/stdc++.h> 
#include <numeric>
using namespace std; 
int main() 
{ 

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif



int n;
cin>>n;
int arr[n],i,s,e,k;
for(i=0;i<n;i++)
{
	cin>>arr[i];
}


 for (s = 0; s < n; s++)
	{
	  for (e = s+1; e < n; e++)
	    {
	      for (k = s; k <= e; k++)

		{
		  if (data[i] > data[i + 1])
		    {
		      i--;
		      break;
		    }
		}
	      if (i == (int) data.size () - 1)
		z++;
	      data.erase (data.begin (), data.end ());
	    }
	}
}