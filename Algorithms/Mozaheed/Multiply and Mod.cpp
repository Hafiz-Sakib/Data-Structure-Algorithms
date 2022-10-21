#include<bits/stdc++.h> 
using namespace std; 
unsigned long long int mod(string num, unsigned long long int a) 
{ 

    unsigned long long int res = 0;  
    for (int i = 0; i < num.size(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
    return res; 
} 
  
string longDivision(string number, unsigned long long int divisor) 
{ 
string ans;
int i = 0; 
unsigned long long int temp = number[i] - '0'; 
    while (temp < divisor) 
        temp = temp * 10 + (number[++i] - '0');
    while (number.size() > i) 
    {  
        ans.push_back( (temp / divisor)+'0'); 
        temp = (temp % divisor) * 10 + number[++i] - '0'; 
    } 
    if (ans.size() == 0) 
        return "0";
    else
        return ans;
} 


int main() 
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    string line;
   // bool f1=true;
   while(getline(cin,line))
   {
  // 	if(f1==false)cout<<endl;
  // 	f1=false;
   	vector <string> data;
    stringstream check1(line);
    string intermediate;
    while(getline(check1, intermediate, ' '))
    {
        if(intermediate.size())data.push_back(intermediate);
    }
   // for(auto a:data)cout<<a<<endl;
//if(data[0].size()<data[1].size())cout<<0<<endl;
    stringstream geek(data[2]);
	unsigned long long int x;
	geek >> x ;
	//cout<<x;
if(data[1]=="/")
	{
		cout<< longDivision(data[0], x)<<endl;
	}
else if(data[1]=="%")
	{
		cout<< mod(data[0], x)<<endl;
	}

   }
   
}

