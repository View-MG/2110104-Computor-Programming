#include<bits/stdc++.h>
using namespace std;
double mi,sd,a,b,x1;
double areas(double x2){
    double tmp = (-1*pow(x2-mi,2))/(2*pow(sd,2));
    return (1/(sd*sqrt(2*M_PI)))*pow(M_E,tmp);
}

int main(){
    cin >> mi >> sd >> a >> b >> x1;
    int m = (b-a)/x1;
    double ans=0;
    for(int i=0 ; i<=m ; i++) ans += areas(a+i*x1)*x1;
    cout << round(ans*1e4)/1e4 << endl;

}