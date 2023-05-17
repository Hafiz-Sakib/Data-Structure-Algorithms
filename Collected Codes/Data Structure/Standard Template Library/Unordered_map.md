### Unordered_map

unordered_map is an associated container that stores elements formed by combination of key value and a mapped value. The key value is used to ` uniquely identify the element ` and mapped value is the content associated with the key. Both key and value can be of any type predefined or user-defined. 

It is often referred as associative array. It enables `fast retrieval of individual elements based on their keys`. It also implements ` the direct access operator(subscript operator[])` which allows for direct access of the mapped value using its key value as argument.

Unordered map `does not sort its element in any particular order` with respect to either their key or mapped values, `instead organizes into buckets depending on their hash values` to allow for fast access to individual elements directly by their key values.

Unordered map performs better than map while accessing individual elements by their keys. But for range iteration their performance is considerably low.

Internally unordered_map is `implemented using Hash Table`, the key provided to map are hashed into indices of hash table that is why performance of data structure depends on hash function a lot but` on an average the cost of search, insert and delete from hash table is O(1). `

#### unordered_map vs unordered_set : 

> In unordered_set , we have only key, no value, these are mainly used to see presence/absence in a set. For example, consider the problem of counting frequencies of individual words. We can’t use unordered_set (or set) as we can’t store counts. 

#### unordered_map vs map : 

|Map|Unordered_map|
|-|-|
|ordered sequence of unique keys|key can be stored in any order, so unordered|
|implemented using Balanced Tree Structure|implemented using Hashing|
|Time complexity - O(Log n)|Time complexity - O(1)|

#### Iterators  : 
- `umap.begin()` - Returns an iterator pointing to `the first element in the unordered_map container (1)` or `in one of its buckets (2).`

- `umap.end()` - Returns an iterator pointing to the `past-the-end element` in the unordered_map `container (1)` or in `one of its buckets (2).`The iterator returned by end does not point to any element, but to the position that follows the last element in the unordered_map container (its past-the-end position). Thus, the value returned shall not be dereferenced - it is generally used to describe the open-end of a range, such as `[begin,end)`.

```
#include <iostream>
#include <unordered_map>
using namespace std;

int main (){
  unordered_map<string,string> mymap;
  mymap = {{"Australia","Canberra"},{"U.S.","Washington"},{"France","Paris"}};

  cout << "mymap contains:";
  for ( auto it = mymap.begin(); it != mymap.end(); ++it )
    cout << " " << it->first << ":" << it->second;
  cout << endl;
  
  cout << "mymap's buckets contain:\n";
  
  for ( unsigned i = 0; i < mymap.bucket_count(); ++i) {
      cout << "bucket #" << i << " contains:";
        for ( auto local_it = mymap.begin(i); local_it!= mymap.end(i); ++local_it ) // how to access bucket element
          cout << " " << local_it->first << ":" << local_it->second;
      cout << endl;
  }

  return 0;
}
```

- `umap.cbegin() & umap.end()` - Return `const-iterator` container (1) or in one of its buckets (2) and element can not be modified.

#### Element access  : 

-`operator[]`  : If k matches the key of an element in the container, the function returns a reference to its mapped value.If k does not match the key of any element in the container, the function inserts a new element with that key and returns a reference to its mapped value. Notice that this always increases the container size by one, even if no mapped value is assigned to the element (the element is constructed using its default constructor).
```
#include <bits/stdc++.h>
using namespace std ;

int main (){
  unordered_map<string,string> mymap;

  mymap["Bakery"]="Barbara";  
  mymap["Seafood"]="Lisa";   
  mymap["Produce"]="John";   

  std::string name = mymap["Bakery"];  
  mymap["Seafood"] = name;             

  mymap["Bakery"] = mymap["Produce"];   
  name = mymap["Deli"];      

  mymap["Produce"] = mymap["Gifts"];   
  for (auto& x: mymap) {
    std::cout << x.first << ": " << x.second << std::endl;
  }

  return 0;
}
```

- `umap.at(key)` - Returns a reference to the mapped value of the element with key  in the unordered_map.If key does not match the key of any element in the container, the function throws an out_of_range exception.

#### Element lookup :
- `umap.find( key )` - An iterator to the element, if the specified key value is found, or umap.end() if the specified key is not found in the container.

- `umap.count( key )` - Returns 1 if an element with a key equivalent to k is found, or zero otherwise.

- `umap.equal_range( key )` -  returns a `pair`, where its member `pair::first is an iterator to the lower bound of the range`, and `pair::second is an iterator to its upper bound`. The elements in the range are those between these two iterators, including pair::first, but not pair::second.
```
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	unordered_map <int, int> m = { { 1, 3 },{ 1, 2 },{ 3, 1 },{ 2, 3 } };
	
		auto e_r = m.equal_range(2);
		if( e_r.first != m.end() ){
          auto it = e_r.first ; 
          cout << it->first <<" "<< it->second<<endl;
    }
  
  	if( e_r.second != m.end() ){
          auto it = e_r.second ; 
          cout << it->first <<" "<< it->second<<endl;
    }
}

```

#### Modifiers : 
- `umap.insert()` - Inserts new elements in the unordered_map.Each element is inserted only if its key is not equivalent to the key of any other element already in the container. 
```
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std ;

int main (){
  unordered_map< string  , double > myrecipe, mypantry = {{"milk",2.0},{"flour",1.5}};

  pair< string,double> myshopping ("baking powder",0.3);

  myrecipe.insert (myshopping);                        // copy insertion
  myrecipe.insert (make_pair<string,double>("eggs",6.0)); // move insertion
  myrecipe.insert (mypantry.begin(), mypantry.end());  // range insertion
  myrecipe.insert ( {{"sugar",0.8},{"salt",0.1}} );    // initializer list insertion

  cout << "myrecipe contains:" << endl;
  for (auto& x: myrecipe)
    cout << x.first << ": " << x.second <<endl;

  cout << endl;
  return 0;
}
```
- `umap.erase ()` - Used to erase element . 
```
      umap.erase(element) ; 
      umap.erase( iterator_postion ) ; 
      umap.erase ( first iterator , last iterator ) ;
    
```
- `umap.clear()` - used to clear whole map
- `first_umap.swap( second_umap )` - Exchanges the content of the container by the content of ump, which is another unordered_map object containing elements of the same type. Sizes may differ.
#### Buckets : A bucket is a slot in the container's internal hash table to which elements are assigned based on the hash value of their key.
- `umap.bucket( key ) ` -  Returns the bucket number where the element with key k is located.
- `umap.bucket_count()` -  The current amount of buckets.
- `umap.max_bucket_count()` - Returns the maximum number of buckets that the unordered_map container can have.This is the maximum potential number of buckets the container can have due to system constraints or limitations on its library implementation.
- `umap.bucket_size (  n )` - Returns the number of elements in bucket n.`n = Bucket number.This shall be lower than bucket_count.`

