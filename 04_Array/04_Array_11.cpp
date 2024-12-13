#include<bits/stdc++.h>
using namespace std;

int main() {
    string line;
    bool num[10] = {false}, check = false;
    getline(cin, line);
    
    for (auto c : line) {
        if (isdigit(c)) {
            num[c - '0'] = true;
            check = true;
        }
    }
    bool first{false};
    for (int i = 0; i < 10; i++) {
        if (!num[i]) {
            cout << (first ? "," : "") << i;
            first = true;
        }
    }
    if (!first) cout << "None";
}
