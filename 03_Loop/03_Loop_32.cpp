#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string line;
        string key = "-RYGNBPK";
        getline(cin, line);
        
        if (line.empty() || line.at(0) != 'R') {
            cout << "WRONG_INPUT" << endl;
            continue;
        }
        
        char last = 'R';
        bool RED = true;
        int score = 1;
        bool valid = true;
        
        for (auto x : line.substr(1)) {
            if (x == ' ') continue;
            if (last == 'R' && x == 'R' && RED) {
                cout << "WRONG_INPUT\n";
                valid = false;
                break;
            }
            if (!RED && key.find(last) + 1 != key.find(x)) {
                cout << "WRONG_INPUT\n";
                valid = false;
                break;
            }
            if (last != 'R' && x != 'R' && RED) {
                if (x != 'Y') {
                    cout << "WRONG_INPUT\n";
                    valid = false;
                    break;
                }
                RED = false;
            }
            score += key.find(x);
            last = x;
        }
        
        if (valid) {
            cout << score << endl;
        }
    }
    return 0;
}
