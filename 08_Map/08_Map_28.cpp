#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    vector<string> music, name, songwant;
    vector<int> pos;

    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        int pos = line.find(',');
        if (pos != string::npos) {
            music.push_back(line.substr(0, pos));
            name.push_back(line.substr(pos + 1));
        }
    }

    string line, tmp;
    int count=0;
    getline(cin, line);
    stringstream ss(line);
    while (getline(ss, tmp, ',')) {
        if(count!=0)tmp.erase(tmp.begin()); 
        if (!tmp.empty()) {
            songwant.push_back(tmp);
        }
        count++;
    }

    for(int i=0 ; i<songwant.size() ; i++) {
        cout << songwant[i] << " -> ";
        pos.clear();
        bool check=false;
        for(int j=0 ; j<music.size() ; j++){
            if(songwant[i] == music[j]){
                pos.push_back(j);
                check = true;
            }
        }
        for(int j=0 ; j<pos.size() ; j++){
            if(j == pos.size()-1){
                cout << name[pos[j]];
            }else cout << name[pos[j]] << ", ";
        }
        if(!check) cout << "Not found";
        cout << endl;
        
    }

    return 0;
}
