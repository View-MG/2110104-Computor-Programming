#include <iostream>
using namespace std;
long long T(int n, int k) {  // Schroder Triangle
    if(k>n) return 0;
    if(k==0) return 1;
    return T(n,k-1)+T(n-1,k-1)+T(n-1,k);
}
long long S(int n) {         // Schroder Number
    if(n==0) return 1;
    if(n==1) return 2;
    long long a=0;
    for(int i{1} ; i<=n-2 ; i++){
        a += S(i)*S(n-i-1);
    }
    return 3*S(n-1) + a;
}
long long W(int n) {         // Wedderburn–Etherington Number
    if(n==0) return 0;
    if(n==1) return 1;
    long long b=0;
    if(n>=2 && n%2 == 0){
        for(int i{1} ; i<=(n/2)-1 ; i++){
            b += W(i)*W(n-i);
        }
        return ((W(n/2)*((W(n/2))+1))/2) +b;
    }
    if(n>=3 && n%2 == 1){
        for(int i{1} ; i<=((n+1)/2)-1 ; i++){
            b += W(i)*W(n-i);
        }
        return b;
    }


}
int main() {
    string fn;
    int p1, p2;
    while (cin >> fn >> p1) {
        if (fn == "T") {
            cin >> p2;
            cout << fn << '(' << p1 << ',' << p2 << ") = " << T(p1,p2) << endl;
        } else if (fn == "S") {
            cout << fn << '(' << p1 << ") = " << S(p1) << endl;
        } else if (fn == "W") {
            cout << fn << '(' << p1 << ") = " << W(p1) << endl;
        }
    }
    return 0;
}