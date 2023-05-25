## Hashing | Set 2 ( Separate Chaining )

##### What is Collision? 
> Since a hash function gets us a small number for a key which is a big integer or string, there is a possibility that two keys result in the same value. The situation where a newly inserted key maps to an already occupied slot in the hash table is called collision and must be handled using some collision handling technique. 


##### What are the chances of collisions with large table ? 
Collisions are very likely even if we have big table to store keys. An important observation is Birthday Paradox. With only 23 persons, the probability that two people have the same birthday is 50%.

##### How to handle Collisions? 
There are mainly two methods to handle collision: 
1) Separate Chaining / Closed Addressing
2) Open Addressing 


#### Separate Chaining: 
The idea is to make each cell of hash table point to a linked list of records that have same hash function value. 



Let us consider a simple hash function as “key mod 7” and sequence of keys as 50, 700, 76, 85, 92, 73, 101. 
 ![hashChaining1](https://user-images.githubusercontent.com/63524824/117562134-806f8880-b0be-11eb-9009-b6f3b2d7cd79.png)

#### Code : 
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){

    int n , m = 20 , i = 0 ;
    cin >> n ;
    
    int ar[n] ;
    for(int i = 0 ; i < n ; i++ )
        cin >> ar[i] ;
        
    
    //inserting
    vector<int> hash_table[m] ;
    for(int i = 0 ; i < n ; i++ )
        hash_table[ ar[i]%m ].pb(ar[i]);
        

    // Hash_table
    for( auto a : hash_table){
            cout << i++ <<" : ";
        for(auto b : a ){
            cout << b << " " ;
        }
        cout << endl;
    }

return 0 ;
}

```

#### Advantages: 
1) Simple to implement. 
2) Hash table never fills up, we can always add more elements to the chain. 
3) Less sensitive to the hash function or load factors. 
4) It is mostly used when it is unknown how many and how frequently keys may be inserted or deleted. 

#### Disadvantages: 
1) Cache performance of chaining is not good as keys are stored using a linked list. Open addressing provides better cache performance as everything is stored in the same table. 
2) Wastage of Space (Some Parts of hash table are never used) 
3) If the chain becomes long, then search time can become O(n) in the worst case. 
4) Uses extra space for links. 

#### Performance of Chaining: 
Performance of hashing can be evaluated under the assumption that each key is equally likely to be hashed to any slot of table (simple uniform hashing).  

 m = Number of slots in hash table
 n = Number of keys to be inserted in hash table
 
 Load factor,  α = n/m 
  
 Expected time to search = O(1 + α)
 
 Expected time to delete = O(1 + α)

> Time to insert = O(1)

> Time complexity of search insert and delete is 
 O(1) if  α is O(1)
 
#### Data Structures For Storing Chains: 
- Linked lists
Search: O(l) where l = length of linked list
Delete: O(l)
Insert: O(l)
Not cache friendly
- Dynamic Sized Arrays ( Vectors in C++, ArrayList in Java, list in Python)
Search: O(l) where l = length of array
Delete: O(l)
Insert: O(l)
Cache friendly
- Self Balancing BST ( AVL Trees, Red Black Trees)
Search: O(log(l))
Delete: O(log(l))
Insert: O(l)
Not cache friendly