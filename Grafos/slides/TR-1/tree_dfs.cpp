#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;

const int MAX { 1010 };
vector<int> adj[MAX];

void dfs(int u, int p)
{
    cout << u << " ";

    for (const auto& v : adj[u])
        if (v != p)
            dfs(v, u);
}

int main()
{
    vector<ii> edges { ii(1, 7), ii(3, 7), ii(7, 4), ii(4, 2), 
        ii(4, 5), ii(5, 6) };

    for (const auto& [u, v] : edges) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // 4 7 1 3 2 5 6
    dfs(4, 0);
    cout << endl;

    return 0;
} 
