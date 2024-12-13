#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a,b,all=0,power;
    int sizem,sizen;
    cin >> a >> b;
    while(true){
        sizem = to_string(a).size();
        sizen = to_string(b).size();
        if(sizem == sizen) {
            all+=(b+1-a)*sizen;
            break;
        }
        else {
            power = pow(10,sizem);
            all += (power-a)*sizem;
            a=power;
        }
    }
    cout << all;
}
