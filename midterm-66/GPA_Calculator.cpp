#include<bits/stdc++.h>
using namespace std;
map<string,double> grade = {{"A",4.0},{"B+",3.5},{"B",3.0},{"C+",2.5},{"C",2.0},{"D+",1.5},{"D",1.0},{"F",0.0}};
int main(){
    int n,unit,total_unit=0;
    double total=0;
    cin >> n;
    string s;
    for(int i=0 ; i<n ; i++){
        cin >> s >> unit;
        total += (grade[s]*unit);
        total_unit += unit;
    }
    total /= total_unit;
    cout << round(total*100)/100;
}