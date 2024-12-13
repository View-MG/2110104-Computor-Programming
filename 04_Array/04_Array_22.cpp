#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string line,card="";
    for (int i=0; i<n; i++){
        string tmp;
        cin >> tmp;
        tmp == "10" ? card+="0" : card+=tmp;
    }
    cin.ignore();
    getline(cin,line);
    for(auto c : line) {
        string s1 = card.substr(0,n/2),s2 = card.substr(n/2,n/2);
        if (c == 'C') {
            card = "";
            card = s2+s1;
        }
        if (c == 'S'){
            card = "";
            for(int i{0} ; i<n/2 ; i++){
                card += s1[i];
                card += s2[i];
            }
        }
    }
    for (auto c : card) c=='0' ? cout << "10 " : cout << c << " ";
}
