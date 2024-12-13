#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> bead;
    for(int i{0} ; i<n ; i++){
        int tmp;
        cin >> tmp;
        bead.push_back(tmp);
    }
    bead.push_back(bead[0]);
    int ans1=0;
    //not ignore
    for(int i{0} ; i<n ; i++){
        int idx=i;
        int tmp1=0;
        for(int j{0} ; j<n ; j++){
            int next = idx+1;
            if(next >= n) next=0;
            if(bead[idx]<=bead[next]){
                tmp1 += bead[idx];
            }
            else if(bead[idx]>bead[next]){
                tmp1 += bead[idx];
                break;
            }
            idx=next;
            next++;
        }
        ans1 = max(ans1,tmp1);
    }
    //not ignore
    int ans2=0;
    vector<int> bead1;
    for(int k{0} ; k<n ; k++){
        bead1.clear();
        for(int l{0} ; l<n ; l++){
            if(k!=l) bead1.push_back(bead[l]);
        }
        for(int i{0} ; i<n-1 ; i++){
            int idx=i;
            int tmp1=0;
            for(int j{0} ; j<n-1 ; j++){
                int next = idx+1;
                if(next >= n-1) next=0;
                if(bead1[idx]<=bead1[next]){
                    tmp1 += bead1[idx];
                }
                else if(bead1[idx]>bead1[next]){
                    tmp1 += bead1[idx];
                    break;
                }
                idx=next;
                next++;
            }
            ans2 = max(ans2,tmp1);
        }
    }
    cout << max(ans1,ans2);
}
