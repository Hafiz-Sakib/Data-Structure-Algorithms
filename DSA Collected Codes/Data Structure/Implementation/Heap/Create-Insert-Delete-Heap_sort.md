#### Explanation : https://www.youtube.com/watch?v=HqPJF2L5h9U

<details>
  <summary> Create Heap | Heapify - Bottom to Up Approach </summary>
 
```
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,s,e) for(ll i=s;i<e;i++)
#define rfr(i,e,s) for(ll i=e;i>=s;i--)
#define nl  "\n"
#define mod 1000000007
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
using namespace std;

void heapify( vector<ll>&heap ){
    ll d = heap.size() - 1 , l , r , j ;
    
    for(int i = d ; i >= 0 ; i-- ){
        l = 2*i + 1 , r = 2*i + 2 , j = i ;
        while(1){
            if(r <= d ){
                if( heap[l] > heap[j] && heap[l] > heap[r] ) {
                    swap(heap[l],heap[j]);
                    j = l ;
                }
                else if ( heap[r] > heap[j] && heap[r] > heap[l] ) {
                    swap(heap[r],heap[j]);
                    j = r ;
                }
                else break;
            }
            else if ( l <= d ) {
                if ( heap[l] > heap[j] ){
                    swap(heap[l],heap[j]);
                    j = l ;
                }
                else break;
            }
            else break ;
            l = 2*j + 1 , r = 2*j + 2 ;
        }
    }
}


int main(){
    vector<ll> heap = {5,10,30,20,35,40 };
    heapify(heap);
    for(auto a : heap) cout << a <<" "; cout << endl;
return 0 ;
}

  
``` 
</details>
  
<details>
  <summary>Create Heap | Insert - Bottom to Up Approach </summary>

  ```
  
#include<bits/stdc++.h>
using namespace std ;

vector < int > vec ;

void insert (){
    int value;
    cin>>value;
    vec.push_back(value);
    int new_position = vec.size()-1;
    while( new_position >0 && value < vec[(new_position-1)/2]){
        swap( vec[(new_position-1)/2] , vec[new_position]);
        new_position =  (new_position-1)/2;
    }
    vec[new_position] = value ;
}

int main(){
    int heap_size;
    cin >> heap_size ;

    for( int i= 1 ; i<= heap_size ; i++ ){
          insert() ;
    }

    // heap traverse
    for( int i = 0 ; i< heap_size ; i++ ){
         cout<< vec[ i ] <<" ";
     }

return 0 ;
}

  ```
  
</details> 
<details> 
  <summary>Insertion - UN CHECKED</summary>
  
```
#include<bits/stdc++.h>
using namespace std ;

vector < int > vec ;

void insert (){
    int value;
    cin>>value;
    vec.push_back(value);
    int new_position = vec.size()-1;
    while(new_position >0&& value < vec[(new_position-1)/2]){
        swap( vec[(new_position-1)/2] , vec[new_position]);
        new_position =  (new_position-1)/2;
    }
    vec[new_position] = value ;
}

int main(){
    vec = { 50,45,23,12,23,5,8} ; 
    insert ();
    insert ();
return 0 ;
}
```
                                                             
</details>  

 <details> 
   <summary> Delete - U N C H E C K E D </summary>

```
   
   --------------------------------------------------
               DELETE RooT
--------------------------------------------------
void delete ( vector<int> &heap ){
        int size = heap.size( ) ;
        int temp =  heap[0];
        heap[0] = heap[size-1];
        int i = 0 , j= 2*i+1;
        while(j < size-1 ){

            if(heap[j]<heap[j+1]) j+=1;
            if(heap[i]>heap[j]) break;
            if(heap[i]<heap[j]){
                swap(heap[i],heap[j]);
                i = j;
                j = i*2 + 1 ;
            }
        }
        heap.pop_back();
}
----------------------------------------------
        DELETE any position .
  IT's also can used for HEAP sort . 
----------------------------------------------
void delete ( vector<int> &heap , int pos){
    pos-=1;
    int j,d = heap.size()-1;
    j = pos*2+1;
   swap(heap[pos],heap[d]);
   while(j<d-1){
        if(heap[j]<heap[j+1])
                j+=1;
        if(heap[pos] > heap[j]) break;
        if(heap[pos] < heap[j]) {
            swap(heap[pos],heap[j]);
            pos = j;
            j = pos*2+1 ;
        }
   }
   heap.pop_back();
}
int main(){
    delete ( heap );
    delete ( heap , 1 ) ;
    delete ( heap , 3 ) ;
return 0;
}
              
```
   
  </details>
 
              
<details >
              
<summary> Heap Sort - U N CHECKED </summary>
              
```
              
void delete(vector<int> &heap , int pos){
    pos-=1;
    int  j,d = heap.size()-1;
    j = pos*2+1;
   swap(heap[pos],heap[d]);
   while(j<d-1){
        if(heap[j]<heap[j+1])
                j+=1;
        if(heap[pos] > heap[j]) 
break;
        if(heap[pos] < heap[j]) {
            swap(heap[pos],heap[j]);
            pos = j;
            j = pos*2+1 ;
         }
      }
   heap.pop_back();
}
......................................................................................................
After this caling delete operation heap_sz times, if we check our whole vector , we found it sorted .  
-------------------------------------------------------------------------------------------------------
int main(){
vector<int>heap=  {40,35,30,20,10,5,15};
 int heap_sz = heap.size();
 
 for(int i = 0;i<heap_sz;i++)
             delt (heap,1);
   
   heap_sz = heap.size();
   
    for(int i = 0;i<heap_sz;i++) cout<<heap[i]<<" ";cout<<endl;  // 5 , 10 , 15 , 20 , 30 , 35 , 40 
return 0;
}
              
```
</details>
