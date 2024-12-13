#include<bits/stdc++.h>
using namespace std;
int main(){
    int day1[] = {0,31,59,90,120,151,181,212,243,273,304,334};
    int day2[] = {0,31,60,91,121,152,182,213,244,274,305,335};
    int d,m,y,total=0;
    cin >> d >> m >> y;
    if((y-543)%4==0 && (y-543)%100!=0 || (y-543)%400==0){
        total += day2[m-1];
        total += d;
    }else{
        total += day1[m-1];
        total += d;
    }
    cout << total;
}