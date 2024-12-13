#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    if (n==0) cout << "zero" << endl; else (n>0) ? cout << "positive" << endl : cout << "negative" << endl;
    (n%2 == 0) ? cout << "even" : cout << "odd";
}