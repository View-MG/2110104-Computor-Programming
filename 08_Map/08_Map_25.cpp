#include <bits/stdc++.h>
using namespace std;

struct Location {
    string name;
    vector<string> social;
};

int main() {
    int n, pos = -1;
    cin >> n;
    cin.ignore();
    string line, x, fname;
    vector<Location> location(n);
    vector<string> samelocate;

    for (int i = 0; i < n; i++) {
        cin >> x;
        cin.ignore();
        getline(cin, line);

        location[i].name = x;
        stringstream ss(line);
        string tmp;
        while (ss >> tmp) {
            if (tmp != "*") location[i].social.push_back(tmp);
        }
    }

    cin >> fname;

    for (int i = 0; i < n; i++) {
        if (location[i].name == fname) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        cout << ">> Location not found" << endl;
        return 0;
    }

    unordered_set<string> matchedSocials(location[pos].social.begin(), location[pos].social.end());

    for (int j = 0; j < n; j++) {
        if (pos != j) {
            for (const auto& social_j : location[j].social) {
                if (matchedSocials.find(social_j) != matchedSocials.end()) {
                    if (find(samelocate.begin(), samelocate.end(), location[j].name) == samelocate.end()) {
                        samelocate.push_back(location[j].name);
                    }
                    break; // Stop checking after the first match
                }
            }
        }
    }

    if (samelocate.empty()) {
        cout << ">> Not Found" << endl;
    } else {
        for (const auto& loc : samelocate) {
            cout << ">> " << loc << endl;
        }
    }

    return 0;
}
