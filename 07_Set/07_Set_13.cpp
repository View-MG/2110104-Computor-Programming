#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> winning_team,losing_team;
    string n1,n2;
    while(cin >> n1 >> n2){
        winning_team.insert(n1);
        losing_team.insert(n2);
    }
    bool found = false;
    for(auto s1 : winning_team){
        bool check = true;
        if(losing_team.find(s1) != losing_team.end()) check = false;
        if(check){
            found = true;
            cout << s1 << " ";
        }
    }
    if(!found) cout << "None";
}