#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x1=99999,y1=-99999;
    int y2=99999,x2=-99999;
    cin >> n;
    for(int i=0 ; i<n ; i++){
        int a,b;
        cin >> a >> b;
        if(i%2==0){
            x1 = min(x1,a);
            y1 = max(y1,b);
            x2 = max(x2,a);
            y2 = min(y2,b);
        }
        else if(i%2==1){
            x1 = min(x1,b);
            y1 = max(y1,a);
            x2 = max(x2,b);
            y2 = min(y2,a);
        }
    }
    string s; cin >> s;
    if(s == "Zig-Zag"){
        cout << x1 << " " << y1;
    }
    else if(s == "Zag-Zig"){
        cout << y2 << " " << x2;
    }
}