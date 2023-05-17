# Pair :

```
   - The pair container consisting of two data elements or objects.
  	 The first element is referenced as ‘first’ and the second element as ‘second’ a
     nd the order is fixed (first, second).
    
  -	Pair is used to combine together two values which may be different in type. Pair 
     provides a way to store two heterogeneous objects as a single unit.
    
  -	Pair can be assigned, copied and compared. The array of objects allocated in a map 
    or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique 
    keys associated with their ‘second’ value objects.
    
  -	To access the elements, we use variable name followed by dot operator followed by the
    keyword first or second.

```

#### Syntax:
  
              Pair< data_type 1  , data_type 2  > pair_name ;
              
 
 #### Access:
              
              pair_name . first ;
              Pair_name . second;
              
#### Initialize:
          After declare a pair , it initialized zero if both are integer .
```
          	pair< dt_1 ,  dt_2  > p_name ( val_first , val_second )
          	pair< dt_1 , dt_2 > p_name ( previously inilialized pair)
          	Use of make_pair()
                   Pair_name = make_pair( val_first , val_second )
   ```

 #### Operators(=, ==, !=, >=, <=) :
  
  	equal(=) :            It assigns new object for a pair object.It also can assign a pair to another pair.Comapre both.
  	Comparison (==)  :    For given two pairs the comparison operator compares the first value and second value of those two pairs .
                            If both pair are equal ,then it returns True else False .
  	equal (!=)  :         vice-versa of Comparison.
  	Logical( >=, <= ) :   It returns 0 or 1 . Most important is ,it compare first value only.It’s called  lexicographically compares .

                   pair< int , int > pa1,pa2;
              (pa1 == pa2 ) ,(pa1 != pa2 ) ,(pa1 > pa2 )
              (pa1 < pa2 )  ,(pa1 >= pa2 ) ,(pa1 <= pa2 ) 

  #### swap : 
           
            pair_1 =  ( 5,6 ); pair_2 = ( 8,9 ) 
              pair_1 .swap ( pair_2 )
            pair_1 =  ( 8,9 ); pair_2 =(  5,6 ) 

 #### Function parameter passing :
 
            void print( pair<int,string> &q);

            int main(){
                pair<int ,string >p;
                print(p);    //call by referrence
            return 0;
            }

## Tuple :


In tuple we can pair more than two heterogeneous objects.
  
#### Syntax:
              tuple<T1 ,T2 ,T3 ,T4. . . . . > tuple_name ;
#### Access:
              get<0> (tuple_name );
              get<1> (tuple_name );
              get<2> (tuple_name );
              . . . . .
              . . . . . 
#### Initialize:
              After declare a tuple , it initialized zero if all three are integers.

                  	tuple<T1 ,T2 ,T3 ,T4. . . . .   > t_name (val_1,val_2,val_3. .  )

                  	tuple<T1 ,T2 ,T3 ,T4. . . . .   > t_name ( previously inilialized tuple)
                   // data_type must have to be equal

                  	Use of make_tuple()
                  tuple_name = tuple_pair( val_1 , val_2 , val_3,. . .);
#### swap : 
                  tuple_1 =  ( 5,7,8 ); tuple_2 = ( 12,23,45 ) 
                            tuple_1 .swap ( tuple_2 )
                  tuple_1 = ( 12,23,45 ); tuple_2 = (  5,7,8 ) 
### tie() :

  The work of tie() is to unpack the tuple values into seperate variables. There are two variants of tie(), with and without “ignore” .
  “ignore” ignores a particular tuple element and stops it from getting unpacked.
```
  int main(){
      tuple< int ,string ,float > tp ( 45,"sajjad",5.67 );
      tuple< int ,string ,float > p (100,"safat",10.111  );

      int x;
      string s;
      float f;

      tie(x,ignore,f) = tp;      // x = 45 , f = 5.67
      tie(ignore,s,ignore) = p; //  s = "safat"

  return 0;
  }
```
  tuple_cat() :  concatenates two or more than two tuples and returns a new tuple.

```
   tuple_name = tn
   auto  p = tuple_cat(tn1 , tn2 ,tn3 ,…..);
```

  tuple_size<decltype()> : return the number of elements in a tuple .

  `tuple_size< decltype( tuple_name )>`
  
 ### Operators( == , != , > , < , <= , >= ) :
    lexicographically compares two tuple like pairs.
