#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    getline(cin,s1); getline(cin,s2);
    multiset<char> c1,c2;
    for(auto c : s1){
        if(isupper(c)) c1.insert(tolower(c));
        else if(islower(c)) c1.insert(c);
    }
    for(auto c : s2){
        if(isupper(c)) c2.insert(tolower(c));
        else if(islower(c)) c2.insert(c);
    }
    if(c1 == c2) cout << "YES";
    else cout << "NO";
}