### Unordered_set
An unordered_set is implemented using a `hash table` where keys are hashed into indices of a hash table so that the insertion is always randomized. All operations on the unordered_set takes `constant time O(1) on an average` which can `go up to linear time O(n) in worst case` which depends on the internally used hash function, but practically they perform very well and generally provide a constant time lookup operation. 

The unordered_set can contain key of any type – predefined or user-defined data structure but when we define key of type user define the type, we need to specify our comparison function according to which keys will be compared. 

         NOTES:
           0. Unordered_Set is a associative container that contains set of unique objects.
           1. Search, insertion, and removal have average constant-time complexity.
           2. Internally, the elements are organized into buckets.
           3. It uses hashing to insert elements into buckets. 
           4. This allows fast access to individual elements, since once a hash is computed, 
                   it refers to the exact bucket the element is placed into.
                   

#### WHY UNORDERED SET?

    To Maintain a collection of unique items with fast insertion and removal.
    
#### Sets vs Unordered Sets 


|Set|Unordered_set| 
|---------------------------------------|-------------------------------------------------------|
| ordered sequence of unique keys | A set in which key can be stored in any order, so unordered |
| Implemented using balanced tree structure | Implemented using Hashing |
| Time complexity - O(log n) |Time complexity - O(1) |

### Member functions
Below is list of member functions :



#### Capacity :

|Sr.No.|	Capacity & Description|
|--|--|
|1|	var_name.empty() - It is used to test whether container is empty.|
|2|	var_name.size() - It returns container size.|
|3|	var_name.max_size() - It returns maximum size.|

#### Iterators :

|Sr.No.|	Iterators & Description|
|--|--|
|1|	var_name.begin()  - It returns iterator to beginning.|
|2|	var_name.end()  -  It returns iterator to end().|
|3|	var_name.cbegin()  -  It returns const_iterator to beginning.|
|4|	var_name.cend()  -  It return const_iterator to end.|

#### Element lookup :
|Sr.No.|	Element lookup & Description|
|--|--|
|1|	var_name.find( k ) -  It returns an iterator to the element, if the specified value is found, or end() if it is not found in the container..|
|2|	var_name.count() - It returns 1 if an element with a value equivalent to k is found, or zero otherwise.|
|3|	var_name.equal_range() - It is used to get range of elements with a specific key.equal_range() in general returns range that includes all elements equal to given value. For unordered_set where all keys are distinct, the returned range contains at-most one element.

         auto range1 = sample.equal_range(10);
	         if (range1.first != sample.end()) {
			cout << *range1.first << " YO\n"<<endl;
	         }
         if (range1.second != sample.end()) {
			cout << *range1.second << " YO1\n" << endl;
	}

#### Modifiers :
|Sr.No.|	Modifiers & Description|
|--|--|
|1|	var_name.emplace()  -  It is used to construct and insert element.
|2|	var_name.emplace_hint()  -  It is used to construct and insert element with hint.
|3	|var_name.insert()  -  It is used to insert elements. `var_name.insert (Value) or unordered_set_name.insert (Iterator1, Iterator2)`
|4	|var_name.erase()  -  It is used to erase elements. `var_name.erase(iterator1, iterator2),var_name.erase(iterator_position),var_name.erase(element)`
|5|	var_name.clear()  -  It is used to clear content. `var_name.clear()`
|6|	var_name1.swap(var_name2)  -  It is used to swap content.

#### Buckets :
##### The `bucket` is a slot in `the unordered_set’s internal hash table` where elements are stored.Buckets in unordered_set are numbered from 0 to n-1, where n is the total number of buckets.

- ` var_name.bucket( element ) ` - It returns the `bucket number of a specific element`. That is, this function returns the bucket number where a specific element is stored in the unordered_set container.

- ` var_name.bucket_count() ` - It returns the total number of buckets present in an unordered_set container.

- ` var_name.max_bucket_count() ` - This is used to find the maximum number of buckets that unordered_set can have.This function returns the maximum number of buckets a system can have because of the constraints specified by the system and some limitations.

- ` var_name.bucket_size() ` -It returns the total number of elements present in a specific bucket in an unordered_set container.


#### Hash policy :

- `var_name.load_factor()`  : It returns the current load factor in the unordered_set container. The load factor is `the ratio between the number of elements in the container (its size) and the number of buckets (bucket_count)`.
```
load_factor = size / bucket_count
```

The load factor `influences the probability of collision in the hash table` (i.e., the probability of two elements being located in the same bucket). The container `automatically increases the number of buckets to keep the load factor below a specific threshold (its max_load_factor)`, by causing a `rehash`each time when an expansion is needed.
```

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
	unordered_set<int> sample = { 1,11,111,13,12};

	cout << "The size is: " << sample.size();
	
	cout << "\nThe bucket_count is: "<< sample.bucket_count();

	cout << "\nThe load_factor is: "<< sample.load_factor();

	return 0;
}

```

- `var_name.max_load_factor()` : It returns(Or sets) the current maximum load factor of the unordered set container. By default the maximum load factor of an unordered set container is set to 1.0 .

- ` var_name.max_load_factor( float x ) `: It used to set a max_load_factor.
```
#include <iostream>
#include <unordered_set>
using namespace std;
  
int main(){
    unordered_set<int> uset = { 1, 5, 4, 7 };
  
    uset.max_load_factor(0.5); // Now set the max_load_factor as  0.5
  
    cout<<"New Maximum load factor of uset:"<<uset.max_load_factor()<<endl; //Now get the new max_load_factor of uset
  
    cout<< "Current load factor of uset1: "<< uset.load_factor()<< endl;
}

Output:
New Maximum load factor of uset: 0.5
Current load factor of uset1: 0.363636
```


- `var_name.rehash( int n )` - It is used to sets the number of buckets in the container to n or more. If size is greater than the current size of the container, then rehash is called. If it is lower than the current size, then the function has no effect on bucket count of hash.



- `var_name.reserve( int n )` - Used to request capacity change of unordered_set. It sets the number of buckets in the container to contain at least n elements. If n is greater than the current bucket_count multiplied by the max_load_factor, the container’s bucket_count is increased and a rehash is forced. If n is lower than the bucket_count, then the function has no effect on it.



#### Observers : 

- `var_name.hash_function()`  : Used to get hash function. This hash function is a unary function which takes asingle argument only and returns a unique value of type size_t based on it.
```

#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(){

	unordered_set<string> sampleSet;

	// use of hash_function
	unordered_set<string>::hasher fn = sampleSet.hash_function();

	cout << fn("sa") << endl;

	return 0;
}
Output:
5146686323530302118

```

- `operator!=  `:  The != is a relational operator in C++ STL which compares the equality and inequality between unordered_set containers. The Comparison is done in the following procedure:

		First, the sizes are compared.
		Then, each element in one of the containers is looked for in the other.
		
- `operator ==  ` :  The ‘==’ is an operator in C++ STL performs equality comparison operation between two unordered sets and unordered_set::operator== is the corresponding operator function for the same. 
