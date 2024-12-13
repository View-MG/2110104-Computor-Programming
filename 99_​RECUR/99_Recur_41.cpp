#include <bits/stdc++.h>
using namespace std;

const int N = 500;
int n, st, en;
bool chk = true;
set<int> adj[N];
vector<int> result;

void show() {
    chk = false;
    for (int i = 0; i < result.size(); i++) {
        if (i != result.size() - 1) 
            cout << result[i] << " -> ";
        else 
            cout << result[i];
    }
    cout << endl;
}

void dfs(int u) {
    if (u == en) show();
    for (int v : adj[u]) {
        result.push_back(v);
        dfs(v);
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
    if (chk) cout << "no" << endl;

    return 0;
}
