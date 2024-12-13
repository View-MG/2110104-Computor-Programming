#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> unions,intersect1,intersect2,difference;
    string line;
    getline(cin,line);
    istringstream iss(line);
    int tmp;
    while(iss >> tmp){
        unions.insert(tmp);
        intersect1.insert(tmp);
        difference.insert(tmp);
    }
    while(getline(cin,line)){
        istringstream iss(line);
        while(iss >> tmp){
            unions.insert(tmp);
            if(intersect1.find(tmp) != intersect1.end()) intersect2.insert(tmp);
            if(difference.find(tmp) != difference.end()) difference.erase(tmp);
        }
        intersect1 = intersect2;
        intersect2.clear();
    }
    cout << "U: ";
    if(unions.empty()) cout << "empty set";
    else for(auto n : unions) cout << n << " ";
    cout << endl << "I: ";
    if(intersect1.empty()) cout << "empty set";
    else for(auto n : intersect1) cout << n << " ";
    cout << endl << "D: ";
    if(difference.empty()) cout << "empty set";
    else for(auto n : difference) cout << n << " ";
}