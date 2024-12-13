#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,size_t>> student;
    vector<string> num = {"A","B+","B","C+","C","D+","D","F"};
    string grade,name;
    while(cin >> name){
        if(name == "q") break;
        cin >> grade;
        auto it = find(num.begin(),num.end(),grade);
        student.push_back({name,it-num.begin()});
    }
    string tmp = "";
    while(cin >> tmp){
        for(int j{0} ; j<student.size() ; j++){
            if(tmp==student[j].first) {
                if(student[j].second != 0) student[j].second--;
                break;
            }
        }
    }
    for(auto c : student){
        cout << c.first << " " << num[c.second] << endl;
    }
}