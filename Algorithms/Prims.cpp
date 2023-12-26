#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e4 + 5;
typedef pair<long long, int> PII;
bool marked[MAX];
vector<PII> adj[MAX];

long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII>> Q;
    int y, minimumCost = 0;
    Q.push({0, x});
    while (!Q.empty())
    {
        PII p = Q.top();
        Q.pop();
        x = p.second;

        if (marked[x])
        {
            continue;
        }
        minimumCost += p.first;
        marked[x] = true;
        for (int i = 0; i < adj[x].size(); ++i)
        {
            y = adj[x][i].second;
            if (!marked[y])
            {
                Q.push(adj[x][i]);
            }
        }
    }
    return minimumCost;
}

int main()
{
    int nodes, edges, x, y;
    int weight, minimumCost;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; ++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back({weight, y});
        adj[y].push_back({weight, x});
    }

    cout << " Minimum Cost = " << prim(1) << endl;

    return 0;
}
/*
4 5
1 2 1
2 3 2
3 4 3
4 1 4
1 3 5
 */