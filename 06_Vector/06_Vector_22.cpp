#include<bits/stdc++.h>
using namespace std;
bool sortPair(const pair<int,pair<int,int>> &a , const pair<int,pair<int,int>> &b){
    if(a.first == b.first) return a.second.first < b.second.first;
    return a.first < b.first;
}
int main(){
    string s; getline(cin,s);
    int n,max_index=0;
    vector<int> num;
    vector<pair<int,pair<int,int>>> ans;
    istringstream iss(s);
    while(iss >> n) num.push_back(n);
    for(int i{0} ; i<num.size() ; i++){
        int currentNumber = num[i];
        int count=0;
        while(i<num.size()-1 && currentNumber == num[i+1]){
            i++;
            count++;
        }
        max_index = max(max_index,count);
        ans.push_back({num[i],{i-count,i+1}});
    }
    sort(ans.begin(),ans.end(),sortPair);
    for (auto &n : ans) {
        if((n.second.second) - (n.second.first) == max_index+1){
            cout << n.first << " --> x[ " << n.second.first << " : " << n.second.second << " ]"<< endl;
        }
    }
}