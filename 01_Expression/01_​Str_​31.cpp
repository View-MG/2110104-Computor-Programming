#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli gcd(lli a , lli b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main() {
    string a,b,c;
    cin >> a >> b >> c;
    string fr1(c.size(), '9'),fr2(b.size(), '0'); // 9 ตามทศนิยมไม่ซ้ำ 0 ตามทศนิยมซ้ำ
    lli down_fraction = stoi(fr1+fr2); //ตัวส่วน
    lli up_fraction = stoi(b+c)-stoi(b); //ตัวเศษ v.ยังมีจำนวนคละ
    lli number = stoi(a); 
    up_fraction = (number*down_fraction) + up_fraction; //เอาตัวเลขใส่เศษส่วน
    lli gcds = gcd(down_fraction,up_fraction);
    cout << up_fraction/gcds << " / "<< down_fraction/gcds << endl;
}