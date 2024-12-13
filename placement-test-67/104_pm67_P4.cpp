#include<bits/stdc++.h>
using namespace std;
vector<string> buckets, combinations;
void findCombination(string result) {
    if (result.length() >= buckets.size()) {
        sort(result.begin(),result.end());
        combinations.push_back(result);
        return ;
    }

    for (char character : buckets[result.length()]) {
        findCombination(result + character);
    }
}
bool customSort(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second == b.second) {
        return a.first < b.first; 
    }
    return a.second > b.second;
}
int main(){
    int n; cin >> n;
    for(int i=0 ; i<n ; i++){
        string tmp;
        cin >> tmp;
        buckets.push_back(tmp);
    }
    findCombination("");
    unordered_map<string,int> count;
    for(int i=0 ; i<combinations.size() ; i++){
        count[combinations[i]]++;
    }
    int m;
    cin >> m;
    vector<pair<string,int>> ans;
    for (const auto& pair : count) {
        ans.push_back({pair.first,pair.second});
    }
    sort(ans.begin(),ans.end(),customSort);
    for(int i=0 ; i<m;i++){
        cout << ans[i].first << endl;
    }

}