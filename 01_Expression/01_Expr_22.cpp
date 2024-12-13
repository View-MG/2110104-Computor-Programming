#include<bits/stdc++.h>
using namespace std;
int main(){
    int xe,ye,re,rp,xm,ym;
    cin>>xe>>ye>>re>>rp>>xm>>ym;
    double a,b;
    b = sqrt(pow(xm-xe,2) + pow(ym-ye,2));
    a = b-re+rp;
    double x,y,n,m;
    n=a; 
    m=b-a;
    x = (n*xe + m*xm) / (m+n);
    y = (n*ye + m*ym) / (m+n);
    cout<<round(x)<<" "<<round(y);
}
