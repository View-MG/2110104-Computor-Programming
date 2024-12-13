#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n; cin >> n;
    lli d=2;
    if(n<2){
        cout << "No prime factors for numbers less than 2.";
        return 0;
    }
    if(n>1){
        while(d*d <= n){
            if(n%d == 0){
                n /= d;
                cout << d << " ";
            }else d+=1;
        }
        cout << n;
    }
    else return 0;

}