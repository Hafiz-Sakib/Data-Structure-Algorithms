#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
using namespace std;

void patArray ( string s , vector <ll>&v){
    ll j = 0 , d = s.size();
    fr(i,1,d){
        if(s[i] == s[j] )v.pb(++j);
        else {
            --j;
            while(1){
                if(j<0){  v.pb(0) ; j = 0 ; break; }
                j = v[j];
                if(s[j] == s[i] ){ v.pb(++j); break; }
                j-=1;
            }
        }
    }
}

void KMP ( string t , string p , vector <ll>v , vector<ll>& pos  ){

    ll j = 0 , d1 = t.size() , d2 = p.size() ;
    fr(i,0,d1){
        if ( t[i] == p[j] ) ++j;
        else {
            if(j>0) {
                j = v[j-1];
                --i;
            }
        }
        if( j == d2 ) { j = v[j-1] ; pos.pb(i-d2+1); }
    }
}


int main(){
    string text , pattern ;
    cin >> text >> pattern ;
    vector < ll > v , pos ;

    v.pb(0);
    patArray(pattern,v);
    KMP(text,pattern,v,pos);

    cout << "Total Equal Pattern : " << pos.size() << endl;
    cout << "starting Position : ";
    for( auto a : pos)
        cout << a <<" "; cout << endl;


return 0 ;
}


