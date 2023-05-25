### Bitwise Operators in C/C++

<ul>
  <li> & (bitwise AND)  : Does AND on every bit of two numbers </li>
  <li> & (bitwise OR)  : Does OR on every bit of two numbers </li>
  <li> & (bitwise XOR )  : Does AND XOR  every bit of two numbers </li>
  <li> << (left shift) :  left shifts the bits of the first operand, the second operand decides the number of places to shift. </li>
  <li> << (left shift) :  right shifts the bits of the first operand, the second operand decides the number of places to shift </li>
  <li> The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it </li>
   
  </ul>

<b>Example: </b>

// C Program to demonstrate use of bitwise operators
```

#include <stdio.h>
intmain()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
  
    // The result is 00000001
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
  
    // The result is 00001101
    printf("a|b = %d\n", a | b);
  
    // The result is 00001100
    printf("a^b = %d\n", a ^ b);
  
    // The result is 11111010
    printf("~a = %d\n", a = ~a);
  
    // The result is 00010010
    printf("b<<1 = %d\n", b << 1);
  
    // The result is 00000100
    printf("b>>1 = %d\n", b >> 1);
  
    return 0;
}

```

<b> Output: </b>

```

a = 5, b = 9
a&b = 1
a|b = 13
a^b = 12
~a = 250
b<<1 = 18
b>>1 = 4

```



<b>Interesting facts about bitwise operators:</b>

<ol>

<li>The left shift and right shift operators should not be used for negative numbers. If any of the operands is a negative number, it results in undefined behaviour.
 For example results of both -1 << 1 and 1 << -1 is undefined. Also, if the number is shifted more than the size of integer, the behaviour is undefined. For example, 1 << 33 is undefined if integers are stored using 32 bits. 
  </li>
  
<li>
  
  The bitwise XOR operator is the most useful operator from technical interview perspective. It is used in many problems. A simple example could be 
<b>“Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number” </b>This problem can be efficiently solved by just doing XOR of all numbers.


  
  ```
  
  #include <stdio.h>
  
// Function to return the only odd
// occurring element
intfindOdd(intarr[], int n)
{
    int res = 0, i;
    for (i = 0; i< n; i++)
        res ^= arr[i];
    return res;
}
  
// Driver Method
int main(void)
{
    intarr[] = { 12, 12, 14, 90, 14, 14, 14 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The odd occurring element is %d ",
           findOdd(arr, n));
    return 0;
}
                     
```
                     
<b>Output:</b>
  
```
The odd occurring element is 90
```

The following are many other interesting problems using XOR operator.
  
 ``` 
i.	Find the Missing Number
ii.	swap two numbers without using a temporary variable
iii.	A Memory Efficient Doubly Linked List
iv.	Find the two non-repeating elements.
v.	Find the two numbers with odd occurences in an unsorted-array.
vi.	Add two numbers without using arithmetic operators.
vii.	Swap bits in a given number/.
viii.	Count number of bits to be flipped to convert a to b .
ix.	Find the element that appears once.
x.	Detect if two integers have opposite signs.
  
  ```

</li>                 
<li> 
  The bitwise operators should not be used in place of logical operators. The result of logical operators (&&, || and !) is either 0 or 1, but bitwise operators return an integer value. Also, the logical operators consider any non-zero operand as 1. For example, consider the following program, the results of & and && are different for same operands.

 ```
  
#include <stdio.h>
  
intmain()
{
    int x = 2, y = 5;
    (x & y) ?printf("True ") : printf("False ");
    (x && y) ?printf("True ") : printf("False ");
    return 0;
}
  
```
  
  <b> Output: </b> False True
  </li> 
<li> 
The left-shift and right-shift operators are equivalent to multiplication and division by 2 respectively. As mentioned in point 1, it works only if numbers are positive.

  ```
  
  #include <stdio.h
intmain()
{
    int x = 19;
    printf("x << 1 = %d\n", x << 1);
    printf("x >> 1 = %d\n", x >> 1);
    return 0;
}
  
  ```
  <b> Output: </b> 
x << 1 = 38
x >> 1 = 9
</li> 
  
<li> 	The & operator can be used to quickly check if a number is odd or even. The value of expression (x & 1) would be non-zero only if x is odd, otherwise the value would be zero.

  ```
  
#include <stdio.h>
intmain()
{
    int x = 19;
    (x & 1) ?printf("Odd") : printf("Even");
    return 0;
}
  
  ```
  
  <b> Output: </b>
Odd
  </li> 
 <li>  
	The ~ operator should be used carefully. The result of ~ operator on a small number can be a big number if the result is stored in an unsigned variable. And the result may be a negative number if the result is stored in a signed variable (assuming that the negative numbers are stored in 2’s complement form where the leftmost bit is the sign bit)

   ```
   
   // Note that the output of the following
// program is compiler dependent
#include <stdio.h>
  
intmain()
{
    unsigned int x = 1;
    printf("Signed Result %d \n", ~x);
    printf("Unsigned Result %ud \n", ~x);
    return 0;
}
   
   ```
   
   <b> Output: </b>
Signed Result -2 
Unsigned Result 4294967294d
   </li> 
   <li>
     Important Links:
     <ul>
<li> [Bits manipulation (Important tactics)](https://www.geeksforgeeks.org/bits-manipulation-important-tactics/)  </li> 
  <li>[Bitwise Hacks for Competitive Programming](https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/)  </li> 
<li>[Bit Tricks for Competitive Programming](https://www.geeksforgeeks.org/bit-tricks-competitive-programming/)  </li> 
     </ul>
  </li> 
  </ol>
