#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        char secret = s[s.size()-1];
        string ans="";
        bool check = false;
        for(auto i : s){
            if(i == secret) check = !check ? true : false;
            else if(check) ans += i;
        }
        cout << ans << endl;
    }
}