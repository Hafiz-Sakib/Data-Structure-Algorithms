#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int>x,pair<string,int>y)
{
	if(x.first>y.first) return true;
	else if(x.first==y.first) return true;
	else return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
vector<pair<string,int>>data;
string ip;
int ip2;
while(cin>>ip>>ip2)
{
	data.push_back(make_pair(ip,ip2));
}
sort(data.begin(),data.end(),cmp);
    for(auto i:data)cout<<i.first<<" "<<i.second<<endl;
    return 0;
}