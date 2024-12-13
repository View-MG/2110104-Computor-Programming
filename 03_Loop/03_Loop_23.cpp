#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    getline(cin, n);
    int a; cin >> a;
    string result = "";
    int i=0;
    while (i < n.size()) {
        int j=i;
        while (j < n.size() && n[j] == n[i]) j++;
        if (j - i < a) result += n.substr(i, j-i);
        i=j;
    }
    cout << result << endl;
}
