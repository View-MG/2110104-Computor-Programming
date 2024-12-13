#include<bits/stdc++.h>
using namespace std;

int main() {
    string plate; getline(cin,plate);
    int n; cin >> n;
    int a = plate[0]-'0';
    int b = stoi(plate.substr(4, 3));
    while(n--){
        b++;
        if(b==1000){
            plate[2]++;
            b=0;
        }
        if(plate[2] > 'Z'){
            plate[1]++;
            plate[2] = 'A';
        }
        if(plate[1] > 'Z'){
            plate[0]++;
            plate[1] = 'A';
        }
    }
    cout << plate[0] << plate[1] << plate[2] << "-" << setw(3) << setfill('0') << b;
}
