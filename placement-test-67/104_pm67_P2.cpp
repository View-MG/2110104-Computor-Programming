//This code doesn't have an implementation so that don't try this at home
#include<bits/stdc++.h>
using namespace std;
int main(){
    string tmp;
    cin >> tmp;
    int h = stoi(tmp.substr(0,2));
    int m = stoi(tmp.substr(3,2));
    int s = stoi(tmp.substr(6,2));
    char arrh[4][2],arrm[4][2],arrs[4][2];
    int h1=h/10,m1=m/10,s1=s/10;
    int h2=h%10,m2=m%10,s2=s%10;
    //------------------------------- 1
    if(h%2==1) arrh[3][1] = '1';
    if(m%2==1) arrm[3][1] = '1';
    if(s%2==1) arrs[3][1] = '1';
    //----------------------------------------2
    if(h2==2 || h2==3|| h2==6 || h2==7) arrh[2][1] = '1';
    if(m2==2 || m2==3|| m2==6 || m2==7) arrm[2][1] = '1';
    if(s2==2 || s2==3|| s2==6 || s2==7) arrs[2][1] = '1';
    //------------------------------4
    if(h2==4 || h2==5|| h2==6 || h2==7) arrh[1][1] = '1';
    if(m2==4 || m2==5|| m2==6 || m2==7) arrm[1][1] = '1';
    if(s2==4 || s2==5|| s2==6 || s2==7) arrs[1][1] = '1';
    //---------------------------------------------8
    if(h2==8 || h2==9) arrh[0][1] = '1';
    if(m2==8 || m2==9) arrm[0][1] = '1';
    if(s2==8 || s2==9) arrs[0][1] = '1';
    //-------------------------------------------------
    if(h1==1) arrh[3][0] = '1'; else if (h1==2)arrh[2][0] = '1';
    //------------------------------- 1
    if(m1%2==1) arrm[3][0] = '1';
    if(s1%2==1) arrs[3][0] = '1';
    //----------------------------------------2
    if(m1==2 || m1==3) arrm[2][0] = '1';
    if(s1==2 || s1==3) arrs[2][0] = '1';
    //------------------------------4
    if(m1==4 || m1==5|| m1==6 ) arrm[1][0] = '1';
    if(s1==4 || s1==5|| s1==6 ) arrs[1][0] = '1';
    arrh[0][0] = 32;
    arrh[1][0] = 32;
    arrm[0][0] = 32;
    arrs[0][0] = 32;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<2 ; j++){
            if(arrh[i][j] != '1' && arrh[i][j] != ' ') arrh[i][j] = '0';
            if(arrm[i][j] != '1' && arrm[i][j] != ' ') arrm[i][j] = '0'; 
            if(arrs[i][j] != '1' && arrs[i][j] != ' ') arrs[i][j] = '0'; 
        }
    }
    for(int i=0 ; i<4 ; i++){
        cout << arrh[i][0] << arrh[i][1] << arrm[i][0] << arrm[i][1] << arrs[i][0] << arrs[i][1] << endl;
    }
}
