#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    double total=0,maxx=0;
    map<string,pair<double,int>> icecream;
    for(int i{0} ; i<n ; i++){
       string name;
       double prize;
       cin >> name >> prize;
       icecream[name].first = prize;
    }
    cin >> n;
    bool canSale = false;
    for(int i{0} ; i<n ; i++){
       string name;
       int amount;
       cin >> name >> amount;
       auto it = icecream.find(name);
       if(it != icecream.end()){
            icecream[name].second += amount;
            canSale = true;
       }
    }
    for(auto &s : icecream){
        s.second.first = s.second.second*s.second.first;
        if(s.second.first > maxx) maxx = s.second.first;
        total += s.second.first;
    }
    if(!canSale) cout << "No ice cream sales";
    else{
        cout << "Total ice cream sales: " << total << endl;
        cout << "Top sales: ";
        for(auto s : icecream){
            if(s.second.first == maxx) cout << s.first << " ";
        }
    }

}