/*#include<bits/stdc++.h> 
using namespace std; 
int main() 
{ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif


    string str1,str2; 
    while(cin>>str1>>str2)
    {
    int len1 = str1.size(); 
    int len2 = str2.size(); 
    vector<int> result(len1 + len2, 0); 
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i=len1-1; i>=0; i--) 
    { 
        int carry = 0; 
        int n1 = str1[i] - '0'; 
        i_n2 = 0;  
        for (int j=len2-1; j>=0; j--) 
        { 
            int n2 = str2[j] - '0'; 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry; 
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10; 
            i_n2++; 
        } 
        if (carry > 0)
        {
            result[i_n1 + i_n2] += carry; 
        }
        i_n1++; 
    } 
    int i = result.size() - 1; 
    while (i>=0 && result[i] == 0)
    {
        i--;
    }
    if(i==-1)
    {
        cout<<0;
    }
    for(int j=i;j>=0;j--)
    {
        cout<<result[j];
    }
    cout<<endl;
    } 
}*/





/*
//Division
//String And Integer
#include <bits/stdc++.h> 
using namespace std; 
string longDivision(string number, int divisor) 
{ 
    string ans;
    int i = 0; 
    int temp = number[i] - '0'; 
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
    string number; 
    int divisor;
    cin>>number>>divisor;
    cout<< longDivision(number, divisor);
} 
*/