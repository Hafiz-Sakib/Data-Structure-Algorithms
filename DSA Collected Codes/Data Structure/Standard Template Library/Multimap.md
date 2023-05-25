###            Multimap
-------------------------------------------------------------------------
source : geekforgeeks & C++.com

Multimap is similar to map with an addition that " multiple elements can have same keys " . Also, it is NOT required that the key value and mapped value pair has to be unique in this case. One important thing to note about multimap is that multimap keeps all the keys in sorted order always. These properties of multimap makes it very much useful in competitive programming.

Basic Operations : 

 
    begin() – Returns an iterator to the first element in the multimap
    
    end() – Returns an iterator to the theoretical element that follows last element in the multimap
    
    size() – Returns the number of elements in the multimap
    
    max_size() – Returns the maximum number of elements that the multimap can hold
    
    empty() – Returns whether the multimap is empty
    
    pair<int,int> insert(keyvalue,multimapvalue) – Adds a new element to the multimap
    swap()  - mmap1.swap(mmap2) ; 
    
    find()  - returns an iterator or a constant iterator which refers to the position where 
    	      the key is present in the multimap. If the key is not present in the multimap 
	      container, it returns an iterator or a constant iterator which refers to multimap.end().
 	      
    upper_bound(k)  -   which returns an iterator pointing to the immediate next element which is just 
    			greater than k. If the key passed in the parameter exceeds the maximum key in the container, 
			then the iterator returned points to the size of Multimap and element = 0 .
    
    lower_bound(k) - returns an iterator pointing to the key in the container which is equivalent 
    		     to k passed in the parameter. In case k is not present in the multimap container, 
		     the function returns an iterator pointing to the immediate next element which is 
		     just greater than k. If the key passed in the parameter exceeds the maximum key in 
		     the container, then the iterator returned points to the size of Multimap and element=0
		     #include <bits/stdc++.h>
		     using namespace std;

		     int main(){
			multimap<int, int> mp;
  
			mp.insert({ 1, 40 });
			mp.insert({ 2, 60 });
			mp.insert({ 2, 20 });
			mp.insert({ 1, 50 });
			mp.insert({ 4, 50 });

	
			auto it = mp.lower_bound(2);
			cout << (*it).first << " "<< (*it).second << endl;
			it = mp.upper_bound(2);
			cout << (*it).first << " "<< (*it).second << endl;
	
			it = mp.lower_bound(3);
			cout << (*it).first << " "<< (*it).second << endl;
    			it = mp.upper_bound(3);
			cout << (*it).first << " "<< (*it).second << endl;
  
			it = mp.lower_bound(5);
			cout << (*it).first << " "<< (*it).second << endl;
    			it = mp.upper_bound(5);
			cout << (*it).first << " "<< (*it).second << endl;
			return 0;
			}

    
                  
                  
#### List of all functions of MultiMap: 
 - insert() : 
 
 ```
  multimap_name.insert({key, element})
  
  multimap_name.insert(iterator position, {key, element})
  
  multimap_name.insert(iterator position1, iterator position2)
  ```
                                        
-   count() : returns the number of times a key is present in the multimap container.

    `map_name.count(key k)`
 - equal_range() : returns an iterator of pairs. The pair refers to the bounds of a range that includes
                   all the elements in the container which have a key equivalent to k. If there are no 
                   matches with key K, the range returned is of length 0 with both iterators pointing to 
                   the first element that has a key considered to go after k according to the container’s 
                   internal comparison object (key_comp).
  ```
  #include <bits/stdc++.h>
using namespace std;
int main()
{
	multimap<int, int> mp;
	mp.insert({ 2, 30 });
	mp.insert({ 1, 200 });
	mp.insert({ 3, 60 });
	mp.insert({ 1,40 });
    mp.insert({ 1,30 });
	mp.insert({ 5, 50 });
    mp.insert({ 7, 500 });
    mp.insert({ 8, 80 });

	
	auto it = mp.equal_range(9);
  
cout <<"Lower bound is : "<< (it.first)->first << " \t "<<(it.first)->second << endl;
cout << "Upper Bound is : "<< (it.second)->first << " \t "<<(it.second)->second << endl;
	return 0;
  
}
```

        
-   erase ()  : 
                                                      `multimap_name.erase(key)`
                                                     ` multimap_name.erase(iterator position)`
                                                      `multimap_name.erase(iterator position1, iterator position2)`
                                                      
   ```
   #include <bits/stdc++.h>
using namespace std;

int main()
{
	multimap<int, int> mp;
	
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 60 });
	mp.insert({ 2, 20 });
	mp.insert({ 5, 50 });

	auto it = mp.find(20);
	mp.erase(it);

	auto it1 = mp.find(5);
	mp.erase(it1);

	for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	}
  
  	auto it1 = mp.find(2);
	auto it2 = mp.find(5);
	mp.erase(it1, it2);

	
	for (auto itr = mp.crbegin(); itr != mp.crend(); ++itr) {
		cout << itr->first
			<< '\t' << itr->second << '\n';
	return 0;
}

   ```
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
                                                      
