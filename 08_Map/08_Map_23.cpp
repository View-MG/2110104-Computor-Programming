#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    map<string,double> exchange;
    for(int i{0} ; i<n ; i++){
        string tmp; double rate;
        cin >> tmp >> rate;
        exchange[tmp] = rate;
    }
    double money;
    cin >> money;
    string currency;
    int first = 1;
    string bcurrency;
    while(cin >> currency){
        if(first--){
            cout << int(money) << " " << currency << endl;
        }
        else if(currency == bcurrency){
            cout << int(money) << " " << currency << endl;
        }
        else{
            money = money*exchange[bcurrency]/exchange[currency];
            cout << int(money) << " " << currency << endl;
        }
        bcurrency = currency;
    }
}

