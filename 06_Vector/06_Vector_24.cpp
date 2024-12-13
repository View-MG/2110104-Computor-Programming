#include<bits/stdc++.h>
using namespace std;
bool sortPrize(const pair<string,pair<double,double>> &a , const pair<string,pair<double,double>> &b){
    if(b.second.second == a.second.second) return a.first < b.first;
    return b.second.second < a.second.second;
}
int main(){
    vector<pair<string,pair<double,double>>> product;
    string name;
    while(cin >> name && name != "END"){
        double prize; cin >> prize;
        product.push_back({name,{prize,0}});
    }
    cin.ignore();
    string sale,n; getline(cin,sale);
    istringstream iss(sale);
    while(iss >> n){
        for(int i{0}; i<product.size() ; i++){
            if(product[i].first == n){
                product[i].second.second += product[i].second.first;
                break;
            }
        }
    }
    sort(product.begin(),product.end(),sortPrize);
    int print = product.size() < 3 ? product.size() : 3;
    bool canSale = false;
    for(int i{0} ; i<print ; i++){
        if(product[i].second.second != 0){
            cout << product[i].first << " " << product[i].second.second << endl;
            canSale = true;
        }
    }
    if(!canSale) cout << "No Sales";
}