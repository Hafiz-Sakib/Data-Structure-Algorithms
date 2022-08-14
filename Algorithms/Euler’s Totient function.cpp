/*#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
    float result = n;
    for(int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
            result *= (1.0 - (1.0 / (float)p));
        }
    }
    if (n > 1)
        result *= (1.0 - (1.0 / (float)n));
    return (int)result;
}

int main()
{
    int n;
    
    for(n = 1; n <= 10; n++)
    {
        cout << "Phi" << "("<< n << ")" << " = "<< phi(n) <<endl;
    }
    return 0;
}

*/

/*#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
    int result = n;
    for(int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
                 
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}
int main()
{
    int n;
    for(n = 1; n <= 10; n++)
    {
        cout << "Phi" << "("<< n << ")" << " = "<< phi(n) <<endl;
    }
    return 0;
}*/
 


#include<iostream>
using namespace std;
void computeTotient(int n)
{
    long long phi[n+1];
    for (int i=1; i<=n; i++)
        phi[i] = i; 
    for (int p=2; p<=n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;
            for (int i = 2*p; i<=n; i += p)
            {
            phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
    for (int i=1; i<=n; i++)
    cout << "Totient of " << i << " is "
        << phi[i] << endl;
}

int main()
{
    int n = 10;
    computeTotient(n);
    return 0;
}
