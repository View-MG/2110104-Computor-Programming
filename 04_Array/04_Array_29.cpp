#include<bits/stdc++.h>
using namespace std;

int overlap(int r1[],int r2[]){
    int w = min(r1[2],r2[2])-max(r1[0],r2[0]);
    int h = min(r1[3],r2[3])-max(r1[1],r2[1]);
    if(w<=0 || h<=0) return 0;
    else return w*h;
}
int main(){
    int n;
    cin >> n;
    int rac[n][4];
    for(int i=0 ; i<n ; i++){
        cin >> rac[i][0] >> rac[i][1]>> rac[i][2]>> rac[i][3];
    }
    int max_ov=0;
    for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int ov=overlap(rac[i],rac[j]);
            if(ov>max_ov) max_ov=ov;
        }
    }
    if(max_ov==0) cout << "No overlaps";
    else {
        cout << "Max overlapping area = " << max_ov << endl;
        for(int i=0 ; i<n ; i++){
        for(int j=i+1 ; j<n ; j++){
            int ov=overlap(rac[i],rac[j]);
            if(ov==max_ov) cout << "rectangles " << i << " and " << j<<endl;
        }
    }
    }
}