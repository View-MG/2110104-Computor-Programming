#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2000]={0},n,maxs{0};
    cin >> n;
    for(int i{1} ; i<=n ; i++){
        int start,end;
        cin >> start >> end;
        for(int j{start} ; j<end ; j++){
            arr[j]++;
        }
        maxs = end>maxs ? end : maxs;
    }
    int ans=0;
    for(int i{1} ; i<maxs ; i++){
        ans = arr[i]>ans ? arr[i] : ans;
    }
    cout << ans;
}