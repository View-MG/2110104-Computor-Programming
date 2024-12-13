#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string,string> name,nickname;
    cin >> n;
    while(n--){
        string s1,s2;
        cin >> s1 >> s2;
        name[s1] = s2; name[s2] = s1;
    }
    cin >> n;
    while(n--){
        string s1; cin >> s1;
        if(name.find(s1) != name.end()) cout << name[s1] << endl;
        else cout << "Not found" << endl;
    }

}