//Time Complexity: O(Log min(a, b))
//worst case : a, b are consecutive Fibonacci number 
// gcd(13,8) = gcd( 8,5) = gcd ( 5,3 ) = gcd ( 3,2) = gcd ( 2,1) = gcd(1,0) = 1
// gcd(x,0 ) = x 
//---------------------------
//recursive
//---------------------------
int gcd( int a , int b );{
    if(b==0) return a;
    return gcd( b , a%b ) ;
}

//---------------------------
//using ternary operator
//---------------------------
int gcd ( int a , int b ){
  return b ? gcd ( b , a%b ) : a;
}
//---------------------------
//iterator
//---------------------------
int gcd ( int a , int b ){
        while( b > 0 ){
            a = a % b ;
            swap ( a , b );
            }
            return a ;b ? gcd ( b , b%a ) : a;
  }
//------------------------------------------------------------------------
//      Binary GCD ace...BUji nai?    -- Binary GCD avoid Modulor operator .
//--------------------------------------------------------------------------
In c++ , there is a built-in function .
    That is :   __gcd( a, b ) ;
    When one of the numbers is zero, while the other is non-zero, their greatest common divisor, by definition, is the second number.
    When both numbers are zero, their greatest common divisor is undefined (it can be any arbitrarily large number),
    but we can define it to be zero.
    Which gives us a simple rule: if one of the numbers is zero, the greatest common divisor is the other number.
