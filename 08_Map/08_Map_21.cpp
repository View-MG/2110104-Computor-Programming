#include <bits/stdc++.h>
using namespace std;
int main() {
    map<string, vector<string>> cartoon;
    vector<string> order;
    string x, y;
    while (cin >> x >> y) {
        if (cartoon.find(y) == cartoon.end()) order.push_back(y);
        cartoon[y].push_back(x);
    }
    for (const auto& key : order) {
        cout << key << ": ";
        for (const auto& name : cartoon[key]) {
            cout << name << " ";
        }
        cout << endl;
    }
}

