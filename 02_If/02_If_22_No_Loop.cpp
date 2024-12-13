#include<bits/stdc++.h>
using namespace std;
int main(){
    int d,m,y,total=0;
    cin >> d >> m >> y;
    y-=543;
    if(m>1) total+=31;
    if(m>2) total+=28;
    if(m>3) total+=31;
    if(m>4) total+=30;
    if(m>5) total+=31;
    if(m>6) total+=30;
    if(m>7) total+=31;
    if(m>8) total+=31;
    if(m>9) total+=30;
    if(m>10) total+=31;
    if(m>11) total+=30;
    total += d;
    if(m>2 && y%4==0 && y%100 != 0 || y%400 == 0) total++;
    cout << total;
}