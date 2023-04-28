// Bismillahir Rahmanir Rahim
/*

string author;
author = Hafiz_Sakib;

*/
#include <bits/stdc++.h>
using namespace std;

#define Boost                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

vector<int> v;
int n;

void subset(int k)
{
    if (k > n)
    {
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    v.push_back(k);
    subset(k + 1);
    v.pop_back();
    subset(k + 1);
}

int main()
{
    Boost;
    cin >> n;
    subset(1);
    return 0;
}
