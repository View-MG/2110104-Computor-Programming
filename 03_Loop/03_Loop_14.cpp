#include<bits/stdc++.h>
using namespace std;
int main(){
    string ans,inp;
    int count=0;
    getline(cin,ans);
    getline(cin,inp);
    if(ans.size() != inp.size()){
        cout << "Incomplete answer";
        return 0;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i] == inp[i]) count++;
    }
    cout << count;
}