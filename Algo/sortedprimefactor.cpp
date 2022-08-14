void sortedprimefactor(int n)
{
	int i;
	for(i=1;i*i<n;i++)
	{
		if(n%i==0)cout<<i<<dl;
	}
	for(;i>=1;i--)
	{
		if(n%i==0)cout<<n/i<<dl;  
	}
}
