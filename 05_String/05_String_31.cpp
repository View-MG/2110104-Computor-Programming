#include<bits/stdc++.h>
using namespace std;
string arr[] = {"UUUU","UUUL","UULU","UULL","ULUU","ULUL","ULLU","ULLL","LUUU","LUUL","LULU","LULL"};
string arr2[] = {"0","1","2","3","4","5","6","7","8","9","-",","};
int main() {
    string fake{}; getline(cin,fake);
    char key;
    while(cin >> key){
        string line;
        if(key == 'D'){
            string ul="";
            getline(cin,line);
            for(auto c : line){
                if(isupper(c)) ul+="U";
                else if(islower(c)) ul+="L";
            }
            for(int i{0} ; i<ul.size() ; i+=4){
                auto it = find(arr,arr+12,ul.substr(i,4));
                cout << arr2[it - arr];
            }
            cout << endl;
        }
        if(key == 'E'){
            getline(cin,line);
            string num{};
            for(auto a : line){
                if(isdigit(a)) num += arr[a-'0'];
                else if(a == '-') num += arr[10];
                else if(a == ',') num += arr[11];
            }
            int count=0;
            for(int i{0} ; i<num.size() ; i++){
                count %= fake.size();
                while(!isalpha(fake[count])){
                    cout << fake[count];
                    count++;
                    count %= fake.size();
                }
                count %= fake.size();
                if(num[i]=='U') cout << char(toupper(fake[count++]));
                else if(num[i]=='L') cout << char(tolower(fake[count++]));
            }
            cout << endl;
        }
    }
    return 0;
}

