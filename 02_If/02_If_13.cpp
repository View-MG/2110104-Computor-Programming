#include<bits/stdc++.h>
using namespace std;
int main() {
    double score,mins{999},maxs{0},sum{0};
    for(int i=0 ; i<4 ; i++){
        cin >> score;
        maxs = score > maxs ? score : maxs;
        mins = score < mins ? score : mins;
        sum += score;
    }
    cout << round(((sum - mins - maxs)/2)*100.0)/100.0;
}