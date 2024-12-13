#include <bits/stdc++.h>
using namespace std;

const int N = 500;
int n, st, en;
bool found = false; // Variable to check if the end node is found
set<int> adj[N];
vector<int> result;

void dfs(int u) {
    if (u == en) { // Check if the end node is reached
        found = true;
        return;
    }
    for (int v : adj[u]) {
        result.push_back(v);
        dfs(v);
        if (found) return; // Stop further search if path is found
        result.pop_back();
    }
}

int main() {
    cin >> n >> st >> en;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].insert(b);
    }

    result.push_back(st);
    dfs(st);

    if (found) cout << "yes" << endl;
    else cout << "no" << endl;

    return 0;
}
