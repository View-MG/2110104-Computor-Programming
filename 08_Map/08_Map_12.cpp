#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    map<string,string> name,nickname;
    cin >> n;
    while(n--){
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        string n = s1+" "+s2;
        name[n] = s3; name[s3] = n;
    }
    cin >> n;
    cin.ignore();
    while(n--){
        string s1;
        getline(cin,s1);
        if(name.find(s1) != name.end()) cout << s1 << " --> " << name[s1] << endl;
        else cout << s1 << " --> Not found" << endl;
    }

}
