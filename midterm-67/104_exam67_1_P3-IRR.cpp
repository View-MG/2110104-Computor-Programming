#include<bits/stdc++.h>
using namespace std;
vector<double> c;
int m;
double sumAll(double irr){
    double total=0;
    for(int i{0} ; i<=m ; i++){
        total += (c[i]/pow(1+irr,i));
    }
    return total;
}
double maxx(double a,double b){
    if (a>=b) return a;
    else return b;
}
int main(){
    cin >> m;
    for(int i{0} ; i<=m ; i++){
        double tmp;
        cin >> tmp;
        c.push_back(tmp);
    }
    double l=double(-1),u=double(1);
    double irr=(l+u)/2;
    while(abs(sumAll(irr)-0) > (1e-8)){
        if(sumAll(irr)>0) l=irr;
        else u=irr;
        irr=(l+u)/2;
    }
    cout << setprecision(8) << irr << endl;
}