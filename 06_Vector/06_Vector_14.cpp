#include<bits/stdc++.h>
using namespace std;
int main(){
    string s; getline(cin,s);
    int n;
    vector<int> num;
    istringstream iss(s);
    while(iss >> n) num.push_back(n);
    sort(num.begin(),num.end());
    num.erase(unique(num.begin(), num.end()), num.end());
    cout << num.size() << endl;
    int end = num.size()<10 ? num.size() : 10;
    for(int i{0} ; i<end ; i++){
        cout << num[i] << " ";
    }
}