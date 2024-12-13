#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    for(int i=0 ; i<n.size() ; i++){
            if(n[i] == '(') n[i] = '[';
            else if(n[i] == '[') n[i] = '(';
            else if(n[i] == ')') n[i] = ']';
            else if(n[i] == ']') n[i] = ')';
    }
    cout << n;
}
