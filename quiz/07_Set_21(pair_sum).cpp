#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum,n; 
    cin >> sum;
    int count=0;
    set<int> num;
    while(cin >> n){
        int dif = sum-n;
        if(num.find(dif) != num.end()) count++;
        num.insert(n);
    }
    cout << count;
}