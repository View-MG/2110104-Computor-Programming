#include<bits/stdc++.h>
using namespace std;

struct Party{
    string n; // name
    int u; //user
    int ss;
    double fraction;
};

bool partySort(const Party &a,const Party &b){
    return b.u < a.u;
}
bool partySort2(const Party &a,const Party &b){
    return a.fraction < b.fraction;
}

int main(){
    vector<Party> party;
    string x;
    int y;
    cin >> x;
    while(x!= "END"){
        cin >> y;
        Party addParty = {x,y};
        party.push_back(addParty);
        cin >> x;
    }
    // ------------Calculate Part-----------------
    long long int a=0;
    for(auto i : party){
        a += i.u;
    }

    sort(party.begin(),party.end(),partySort);
    
    int ssall=0;
    for(int i=0 ; i<party.size() ; i++) {
        double num=0;
        num = double(party[i].u)/(double(a)/100);
        party[i].ss = floor(num);
        ssall += party[i].ss;
        party[i].fraction = num-party[i].ss;
    }
    
    vector<Party>::iterator it;
    while(ssall != 100){
        it = max_element(party.begin(), party.end(), partySort2);
        it->ss +=1;
        ssall+=1;
        it->fraction =0;
    }
    for(auto i : party){
        if(i.ss == 0) break;
        else cout << i.n << " " << i.ss << " " << i.u << endl;
    }
}