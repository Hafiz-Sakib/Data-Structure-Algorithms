### TRIE - Prefix Tree Data Structure 
    
<details> 
  <summary> Expanation : </summary>
    <br>
   Source: 
   <ul>
       <li> https://www.youtube.com/watch?v=zbV0IRWBNvU  </li>
       <li> https://cppsecrets.com/users/9999109111117110105971171035048484864103109971051084699111109/C00-Trie-Datastructure.php </li>
       <li> https://medium.com/techie-delight/trie-data-structure-overview-and-practice-problems-2db1bad4bf49 </li>
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

void traverse(Trie* nd){

    if(nd->child[0]==NULL && nd->child[1]==NULL ) {
        cout << "---------------\n";
        return ;
    }
    fr(i,0,26){
        if(nd->child[i]==NULL) continue ;
        cout << (char)(97+i) << endl;
        traverse(nd->child[i]);
    }
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
    
<details> 
    <summary> Longest Common Prefix : Code </summary> 

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

struct Trie {
    Trie *child[26];
    bool word = false ;
    ll childCount = 0 ;
    Trie(){
        fr(i,0,26) child[i] = NULL ;
    }
} ;

Trie* root = new Trie ;

void insertString ( string s ){

    ll d = s.size() ;
    Trie* pnt = root ;

    fr(i,0,d){
        ll index = s[i]-97;
        if(!pnt->child[index]){
            pnt->child[index] = new Trie();
        }
        pnt = pnt->child[index];
        pnt->childCount+=1;
    }
    pnt->word = true ;

}

int main(){
    ll n , d = 0 ;
    cin >> n ;
    string s ;
    for(ll i=0;i<n;i++){
        cin >> s ;
        insertString(s);
    }
    Trie* nd = root , tmp ;
    while(1){
         Trie* tmp = NULL ;
         ll cnt = 0 ;
         fr(i,0,26){
            if(nd->child[i]!=NULL){
                cnt+=1;
                tmp = nd->child[i];
            }
         }
         nd = tmp;
         if(!tmp) break;
         if(cnt>1) break;
         d+=1;
    }

    fr(i,0,d) cout << s[i] ; cout << endl;

return 0 ;
}


   
```
    
</details> 
