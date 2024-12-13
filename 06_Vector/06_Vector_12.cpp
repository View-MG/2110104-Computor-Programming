#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> num;
    num.push_back(n);
    while(n!=1){
        if(n%2==0) n/=2;
        else n=3*n+1;
        num.push_back(n);
    }
    bool first{true};
    int begin = num.size() < 15 ? 0 : num.size()-15;
    for(int i{begin} ; i<num.size() ; i++){
        if(first){
            cout << num[i];
            first=false;
        }else cout << "->"<< num[i];
    }
}