#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>> q1,q2,q3,q4;
    int x1m=-99999,y1m=-99999,x2m=-99999,y2m=-99999,x3m=-99999,y3m=-99999,x4m=-99999,y4m=-99999; //max
    int x1n=99999,y1n=99999,x2n=99999,y2n=99999,x3n=99999,y3n=99999,x4n=99999,y4n=99999; //less
    int n; cin >> n;
    for(int i{0} ; i<n ; i++){
        int x,y;
        cin >> x >> y;
        if(x>0 && y>0) q1.push_back({x,y});
        else if(x<0 && y>0) q2.push_back({x,y});
        else if(x<0 && y<0) q3.push_back({x,y});
        else if(x>0 && y<0) q4.push_back({x,y});
    }
    for(int i{0} ; i<q1.size() ; i++){
        x1m = max(q1[i].first,x1m);
        y1m = max(q1[i].second,y1m);
        x1n = min(q1[i].first,x1n);
        y1n = min(q1[i].second,y1n);
    }
    for(int i{0} ; i<q2.size() ; i++){
        x2m = max(q2[i].first,x2m);
        y2m = max(q2[i].second,y2m);
        x2n = min(q2[i].first,x2n);
        y2n = min(q2[i].second,y2n);
    }
    for(int i{0} ; i<q3.size() ; i++){
        x3m = max(q3[i].first,x3m);
        y3m = max(q3[i].second,y3m);
        x3n = min(q3[i].first,x3n);
        y3n = min(q3[i].second,y3n);
    }
    for(int i{0} ; i<q4.size() ; i++){
        x4m = max(q4[i].first,x4m);
        y4m = max(q4[i].second,y4m);
        x4n = min(q4[i].first,x4n);
        y4n = min(q4[i].second,y4n);
    }
    if(!(x1m == -99999 && x1n == 99999)){
        cout << "Q1: (" << x1n << ", " << y1n << ") (" << x1m << ", " << y1m << ") ";
        cout << (abs(x1m-x1n)*abs(y1m-y1n)) << endl;
    }
    if(!(x2m == -99999 && x2n == 99999)){
        cout << "Q2: (" << x2n << ", " << y2n << ") (" << x2m << ", " << y2m << ") ";
        cout << (abs(x2m-x2n)*abs(y2m-y2n)) << endl;
    }
    if(!(x3m == -99999 && x3n == 99999)){
        cout << "Q3: (" << x3n << ", " << y3n << ") (" << x3m << ", " << y3m << ") ";
        cout << (abs(x3m-x3n)*abs(y3m-y3n)) << endl;
    }
    if(!(x4m == -99999 && x4n == 99999)){
        cout << "Q4: (" << x4n << ", " << y4n << ") (" << x4m << ", " << y4m << ") ";
        cout << (abs(x4m-x4n)*abs(y4m-y4n)) << endl;
    }
    else if(q1.size()==0 && q2.size()==0 && q3.size()==0 && q4.size()==0) cout << "No point in any quadrant";
}