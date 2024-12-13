#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin >> n;
    n += "$";
    vector<string> bwt;
    for(int i{0}; i <n.size(); i++) {
        bwt.push_back(n);
        rotate(n.begin(), n.begin()+1, n.end());
    }
    sort(bwt.begin() , bwt.end());
    for (auto i : bwt) {
        cout << i.back();
    }
}