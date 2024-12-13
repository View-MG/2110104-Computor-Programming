#include<bits/stdc++.h>
using namespace std;
string dex2hex(int d) {
    string num = "0123456789ABCDEF";
    if (d < 16) return string(1, num[d]);
    return dex2hex(d / 16) + dex2hex(d % 16);
}
int main() {
    int d;
    while (cin >> d) {
        cout << d << " -> " << dex2hex(d) << endl;
    }
    return 0;
}
