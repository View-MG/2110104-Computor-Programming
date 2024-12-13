#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<char>> arr = { {'a','b','c'},
                                 {'d','e','f'},
                                 {'g','h','i'},
                                 {'j','k','l'},
                                 {'m','n','o'},
                                 {'p','q','r','s'},
                                 {'t','u','v'},
                                 {'w','x','y','z'} };
    vector<string> change;
    string choice,line;
    while(cin >> choice){
        cin.ignore();
        getline(cin, line);
        change.clear();
        if (choice == "T2K") {
            cout << ">> ";
            for (auto c : line) {
                if(c == ' ') {
                    cout << "0 ";
                    continue;
                }
                else {
                    if(isupper(c)) c=tolower(c);
                    for (int i = 0; i < arr.size(); i++) {
                        for (int j = 0; j < arr[i].size(); j++) {
                            if (c == arr[i][j]) {
                                for (int k = 0; k <= j; k++) {
                                    cout << (i + 2);
                                }
                                cout << " ";
                            }
                        }
                    }
                }
            }
            cout << endl;
        } 
        else if (choice == "K2T") {
            cout << ">> ";
            stringstream ss(line);
            string tmp;
            while (ss >> tmp) {
                int number = tmp[0] - '0';
                int count = tmp.length(); 
                if (number >= 2 && number <= 9 && count <= arr[number - 2].size()) {
                    cout << arr[number - 2][count - 1];
                }
                else if(number == 0) cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

