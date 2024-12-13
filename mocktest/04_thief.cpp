#include<bits/stdc++.h>
using namespace std;
int arr[25000];
int main(){
    int n,m;
    int sum=0;
    cin >> n >> m;
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int p=0,q=0;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]+arr[j] == (sum-m)){
                p=i;
                q=j;
            }
        }
    }
    cout << p << " " << arr[p] << endl;
    cout << q << " " << arr[q] << endl;
}