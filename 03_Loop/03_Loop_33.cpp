#include<bits/stdc++.h>
using namespace std;
int main(){
    int zagzig_min=9999,zagzig_max=-9999,zigzag_min=9999,zigzag_max=-9999;
    int x,y,count=1;
    cin >> x >> y;
    while(x != -998 || x != -999){
        if(count % 2 == 1){
            zigzag_min = min(zigzag_min,x);
            zigzag_max = max(zigzag_max,y);
            zagzig_min = min(zagzig_min,y);
            zagzig_max = max(zagzig_max,x);
        }
        else if(count % 2 == 0){
            zigzag_min = min(zigzag_min,y);
            zigzag_max = max(zigzag_max,x);
            zagzig_min = min(zagzig_min,x);
            zagzig_max = max(zagzig_max,y);
        }
        count++;
        cin >> x ;
        if(x == -998 || x == -999) break;
        cin >> y;
    }
    if(x == -998) cout << zigzag_min << " " << zigzag_max;
    else if(x == -999) cout << zagzig_min << " " << zagzig_max; 
}