#include<bits/stdc++.h>
using namespace std;
int main() {
    string s,word[100],tmp = "";
    int count=0;
    getline(cin,s);
    for(auto c : s){
        if(c == ' '){
            word[count++] = tmp;
            tmp="";
        }else tmp+=c;
    }
    if(!tmp.empty()) word[count] = tmp;
    int n1=0,n2=0;
    for(int i=0 ; i<word[0].size();i++){
        char tmp = word[0][i];
        if(tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u'){
            n1=i;
            break;
        }
    }
    for(int i=0 ; i<word[count].size();i++){
        char tmp = word[count][i];
        if(tmp == 'a' || tmp == 'e' || tmp == 'i' || tmp == 'o' || tmp == 'u'){
            n2=i;
            break;
        }
    }
    string prefix1 = word[0].substr(0,n1);
    string prefix2 = word[count].substr(0,n2);
    string newWord1 = prefix1+word[count].substr(n2);
    string newWord2 = prefix2+word[0].substr(n1);
    word[0] = newWord1;
    word[count] = newWord2;
    for(auto i : word) cout << i << " ";
}
