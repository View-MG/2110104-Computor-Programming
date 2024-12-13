#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin >> n; 
    if(n.size()==10 && n[0]=='0' && (n[1]=='8' || n[1]=='9' || n[1]=='6')) cout << "Mobile number";
    else cout << "Not a mobile number";
}