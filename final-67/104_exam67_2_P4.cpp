#include<bits/stdc++.h>
using namespace std;
bool sortMap(pair<pair<int,int>,string> &a , pair<pair<int,int>,string> &b){
    if(a.first.first == b.first.first && a.first.second == b.first.second ) return a.second < b.second;
    if(a.first.first == b.first.first) return a.first.second < b.first.second;
    return a.first > b.first;

}
int main(){
    int n; cin >> n;
    unordered_map<string,pair<int,int>> submission;
    vector<pair<pair<int,int>,string>> foutput;
    map<string,set<int>> team;
    map<string,vector<int>> wteam;
    set<int> times;
    for(int i{0} ; i<n ; i++){
        int minute,choice;
        string name,status;
        cin >> minute >> name >> choice >> status;
        if(submission.find(name) == submission.end()){
                submission[name] = {0,0};
        }
        if(status == "T") {
            if(team[name].find(choice) == team[name].end()){
                submission[name].first++;
                submission[name].second += minute;
                team[name].insert(choice);
            }
        }
        else if(status == "F"){
            if(team[name].find(choice) == team[name].end()){
                submission[name].second += 20;
            }
            wteam[name].push_back(choice);
        }
    }
    for(auto &x : wteam){
        for(int i{0} ; i<x.second.size() ; i++){
            if(team[x.first].find(x.second[i]) == team[x.first].end()){
                submission[x.first].second -= 20;
            }
        }
    }
    for(auto &x : submission){
        foutput.push_back({{x.second.first,x.second.second},x.first});
    }
    sort(foutput.begin(),foutput.end(),sortMap);
    int m= foutput.size() < 3 ? foutput.size() : 3;
    int before=0,panalty=0;
    if(foutput[0].first.first == 0) return 0;
    for(int i{0} ; i<m ; i++){
        if(foutput[i].first.first == 0) return 0;
        cout << foutput[i].second << " " << foutput[i].first.first << " " << foutput[i].first.second << endl;
    }
    if(foutput.size() > 3){
        if(foutput[2].first.first == 0) return 0;
        before=foutput[2].first.first;
        panalty=foutput[2].first.second;
        int i=3;
        while(foutput[i].first.first == before && foutput[i].first.second == panalty){
            cout << foutput[i].second << " " << foutput[i].first.first << " " << foutput[i].first.second << endl;
            i++;
        }
    }
}