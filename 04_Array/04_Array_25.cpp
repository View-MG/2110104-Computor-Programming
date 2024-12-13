#include<bits/stdc++.h>
using namespace std;
int maxx(int x[],int start,int stop){
    int mx= x[start];
    for(int i=start ; i<=stop ; i++){
        if(x[i] > mx) mx=x[i];
    }
    return mx;
}
int main(){
    int n,total=0;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
    }
    for(int i=1 ; i<n-1 ; i++){
        int mxL = maxx(arr,0,i);
        int mxR = maxx(arr,i,n-1);
        total += min(mxL,mxR) - arr[i];
    }
    cout << total;
}