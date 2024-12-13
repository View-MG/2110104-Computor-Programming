#include<bits/stdc++.h>
using namespace std;
int main() {
    double a;
    cin >> a;
    char grade{'F'};
    if(a >= 80) grade = 'A';
    else if(a >= 70) grade = 'B';
    else if(a >= 60) grade = 'C';
    else if(a >= 50) grade = 'D';
    cout << grade;
}