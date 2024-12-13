#include<bits/stdc++.h>
using namespace std;
int main(){
    double x;
    cin >> x;
    double result = (sqrt(pow(x,2) + pow(cos(x*3.1415926535/180),2)))/(sin(x*3.1415926535/180) + (pow(cos(x*3.1415926535/180),3)/(pow(x,2)+1)));
    cout << fixed << setprecision(1) << result;
}