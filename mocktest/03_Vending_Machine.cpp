#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    vector<string> order;
    cin.ignore();
    getline(cin,s);
    string tmp = "";
    for(auto c : s){
        if(c == ' '){
            order.push_back(tmp);
            tmp = "";
        }else tmp += c;
    }
    if(!tmp.empty()) order.push_back(tmp);
    long long total = 0;
    for(auto c : order){
        string num = c.substr(1,c.size()-1);
        long long a = stoll(num);
        total += a*n;
    }
    cout << total;
}