#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_subset(vector<string> s1, vector<string> s2) {
    for (auto e : s1)
        if (find(s2.begin(), s2.end(), e) == s2.end()) 
			return false;
    return true;
}
int main() {
    string T[5][5];
    char bingo[5];
    for (int i=0; i<5; ++i) cin >> bingo[i];
    for (int i=0; i<5; ++i) {
        for (int j=0; j<5; ++j) {
            string t;
            cin >> t;
            T[i][j] = bingo[j] + t; 
        }
    }
    //------------------------------    
    vector<vector<string>> bingo_seqs;
    // bingo_seqs contains 5 rows, 5 columns and 2 diags
    vector<string> s;
    for (int i=0; i<5; ++i) {
        s.clear();
        for (int j=0; j<5; ++j) 
            s.push_back(T[i][j]);
        bingo_seqs.push_back(s);
    }
    for (int i=0; i<5; ++i) {
        s.clear();
        for (int j=0; j<5; ++j)
            s.push_back(T[j][i]);
        bingo_seqs.push_back(s);
    }
    s.clear();
    for (int i=0; i<5; ++i) 
        s.push_back(T[i][i]);
    bingo_seqs.push_back(s);
    s.clear();
    for (int i=0; i<5; ++i) 
        s.push_back(T[4-i][i]);
    bingo_seqs.push_back(s);
    //------------------------------
    vector<string> inp = {T[2][2]}; // add free bingo_seqs
    bool has_bingo = false;
    int N = 0;
    while (!has_bingo) {
        string t;
        cin >> t;
        inp.push_back(t);
        N += 1;
        for (int i=0, n=bingo_seqs.size(); i<n; ++i) {
            if (is_subset(bingo_seqs[i], inp)) { // BINGO
                if (!has_bingo)
                    cout << N << endl;
                has_bingo = true;
                string out;
                for (auto e : bingo_seqs[i])
                    if (e != T[2][2])
                        out += e + ", ";
                cout << out.substr(0,out.size()-2) << endl;
            }
        }
        if (has_bingo) break;
    }
}

