#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<bool>> invalid(n, vector<bool>(n, false));
    char arr[n][n];
    int qpos[n*n][2],count=0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[i][j] == 'Q'){    //find q
                for(int k=0 ; k<n ; k++){
                    for(int l=0 ; l<n ; l++){
                        if(l==j && k!=i){ //find q in row
                            if(arr[k][l]== 'Q') {
                                invalid[i][j] = true;
                            }
                        }else if(k==i && l!=j){ //find q in column
                            if(arr[k][l]== 'Q'){
                                invalid[i][j] = true;
                            }
                        }else if(k==l && k!=0 && l!=0){ //find q in oblique
                            if(i+k < n && j+l < n && arr[i+ k][j+l] == 'Q') invalid[i][j] = true;
                            if(i+k < n && j-l >= 0 && arr[i+ k][j-l] == 'Q') invalid[i][j] = true;
                            if(i-k >= 0 && j+l < n && arr[i- k][j+l] == 'Q') invalid[i][j] = true;
                            if(i-k >= 0 && j-l >= 0 && arr[i- k][j-l] == 'Q') invalid[i][j] = true;
                        }
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (invalid[i][j]) arr[i][j] = '-';
        }
    }
    
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}
