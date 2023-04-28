// find sum of all divisors of n.
#include <bits/stdc++.h>
using namespace std;
int sumofFactors(int n)
{
    int res = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        int curr_sum = 1;
        int curr_term = 1;
        while (n % i == 0) {
            n = n / i;
            curr_term *= i;
            curr_sum += curr_term;
        }
        res *= curr_sum;
    }
    if (n >= 2)
        res *= (1 + n);
    return res;
}

// Driver code
int main()
{
    int n;
    cin>>n;
    cout << sumofFactors(n);
    return 0;
}
