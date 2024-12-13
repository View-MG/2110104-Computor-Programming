#include<bits/stdc++.h>
using namespace std;
const double PI = 3.1415926535;
const double g = 10;
int main(){
    double u,theta,t;
    cin >> u >> theta >> t;
    double h = (t-(u*sin(theta*PI/180)/g))*(u*sin(theta*PI/180)+(0.5*g*(t-(3*(u*sin(theta*PI/180)/g)))));
    double r = u*cos(theta*PI/180)*t;
    cout << round(h*10)/10 << " " << round(r*10)/10;
}