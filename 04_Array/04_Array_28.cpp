#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    char arr1[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
                    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char arr2[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
                    'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int count[26] = {0};
    getline(cin,n);
    for(int i=0 ; i<n.size() ; i++){
        for(int j=0 ; j<26 ; j++){
            if(n[i] == arr1[j] || n[i] == arr2[j]) {
                count[j]++;
                break;
            }
        }
    }
    for(int i=0 ; i<26 ; i++){
        if(count[i]==0) continue;
        else cout << arr1[i] << " -> "<< count[i] << endl;
    }
}