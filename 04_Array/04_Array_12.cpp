#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    string name[] = {"Robert", "Dick","William", "Bill","James", "Jim","John", "Jack","Margaret", "Peggy","Edward", "Ed"
                    ,"Sarah", "Sally","Andrew", "Andy","Anthony", "Tony","Deborah", "Debbie"};
    while(n--){
        string tmp;
        cin >> tmp;
        auto it = find(name,name+20,tmp);
        if(it == name+20) cout << "Not found" << endl;
        else if((it-name)%2 == 0) cout << *(it+1) << endl;
        else cout << *(it-1) << endl;
    }
}