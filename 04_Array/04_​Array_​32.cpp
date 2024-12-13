#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ,temp ; cin >> n ;
    int lift[n][3];
    for (int i = 0 ; i < n ; i++){cin >> lift[i][2]>> lift[i][0] >> lift[i][1];}

    int m,s; cin >> m;
    int person[m][2];
    for (int i = 0 ; i < m ; i++){cin >> person[i][0] >> person[i][1];}

    for (int i = 0 ; i < m ; i++){
        int  mn = 1e6, pos;
        for (int j = 0 ; j < n ; j++){

            int Elift = lift[j][1], Slift = lift[j][0], Sperson = person[i][0] , Eperson = person[i][1];
            if ((Elift > Slift  && Eperson > Sperson && Slift <= Sperson) 
                 || (Sperson <= Slift && Elift < Slift && Eperson < Sperson)) {
                  Sperson = Elift ;
            }

            s = abs(Elift - Sperson) + abs(Sperson - Eperson);

            if (s == mn && pos < lift[j][2]) continue;

            mn = min(s,mn);
            
            if (s == mn) pos = lift[j][2];
        }
    cout << ">> " << pos << endl ;
    }
    return 0;
}