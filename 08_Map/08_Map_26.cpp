#include<bits/stdc++.h>
using namespace std;
int main() {
    map<string, set<string>> next;
    string st1, st2;
    while (cin >> st1) {
        if (!(cin >> st2)) break;
        if (next.find(st1) == next.end()) next[st1] = {};
        if (next.find(st2) == next.end()) next[st2] = {};
        next[st1].insert(st2);
        next[st2].insert(st1);
    }
    set<string> out = next[st1];
    out.insert(st1);
    for (auto st : next[st1]) {
        for (auto s : next[st])
            out.insert(s);
    }
    for (auto s : out)
        cout << s << endl;
}