#include<bits/stdc++.h>
using namespace std;
int main(){
    float p;
    cin >> p;
    float k=1,t=1;
    while((1-t)<p){
        k++;
        t=(t*(365-(k-1)))/365;
    }
    cout << k;
}