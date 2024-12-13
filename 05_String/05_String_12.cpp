#include<bits/stdc++.h>
using namespace std;
string AddNumber(string a1,string a2){
    string plusnum;
    int maxLen = max(a1.size(), a2.size());
    
    if (a1.size() < maxLen) a1.insert(a1.begin(), maxLen-a1.size(), '0');
    if (a2.size() < maxLen) a2.insert(a2.begin(), maxLen-a2.size(), '0');
    
    int frac = 0;
    for(int i=maxLen-1 ; i>=0 ; i--){
        int num1 = a1[i] - '0';
        int num2 = a2[i] - '0';
        int ans = num1 + num2 + frac;
        plusnum = to_string(ans%10) + plusnum;
        frac = ans/10;
    }
    if(frac != 0) plusnum = to_string(frac) + plusnum;
    return plusnum;
}
int main(){
    string s1,s2 = " ";
    while (getline(cin,s1) && s1 != "END"){
        s2 = AddNumber(s1,s2);
    }
    cout << s2;
}