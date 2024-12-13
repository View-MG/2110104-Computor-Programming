#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> num1;
    int n,count=0;
    while(cin >> n){
        count++;
        if(!(num1.insert(n).second)){
            cout << count;
            return 0;
        }
    }
    cout << "-1";
}