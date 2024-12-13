#include<bits/stdc++.h>
using namespace std;
int main(){
    long double a;
    cin >> a;
    if(a<1000) cout << a;
    else if(a<=9999) cout << round(a/1000*10)/10.0 << "K";
    else if(a<=999999) cout << round(a/1000) << "K";
    else if(a<=9999999) cout << round(a/1000000*10)/10.0 << "M";
    else if(a<=999999999) cout << round(a/1000000) << "M";
    else if(a<=9999999999) cout << round(a/1000000000*10)/10.0 << "B";
    else if(a<=9999999999999) cout << round(a/1000000000) << "B";
}