#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin >> x;
    int y = (x-543)%100;
    cout << (y+static_cast<int>(ceil(y / 4.0))+11)%7;
}