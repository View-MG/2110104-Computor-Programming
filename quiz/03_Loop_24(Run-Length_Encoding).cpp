#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int last=0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i] != s[i+1]) {
            cout << s[i] << " " << i+1-last << " ";
            last = i+1;
        }
    }
}