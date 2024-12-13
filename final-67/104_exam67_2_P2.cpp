#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string s; cin >> s;
    vector<float> m,x,y;
    for(int i{0} ; i<n ; i++){
        float a,b;
        cin >> a >> b;
        x.push_back(a); y.push_back(b);
    }
    float m1=0,m2=0,m3=0,m4=0,m5=0,m6=0;
    float b1=0,b2=0,bf=0;
    for(int i=0 ; i<n ; i++){
        m1 += x[i]*y[i];
        m2 += x[i];
        m3 += y[i];
        m4 += x[i]*x[i];
    }
    m1 *= n;
    m6 = m2*m3;
    m4 *= n;
    m5 += m2;
    m5 = m2*m2;
    float mf = (m1-m6)/(m4-m5);
    b1=m3;
    b2= mf*m2;
    bf = (b1-b2)/n;
    mf = round(mf * 1e3)/1e3;
    bf = round(bf * 1e3)/1e3;
    if(s == "mb"){
        cout << round(mf * 1e3)/1e3 << endl;
        cout << round(bf * 1e3)/1e3 << endl;
    }
    if(s == "func"){
        if(mf==0 && bf==0) cout << "y = 0";
        else if(mf==0) cout << "y = " << bf;
        else if(bf==0){
            if(mf==-1) cout << "y = " << "-x";
            else if(mf==1) cout << "y = " << "x";
        }
        else if(bf>0){
            if(mf==-1)cout << "y = " << "-x" << " + " << abs(bf) ;
            else if(mf==1)cout << "y = " << "x" << " + " << abs(bf) ;
            else cout << "y = " << mf << "x" << " + " << abs(bf) ;
        }
        else if(bf<0){
            if(mf==-1)cout << "y = " << "-x" << " - " << abs(bf) ;
            else if(mf==1)cout << "y = " << "x" << " - " << abs(bf) ;
            else cout << "y = " << mf << "x" << " - " << abs(bf) ;
        }
    }


}