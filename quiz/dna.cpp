#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int maxx=0,maxy=0;
    int startx=0,starty=0;
    cin >> s1 >> s2;
    for(int i=0 ; i<s1.size() ; i++){
        int tmp=0;
        for(int j=0 ; j<s2.size() ; j++){
            if((i+j) < s1.size() && s2[j] == s1[i+j]){
                tmp++;
            }
        }
        if(tmp > maxx){
            maxx = tmp;
            startx = i;
        }
    }
    for(int i=0 ; i<s2.size() ; i++){
        int tmp=0;
        for(int j=0 ; j<s1.size() ; j++){
            if((i+j) < s2.size() && s1[j] == s2[i+j]){
                tmp++;
            }
        }
        if(tmp > maxy){
            maxy = tmp;
            starty = i;
        }
    }
    if(maxx >= maxy){
        cout << s1 << endl;
        for(int i=0 ; i<startx ; i++) cout << "-";
        cout << s2 << endl << maxx;
    }
    if(maxx < maxy){
        for(int i=0 ; i<starty ; i++) cout << "-";
        cout << s1 << endl;
        cout << s2 << endl << maxy;
    }
}