#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int pancake[n],check[n];
    for(int i=0 ; i<n ; i++){
        cin >> pancake[i];
        check[i] = pancake[i];
    }
    for(int i=0 ; i<n ; i++){
        cout << pancake[i] << " ";
    }
    cout << endl;
    sort(check,check+n);
    bool isSorted=false;
    while(!isSorted){
        int maxs=0,pos=0,end=n-1;
        //find maxs+end
        for(int j=n-1 ; j>=0 ; j--){
            if(pancake[j] != check[j]){
                end = j;
                break;
            }
        }
        for(int i=0 ; i<=end ; i++){
            if(pancake[i] > maxs){
                pos = i;
                maxs = pancake[i];
            }
        }
        if(pos != 0) reverse(pancake,pancake+pos+1);
        else reverse(pancake,pancake+end+1);
        bool checker=true;
        for(int j=0 ; j<n ; j++){
            cout << pancake[j] << " ";
            if(pancake[j] != check[j]){
                checker=false;
            }
        }
        cout << endl;
        if(checker) isSorted=true;
    }
}