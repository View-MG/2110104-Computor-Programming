#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> v) {
    int s = 0;
    for (auto e : v)
        s += e;
    return s;
}
vector<vector<int>> first_fit(vector<int> d) {
    vector<vector<int>> bins;
    for (auto e : d) {
        bool added = false; 
        for (auto & b : bins) {
            if (sum(b) + e <= 100) {
                b.push_back(e);
                added = true;
                break;
            }
        }
        if (!added)
            bins.push_back({e});
    }
    return bins;
}
vector<vector<int>> best_fit(vector<int> d) {
    vector<vector<int>> bins;
    for (auto e : d) {
        int min_r = 100;
        int min_i = -1;
        for (int i=0; i<bins.size(); ++i) {
            int r = 100 - (sum(bins[i]) + e);
            if (r >= 0 && r < min_r) {
                min_r = r;
                min_i = i;
            }
        }
        if (min_i == -1) {
            bins.push_back({e});
        } else {
            bins[min_i].push_back(e);
        }
    }
    return bins;
}
void print_result(vector<vector<int>> bins) {
    // { {100-sum(b), b.size(), b}, { }}
    vector<tuple<int, int, vector<int>>> x;
    for (auto & b : bins) {
        sort(b.begin(), b.end());
        x.push_back( {100-sum(b), b.size(), b} );
    }
    sort(x.begin(), x.end());
    for (auto & t : x) {
        for (auto e : get<2>(t)) {
            cout << e << ' ';
        }
        cout << endl;
    }
}
int main() {
    string cmd;
    cin >> cmd;
    vector<int> d;
    int e;
    while (cin >> e)
        d.push_back(e);
    if (cmd == "first")
        print_result(first_fit(d));
    else
        print_result(best_fit(d));
}
