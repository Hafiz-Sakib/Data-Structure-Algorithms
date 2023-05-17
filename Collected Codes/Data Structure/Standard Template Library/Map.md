##            Map 
-------------------------------------------------------------------------
source : geekforgeeks & C++.com

Basic operation : 

    begin() – Returns an iterator to the first element in the map
    
    end() – Returns an iterator to the theoretical element that follows last element in the map
    
    size() – Returns the number of elements in the map
    
    max_size() – Returns the maximum number of elements that the map can hold
    
    empty() – Returns whether the map is empty
    
    insert(keyvalue, mapvalue) – Adds a new element to the map
    
    erase(iterator position) – Removes the element at the position pointed by the iterator
    
    erase(const g)– Removes the key value ‘g’ from the map
    
    clear() – Removes all the elements from the map 
    
    find( const g ) - returns an iterator or a constant iterator which refers to the position 
    			where the key is present in the map. If the key is not present in the map
			container, it returns an iterator or a constant iterator which refers to map.end(). 
			
    upper_bound(key) -  which returns an iterator pointing to the immediate next element just greater
    			than k. If the key passed in the parameter exceeds the maximum key in the container, 
			then the iterator returned points to the number of elements in the map container as 
			key and element=0. 
			map_name.upper_bound(key)
			
    lower_bound(k)  - returns an iterator pointing to the key in the map container which is equivalent to k 
    		      passed in the parameter. In case k is not present in the map container, the function 
		      returns an iterator pointing to the immediate next element which is just greater than k. 
		      If the key passed in the parameter exceeds the maximum key in the container, then the 
		      returned iterator points to the number of elements in the map as key and element= any element. 
		      map_name.lower_bound(key)
		      
    at() -   return the reference to the element associated with the key k. - map_name.at(k);
    
    swap() - used to exchange the contents of two maps but the maps must be of same type, although sizes may differ.
    		map1 . swap( map2 ) ;
		swap( map1 , map2 ) ;

    
                  
                  
#### List of all functions of Map: 
 - insert() : 
                                       `  map_name.insert({key, element})`
                                       `  map_name.insert(iterator position, {key, element})`
                                       ` map_name.insert(iterator position1, iterator position2)`
```
 C++ program to illustrate
 map::insert(iteratorposition, {key, element})   map::insert ( iteratorposition1, iteratorposition2 )
#include <bits/stdc++.h>
using namespace std;

int main()
{

	
	map<int, int> mp , mp1 ;

	
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 4, 30 });
	mp.insert({ 5, 40 });

	auto it = mp.find(2);

	    "inserts {3, 60} starting the search from"
	    "position where 2 is present"
	mp.insert(it, { 3, 60 });

	    --> prints the elements
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
  
  
  
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
    mp.insert({ 3, 50 });
	mp.insert({ 4, 60 });
    mp.insert({ 5, 70 });
	mp.insert({ 6, 80 });

  	auto it = mp.find(5) ;
	mp1.insert(mp.begin(), it);


	cout << "Elements in mp1 are\n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp1.begin(); itr != mp1.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}

 ```
                                        
-   count() : is a built-in function in C++ STL which returns 1 if the element with key K is present in the map container. 
                                              It returns 0 if the element with key K is not present in the container.
                                                       
`  map_name.count(key k) `
 - equal_range() : is a built-in function in C++ STL which returns a pair of iterators. The pair refers to the bounds of a range that includes all the elements in the container which have a key equivalent to k. Since the map container only contains unique key, hence the first iterator in the pair returned thus points to the element and the second iterator in the pair points to the next key which comes after key K. If there are no matches with key K, the  range returned is of length 1 with both iterators pointing to the an element which has a key denoting the size  of map and elements as 0.
                                                 
    `iterator map_name.equal_range(key)`
   ```
   
    map<int, int> mp; 

    mp.insert({ 4, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 6, 60 }); 

    pair<map<int, int>::iterator, 
    map<int, int>::iterator>  it; 
    
     it = mp.equal_range(10); 
       cout << "The lower bound is "  << it.first->first << ":"  << it.first->second; 
       cout << "\nThe upper bound is "<< it.second->first  << ":" << it.second->second; 
       return 0; 
    Output:
        The lower bound is 3:0   -> size returned
        The upper bound is 3:0   -> size returned as 10 is not available in Map
 ```  
 ```
- erase ()  :

```
map_name.erase(key)
map_name.erase(iterator position)
map_name.erase(iterator position1, iterator position2)


#include <bits/stdc++.h>
using namespace std;

int main()
{

	
	map<int, int> mp;
	
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 5, 50 });

	
	cout << "The map before using erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}

	
	auto it = mp.find(2);
	mp.erase(it);

	auto it1 = mp.find(5);
	mp.erase(it1);

	
	cout << "\nThe map after applying erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
  
  
	
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 5, 50 });

	
	cout << "The map before using erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}

	
	auto it1 = mp.find(2);
	auto it2 = mp.find(5);
	mp.erase(it1, it2);


	cout << "\nThe map after applying erase() is : \n";
	cout << "KEY\tELEMENT\n";
	for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
	return 0;
}

```
                
                                                      
                                                      
                                            
                                                      
                                                      
                                                      
