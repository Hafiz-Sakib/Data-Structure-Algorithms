### Hashing a String
    
<details> 
  <summary> Expanation : </summary>
    
<br>
    
  |   |   |  
  |---|---|
  | ![1](https://user-images.githubusercontent.com/63524824/203860954-bef214a5-00d0-4f2b-8652-21fe910336ea.png)  |   ![image](https://user-images.githubusercontent.com/63524824/203861179-526f8bc4-ba06-457b-bd2b-d54026dbb3dd.png)  |

 
  
  <strong> Note : </strong>   Base and Mod value should be <b>co-prime</b>. 
  <br> 
  Probability of having same hash for two different string is <b> ( 1 / mod_value ) </b> . To minimize this prbability use a <b> reletively large  prime number </b>  
  In this case ,<b> 10<sup>9</sup>+7 </b> is safe to use. 
  
  To minimize it more, we may go for <b> Double Hashing </b>. <br>
  
  <b> Double Hashing : </b> It is a techinque in where two different ( base and mod ) pair to generate hash_value of a string and both together used to represent this string.<br>
 
  Let's say , 
  
  |   |   |  
  |---|---|
  |  base_1 = 27  | base_2 = 28   |  
  |  mod_1 = 10<sup>9</sup>+7  |  mod_2 = 10<sup>9</sup>+11   |  

  In this case , probability of having same Hash = <b> 1 / ( 10<sup>9</sup>+7 ) * ( 10<sup>9</sup>+11 )  </b>
  
  In Double Hashing, if hash_value for a particular ( base and mode ) pair get same , there is a little change to get similiar for different pair. So double hash make it 
  more unique.
   
   
</details>

<details> 
 <summary> Code : </summary>
    
 <br> <b> Single Hash : </b> <br> 
  
```
    
    ll get_hash(string s ){
        ll d = s.size(), loc = 1 , hash_value = 0 ;
        fr(i,0,d){
            hash_value = ((hash_value%mod)*27 + (s[i]-96))%mod ;
        }
        return hash_value ;
    } 
    
```
    
<br> <b> Double Hash : </b> <br> 
    
    
```
    
    pair<ll,ll> double_hash( string s ){
    
        ll d = s.size(), hash_value_1 = 0  , hash_value_2 = 0 ;
        ll mod_1 = 1000000007 , mod_2 = 1000000011;
        ll base_1 = 27 , base_2 = 28 ;

        fr(i,0,d){
            hash_value_1 = ((hash_value_1%mod_1)*base_1 + (s[i]-96))%mod_1 ;
            hash_value_2 = ((hash_value_2%mod_2)*base_2 + (s[i]-96))%mod_2 ;
        }

        return {hash_value_1,hash_value_2} ;
    }
    
    
```
    
    
  
</details>

    
    
### Prefix Hash and Hash of any substring
    
    

<details> 
 <summary> Explanation : </summary>
    
   <br>
    
   ![3](https://user-images.githubusercontent.com/63524824/204009119-7a413192-f7ea-4dbe-aa8b-85f7ef44cb76.png)

</details>
    
<details> 
 <summary> Code : </summary>
    
    
```
    
        ll a[10];
        void power(){
            a[0] = 1 ;
            fr(i,1,10){
                a[i] = a[i-1]*27;
                a[i]%=mod ;
            }
        }

        int main(){
            string s ;
            cin >> s ;

            power();

            ll d = s.size(), loc = 1 , hash_value = 0 ;
            vector<ll>hs;

            // prefix hash

            fr(i,0,d){
                hash_value = ((hash_value%mod)*27 + (s[i]-96))%mod ;
                hs.pb(hash_value);
            }

            for(auto a : hs ) cout << a << " "; cout << endl;

            // any substring 

            fr(i,0,d){
                fr(j,0,i){
                    cout << j+1 <<" "<< i << " "<< i-j << " = "<< (hs[i] - hs[j]*(a[i-j])) << endl;
                }
            }


        return 0 ;
        }

```
   

</details>
    
### String Search 
<details> 
    <summary> Explanation : </summary>  
    <br> 
    <b> Problem Statement :  </b> You are given an array of strings A[]. You have to answer a few queires. Each queries contains a string. You need to find if this string can be found in the array.
    
![4](https://user-images.githubusercontent.com/63524824/204013214-daa20699-4fc5-4041-b80c-49d7a1261b8d.png)

    
</details> 
    
<details> 
    <summary>  Code : </summary> 
    
```
    ll get_hash(string s ){

        ll d = s.size(), loc = 1 , hash_value = 0 ;
        fr(i,0,d){
            hash_value = ((hash_value%mod)*27 + (s[i]-96))%mod ;
        }
        return hash_value ;

    }

    int main(){
        ll n , queries ;
        cin >> n ;

        string A[n];
        vector<ll>hs ;

        fr(i,0,n){
            cin >> A[i] ;
            hs.pb( get_hash( A[i] ) );
        }

        for(auto a : hs ) cout << a <<" "; cout << endl;
        fr(i,0,hin) cout << A[i] <<" "; cout << endl;

        sort(all(hs));

        cin >> queries ;

        while( queries-- ){
            string s ;
            cin >> s ;
            ll hsh = get_hash(s);

            if ( binary_search(all(hs),hsh)) cout << "Present\n" ;
            else cout << "Not Present\n";

        }

    return 0 ;
    }

    
```
    
    
</details> 
    
    
### TRIE - Prefix Tree Data Structure 
    
<details> 
  <summary> Expanation : </summary>
    <br>
   Source: 
   <ul>
       <li> https://www.youtube.com/watch?v=zbV0IRWBNvU  </li>
       <li> https://cppsecrets.com/users/9999109111117110105971171035048484864103109971051084699111109/C00-Trie-Datastructure.php </li>
   </ul>
    
</details>   
<details> 
  <summary> Code : </summary>

```
#include<bits/stdc++.h>
#define ll             long long
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define fr(i,s,e)      for(ll i=s;i<e;i++)
#define rfr(i,e,s)     for(ll i=e;i>=s;i--)
#define endl           "\n"
#define sz(a)          (ll)a.size()
#define mem1(a)        memset(a,-1,sizeof(a))
#define pii            pair<int,int>
#define mod            1000000007
#define fast           ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

struct node {

    node *child[26];
    bool word = false ;
    ll childCount = 0 ;
    node(){
        fr(i,0,26) child[i] = NULL ;
    }

} ;//*root;

node* root = new node ;

void insertString ( string s ){

    ll d = s.size() ;
    node* pnt = root ;

    fr(i,0,d){
        ll index = s[i]-97;
        if(!pnt->child[index]){
            pnt->child[index] = new node();
        }
        pnt = pnt->child[index];
        pnt->childCount+=1;
    }
    pnt->word = true ;

}

bool searchString( string s ){
    ll d = s.size() ;
    node* pnt = root ;

    fr(i,0,d){
        ll index = s[i]-97;
        if(!pnt->child[index]) return false ;
        pnt = pnt->child[index];
    }
    return pnt->word;
}

ll searchPrefix( string s ){
    ll d = s.size() ;
    node* pnt = root ;

    fr(i,0,d){
        ll index = s[i]-97;
        if(!pnt->child[index]) return -1 ;
        pnt = pnt->child[index];
    }
    return pnt->childCount;
}
int main(){

    for(ll i=0;i<5;i++){
        string s ;
        cin >> s ;
        insertString(s);
    }
//   for(ll i=0;i<5;i++){
//        string s ;
//        cin >> s ;
//        if(searchString(s)) cout << "Pres\n";
//        else cout << "Abs\n";
//    }
    for(ll i=0;i<5;i++){
        string s ;
        cin >> s ;
        ll d = searchPrefix(s);
        cout << "Len : " << d << endl;
    }

return 0 ;
}

```

</details>   
    
    
