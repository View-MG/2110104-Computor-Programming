#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    int arr[3000],count=0;
    for(int i{0}; i< s.size(); i++) {
        if(i == 0 || isupper(s[i]) || isdigit(s[i])) {
            arr[count++] = i;
            if(isdigit(s[i])) {
                while(i + 1 < s.size() && isdigit(s[i + 1])) i++;
            }
        }
        else if(islower(s[i]) && isdigit(s[i-1])) arr[count++] = i;
    }
    arr[count] = s.size();
    
    for(int i{0} ; i <count; i++) {
        if(i==0) cout << (s.substr(arr[i], arr[i+1] - arr[i]));
        else cout << ", " <<(s.substr(arr[i], arr[i+1] - arr[i]));
    }
}
