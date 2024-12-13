#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> num = {"soon", "neung", "et", "yi", "song", "sam", "si", "ha", "hok", "chet", "paet", "kao"};
    vector<int> change1 = {0, 1, 1, 2, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<string> lak = {"sip", "roi", "phan", "muen", "saen", "lan"};
    vector<int> change2 = {10, 100, 1000, 10000, 100000, 1000000};
    string n;
    while (getline(cin, n) && n != "q") {
        vector<string> word;
        istringstream iss(n);
        string tmp;
        while (iss >> tmp) word.push_back(tmp);
        long long int ans = 0;
        long long int tmp2 = 0;
        for (int i = 0; i < word.size(); i++) {
            bool isNumber = false;
            if (word[i] == "sip") {
                tmp2 = 10;
                for (int j = 0; j < num.size(); j++) { if (word[i-1] == num[j]) { tmp2 *= change1[j]; break;}}
                ans += tmp2; tmp2 = 0;
                continue;
            }
            for (int j = 0; j < num.size(); j++) {
                if (word[i] == num[j]) {
                    tmp2 += change1[j];
                    isNumber = true;
                    break;
                }
            }
            if (!isNumber) {
                for (int j = 0; j < lak.size(); j++) {
                    if (word[i] == lak[j]) { tmp2 *= change2[j]; break;}
                }
                ans += tmp2;
                tmp2 = 0;
            }
        }
        ans += tmp2;
        cout << ans << endl;
    }
}