### lexicographical_compare in C++

C++ STL offer many utilities to solve basic common life problems. Comparing values are always necessary, but sometimes we need to compare the strings also. Therefore, this article aims at explaining about “lexicographical_compare()” that allows to compare strings. This function is defined in “algorithm” header. It has two implementations.
```
Syntax 1 : lexicographical_compare(iter1 beg1, iter1 end1, iter2 beg2, iter2 end2)
```

```
// C++ code to demonstrate the working of
// lexicographical_compare()

#include<iostream>
#include<algorithm> // for lexicographical_compare()
using namespace std;

int main()
{
	// initializing char arrays
	char one[] = "geeksforgeeks";
	char two[] = "gfg";
	
	// using lexicographical_compare for checking
	// is "one" is less than "two"
	if( lexicographical_compare(one, one+13, two, two+3))
	{
		cout << "geeksforgeeks is lexicographically less than gfg";
		
	}
	else
	{
		cout << "geeksforgeeks is not lexicographically less than gfg";
		
	}
	
}



```
Possible application : Comparing strings can be generally used in dictionary, where we need to place words in lexicographical order. Example of this can be to find the word which occurs 1st in dictionary among given set of words.
