#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3,tmp; cin >> n1;
    int count=0;
    vector<int> num;
    while(n1--){
        cin >> tmp;
        if(count++ %2==0) num.push_back(tmp);
        else num.insert(num.begin(),tmp);
    }
    cin.ignore();
    string input_n2,tmp = ""; getline(cin,input_n2);
    istringstream iss(input_n2);
    while (iss >> n2) {
        if (count++ % 2 == 0) num.push_back(n2);
        else num.insert(num.begin(),n2);
    }
    while(cin >> n3 && n3!=-1){
        if (count++ % 2 == 0) num.push_back(n3);
        else num.insert(num.begin(),n3);
    }
    bool first{true};
    for(auto n : num){
        if(first){
            cout << "[" << n;
            first=false;
        }
        else cout << ", " << n;
    }
    cout << "]";
}