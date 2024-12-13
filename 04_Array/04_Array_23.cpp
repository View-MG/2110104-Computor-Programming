#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    char country[n][2];
    int prize[n] = {0};
    for(int i=0 ; i<n ; i++){
        cin >> country[i][0] >> country[i][1] >> prize[i]; 
    }
    cin.ignore();
    string flight;
    getline(cin,flight);
    int ans=0;
    for(int i=11 ; i<flight.size();i+=7){
        if(flight[i] == flight[i-7]) continue;
        else {
            for(int j=0;j<n;j++){
                if(flight[i] == country[j][0]) ans+=prize[j];
            }
        }
    }
    cout << ans;
}
