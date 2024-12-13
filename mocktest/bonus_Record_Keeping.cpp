#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map<string,int> record;
    cin.ignore();
    for(int i{0} ; i<n ; i++){
        string s;
        getline(cin,s);
        sort(s.begin(),s.end());
        record[s]++;
    }
    int maxs=0;
    for(auto &x : record){
        maxs = max(maxs,x.second);
    }
    cout << maxs;
}