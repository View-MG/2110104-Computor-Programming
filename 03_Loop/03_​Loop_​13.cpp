#include<bits/stdc++.h>
using namespace std;

int main() {
    string word,sentence;
    int ans=0;
    getline(cin, word);
    getline(cin, sentence);
    
    for(int i=0 ; i<sentence.size() ; i++){
        if(sentence[i] <= 47 && sentence[i] != 32 ) sentence[i] =32; 
    }
    sentence = " " + sentence + " ";

    for(int i=1 ; i<sentence.size()-1 ; i++){
        int check=0;
        if(sentence[i-1] == 32 && sentence[i+word.size()] == 32) {
        for(int j=0 ; j<word.size() ; j++){
            if(word[j] == sentence[i+j]) check++;
        }
        if(check == word.size()) ans++;
        }
    }
    cout << ans;
}
