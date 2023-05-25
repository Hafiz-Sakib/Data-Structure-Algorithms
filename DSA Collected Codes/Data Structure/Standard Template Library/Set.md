
### Set :

Sets are a type of `associative containers` in which `each element has to be unique`, because the value of the element 
identifies it. The value of the element `cannot be modified once it is added to the set`, though it is `possible to remove
and add the modified value` of that element.

#### Basic functions :
                  	begin() –  begin() function returns a bidirectional iterator to the first element of the container. 
                                                 set_name . begin();
                  	end() –                      set_name . end();
                  	size() – Returns the number of elements in the set.
                                                 set_name . size();
                  	max_size() – Returns the maximum number of elements that  set can hold.
                                                 set_name .max_size();
                  	empty() – Returns whether the set is empty.
                                                 set_name .empty();
                  -------------------------------------------Time Complexity : O(1)

                  	cbegin() , cend()  – return a constant iterator which can’t be modified.
                                                set_name .cbegin();     set_name .end() ;
                  	rbegin() , rend()  –return a  reverse iterator . 
                                                set_name . rbegin();     set_name .rend() ;
                                                
                  set < int > :: reverse_iterator it_name ;
                  	crbegin() , crend() – return a reverse constant iterator which can’t be modified.
                                                set_name . crbegin();     set_name .crend() ;
                 
-----------------------------------------------------------------------------------------------------
#### Other functions : 

-	find()  – which returns an iterator to the element which is searched in the set container. If the element 
            is not found, then the iterator points to the position just after the last element in the set 
            that is set_name . end() .
            
                                          set_name .find( element )
                                            Ex:  
                                            auto it = s.find( value );
                                                     if( it==s.end() )   cout<<"not found "<<endl;
                                                     else  cout<<*it<<endl;
                                            *it shows same value which we are searching .
-------------------------------------------------------------------------------------------------------------------
-	insert () :  used to insert element in set . In there ways ,we can use this built-in function as follow : 

                     1.set_name . insert( element / value ) ;
                     2.set_name . insert( iterator_position ,  value ) ;
                     3.set_name . insert( first_iterator , last_iterator ) ;

                    Ex :    p.insert(s.find(50), s.find(900));
                            p.insert(s.begin(), s.end());

            *find() return iterator of a value . If not avilable in set then it return end()  .

 Time Complexity: log(N) ,Where ‘N’ is the number of elements in the set
-------------------------------------------------------------------------------------------------------------------

- erase() : erase() function is used to remove elements from a container from the specified position or range.

                  1.set_name . erase ( iterator_position ) ;
                  2.set_name . erase ( first_iterator , last_iterator ) ;
                  
                  Ex :
                  p.erase(p.begin() , p.end());
                  p.erase(p.find(value) , p.find(value));

                  Time Complexity:
                  1.  – amortized constant - 
                  2.  – O(n), n is number of elements between starting position and ending position.
--------------------------------------------------------------------------------------------------------------------

-	clear() :  function is used to remove all the elements of the set container, thus making its size 0.
          
                  set_name . clear() ;
                  Time complexity  :   Linear i.e. O(n)

--------------------------------------------------------------------------------------------------------------------
- count() :  returns the number of times an element occurs in the set. It can only return 1 or 0 as the set 
             container contains unique elements only.
               
                set_name  .  count ( element ) ;
                
                Ex:  bool d = s.count(101);
                d is either 0 or 1 .
                
---------------------------------------------------------------------------------------------------------------------
-	upper_bound( k ) :  which returns an iterator pointing to the immediate next element which is just greater than k. 
                      If the key passed in the parameter exceeds the maximum key in the container, then the iterator 
                      returned points to next of last element (which can be identified using ` set.end() ` function) in 
                      the set container.

                                                  set_name . upper_bound ( element / key ) ;
                                                  Ex : 
                                                  auto it  = s.upper_bound(99);
                                                  if(r==s.end())
                                                                  cout<<"NOT Found"<<endl;
                                                         else
                                                                  cout<<*r<<endl;
                                                                  
-----------------------------------------------------------------------------------------------------------------------------------------
-	lower_bound( k ) :  which returns an iterator pointing to the element in the container which is equal to k passed in the parameter. 
                      In case k is not present in the set container, the function returns an iterator pointing to the immediate next 
                      element which is just greater than K. If the key passed in the parameter exceeds the maximum key in the container, 
                      then the iterator returned points to next of last element ( `set . end()`) in the set container.

If the key passed in the parameter exceeds the maximum value in the container, then the iterator returned 
                      the number of elements in the container.(total element ) :: same for upper_bound
                      
                                   
                                   set_name . lower_bound ( element ) 
                                    Ex :        auto r = s.  lower_bound( 100 );
                                                if(r==s.end())
                                                       cout<<" NOT Found "<<endl;
                                                else
                                                       cout<<*r<<endl;
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
	equal_range() :   which `returns an iterator of pair`. The pair refers to the range that includes all the elements in the container which have a key equivalent to k. 
                    Since set contains unique elements, the lower bound will be the element itself and the upper bound will point to the next element after key k. 
                    If there are no elements matching key K, the range returned is of length 0 with both iterators pointing to the first element which is greater than 
                    k according to the container’s internal comparison object (key_comp).
                    
If the key exceeds the maximum element in the set container, it returns an iterator pointing to the last element in the set container.

> Special case  : If  Key is equal to the largest one , then second iterator return set.end() and first one  as discussed  .  
                                    
                                   
                                    auto it = s.equal_range ( 10 );

                                    if(it.first!=s.end()) 
                                         cout<<*it.first<<endl;
                                    else
                                         cout<<"NOT found"<<endl;

                                    if(it.second!=s.end())
                                         cout<<*it.second<<endl;
                                    else 
                                         cout<<"NOT found"<<endl;
                                         
                                         
--------------------------------------------------------------------------------------------------------------------------------------
-	swap() : swap two same type set to each other .
        
        set_1 . swap ( set_2 )
        
--------------------------------------------------------------------------------------------------------------------------------------
-	Operator “ = ” :  use to assign a set to another one . 
                    
        Set_1  = Set_2 
        
--------------------------------------------------------------------------------------------------------------------------------------

-	emplace() & emplace_hint() : emplace() works be like 1.insert() and emplace_hint() works be like 2 .insert() . 
	                              Time Complexity and use process  is same .


#### emplace() vs insert :
When we use insert, we create an object and then insert it into the set. With emplace(), the object is constructed in-place.




