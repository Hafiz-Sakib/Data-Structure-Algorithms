//Determine least prime factor of a range or an Integer
// mostly effient for least factor in a range 
//-----------------------------------------------------

#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int ar[10000007];
int lm =10000000;

void sv(void){
    ar[0] = ar[1] = -1 ;
    ar[2] = 0;
    for(int i = 4 ; i<=lm ; i+=2) ar[i] = 2 ;
    for(int i = 3 ; i*i<=lm ; i+=2) {
        if(!ar[i]){
            if(i*i<=lm){
                for(int j = i*i ; j<=lm ; j+=(i*2))
                    ar[j] = i;
            }
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    sv();
    for(int i = n ; i<= m ; i++)
        cout<<ar[i]<<" ";cout<<endl;


return 0;
}
