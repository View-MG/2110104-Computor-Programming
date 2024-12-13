#include<bits/stdc++.h>
using namespace std;
int main(){
    string password;
    while (getline(cin,password)){
        bool big = false ,small = false ,num= false,special= false;
        for(int i=0 ; i<password.size() ; i++){
            if(isdigit(password[i])) num = true;
            else if(islower(password[i])) small = true;
            else if(isupper(password[i])) big = true;
            else special = true;
            if(big && small && num && special) break;
        }
        if(big && small && num && password.size()<12 && password.size()>=8) cout << ">> weak" << endl;
        else if(big && small && num && special && password.size()>=12) cout << ">> strong" << endl;
        else if(big && small && num && !special ) cout << ">> weak" << endl;
        else cout << ">> invalid" << endl;
    }
}
