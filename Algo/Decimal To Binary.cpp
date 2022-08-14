/*#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n) 
{ 
	vector<int>data ;
	int i = 0; 
	while (n > 0) 
	{ 
		data.push_back(n%2); 
		n = n / 2; 
	} 
	for (int j=data.size()-1;j>=0;j--) 
		cout << data[j]; 
} 

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
	decToBinary(n); 
	return 0; 
}
*/


//Decimal To Binarry and Binarry To Decimal Using Vector


/*#include<bits/stdc++.h>
using namespace std;
void decToBinary(int n) 
{ 
	vector<int>data ;
	int i; 
	int dec_value = 0;
	int base = 1;
	while (n > 0) 
	{ 
		data.push_back(n%2); 
		n = n / 2; 
	} 
	for (int j=data.size()-1;j>=0;j--) cout << data[j];
	cout<<endl; 
	for(i=0;i<data.size();i++)
	{
		dec_value += data[i] * base;
        base = base * 2;
	}
cout<<dec_value<<endl;
} 

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
	decToBinary(n); 
}
*/