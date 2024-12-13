#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int powerMod(int a, int m, lli k) {
    if(k == 0) return 1;
    lli half = powerMod(a, m, k / 2);
    lli halfSquared = (half * half) % m;
    if(k % 2 == 0) return halfSquared;
    else return (a * halfSquared) % m;
}

int main() {
    lli k;
    int a, m;
    cin >> a >> k >> m;
    cout << powerMod(a, m, k);
}
