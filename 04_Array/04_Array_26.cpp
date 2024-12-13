#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n*n];
    double index_z=0;
    for(int i=0 ; i<n*n ; i++){
        cin >> arr[i];
        if(arr[i]==0) index_z=i;
    }
    index_z = ceil((index_z+1)/4.0);
    int invertion=0;
    for(int i=0 ; i<n*n ; i++){
        for(int j=i+1 ; j<n*n ; j++){
            if(arr[i] > arr[j] && arr[i]!=0 && arr[j]!=0) invertion++;
    }
    }
    if(n%2==1 && invertion%2==0) cout << "YES";
    else if(n%2==0 && invertion%2==1 && (int(index_z)-1)%2==0) cout << "YES";
    else if(n%2==0 && invertion%2==0 && (int(index_z)-1)%2==1) cout << "YES";
    else cout << "NO";
}