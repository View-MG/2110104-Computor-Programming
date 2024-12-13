#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll c1,c2,c3,m1,m2,m3;
    cin >> c1 >> m1 >> c2 >> m2 >> c3 >> m3;
    int n=100;
    while(n--){
        if(c2 < m1+m2){
            m2 = c2;
            m1 = m1-c2;
        }else m2 = m1+m2;
        if(c2 < m1+m2){
            m2 = c2;
            m1 = m1-c2;
        }else m2 = m1+m2;
        if(c2 < m1+m2){
            m2 = c2;
            m1 = m1-c2;
        }else m2 = m1+m2;
    }
}