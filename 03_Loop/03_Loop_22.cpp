#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, arr[10000];
    cin >> n;
    int count=0;
    while (n%2 == 0) {
        arr[count++] = 2;
        n/=2;
    }
    for (long long int i=3; i<=sqrt(n); i+=2) {
        while (n % i == 0) {
            arr[count++] = i;
            n /= i;
        }
    }
    if(n>2) arr[count++] = n;
    for (int i=0; i<count; i++) {
        if(i==count-1) cout << arr[i];
        else cout << arr[i] << "*";
    }
}
