#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    double lis[n][m],ans[n-2][m-2];
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++)
        cin >> lis[i][j];
    }
    for(int i=1 ; i<n-1 ; i++){
        for(int j=1 ; j<m-1 ; j++){
            ans[i-1][j-1] = (lis[i][j] + lis[i-1][j-1] + lis[i-1][j] + lis[i-1][j+1] + lis[i][j-1] + lis[i][j+1] + lis[i+1][j-1] + lis[i+1][j] + lis[i+1][j+1]) / 9 ;
        }
    }
    for(int i=0 ; i<n-2 ; i++){
        for(int j=0 ; j<m-2 ; j++){
          cout << round(ans[i][j]*100)/100.0 << " ";  
        }
        cout << endl;
    }
}