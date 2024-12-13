#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string modeFind(vector<pair<ll,bool>>& mode ,int start ,int end){
    if(start<=0) start=1;
    if(end >= mode.size()) end = mode.size()-1;
    unordered_map<ll,int> freq;
    for(int i=start ; i<=end ;i++){
        if(mode[i].second == true) freq[mode[i].first]++;
    }
    if(freq.empty()) return "X";
    ll value=99999999999;
    int time=0;
    for(const auto& p : freq){
        if(p.second > time){
            time = p.second;
        }
    }
    for(const auto& p : freq){
        if(p.second == time && p.first < value){
            value = p.first;
        }
    }
    return to_string(value);    
}
int main(){
    int k,n,m;
    cin >> k >> n >> m;
    vector<pair<ll,bool>> day(n+1,{0,false});
    for(int i=0 ; i<m ; i++){
        int d;
        ll data;
        cin >> d >> data;
        day[d].first = data;
        day[d].second = true;
    }
    for(int i=1 ; i<=n ; i++){
        cout << modeFind(day,i-k,i+k) << " ";
    }
}
