#include<bits/stdc++.h>
using namespace std;
int main(){
    double x,count=0,sum=0;
    cin >> x;
    while(x != -1){
        sum += x;
        count++;
        cin >> x;
    }
    if(count==0){
        cout << "No Data";
    } else cout << round(sum/count*100)/100;
}