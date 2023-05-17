
### How to convert an int to a string in C++

There are certain instances in C++ programming when it is necessary to convert a certain data type to another; one such conversion is from an int to a string.

![image](https://user-images.githubusercontent.com/63524824/125035286-6ef12f80-e0b3-11eb-9357-648dc2bcae75.png)

#### 1. Using the stringstream class

The stringstream class is used to perform input/output operations on string-based streams. The << and >> operators are used to extract (<<) data from and insert (>>) data into the stream. Take a look at the example below:

```
#include <iostream>
#include <sstream>
using namespace std;

int main() {
  int num = 100; // a variable of int data type
  
  string str; // a variable of str data type

  // using the stringstream class to insert an int and


  stringstream ss;  
  ss << num;  
  ss >> str;  

  cout << "The integer value is " << num << endl;  
  cout << "The string representation of the integer is " << str << endl;  

}

```


#### 2. Using the to_string() method

The ```to_string()``` method accepts a value of any basic data type and converts it into a string. Take a look at the example below:

```
#include <iostream>
#include<string>  
using namespace std;

int main() {
  int num = 100; // a variable of int data type

  string str; // a variable of str data type

  // using to_string to convert an int into a string
  str = to_string(num);

  cout << "The integer value is " << num << endl;  
  cout << "The string representation of the integer is " << str << endl;  
}

```


#### 3. Using boost::lexical_cast

```boost::lexical_cast``` provides a cast operator which converts a numeric value to a string value. See the example below:

```
#include <iostream>
#include <boost/lexical_cast.hpp>
using namespace std;

int main() {
  // a variable of int data type
  int num = 100;
  // a variable of str data type
  string str; 
  // using boost::lexical_cast<string> to convert an int into a string
  str = boost::lexical_cast<string>(num);

  cout << "The integer value is " << num << endl;  
  cout << "The string representation of the integer is " << str << endl;  
}

```
The libboost-dev package is required in order to use this cast.
