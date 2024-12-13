#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    double x;
    cin >> a;
    double L=0,U=a;
    x=(L+U)/2;
    while(abs(a-pow(10,x)) > (1e-10)*max(a,pow(10,x))){
        if (pow(10,x)>a) U=x;
        else L=x;
        x=(L+U)/2;
    }
    cout << x;
}
