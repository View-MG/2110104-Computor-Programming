#include<bits/stdc++.h>
using namespace std;
int main(){
    string arr[] = {"A","2","3","4","5","6","7","8","9","10","J","Q" ,"K"};
    int score[] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
    int a,b;
    cin >> a >> b;
    int ascore=0,bscore=0;
    int aa = 0,ba = 0;
    vector<string> acard(a),bcard(b);
    for(int i{0} ; i<a ; i++){
        cin >> acard[i];
        int tmp=0;
        for(int j{0} ; j<13 ; j++){
            if (arr[j] == acard[i]){
                tmp = score[j];
            }
        }
        if(tmp != 1) ascore += tmp;
        else if (tmp==1) aa++;
    }
    for(int i{0} ; i<b ; i++){
        cin >> bcard[i];
        int tmp=0;
        for(int j{0} ; j<13 ; j++){
            if (arr[j] == bcard[i]){
                tmp = score[j];
            }
        }
        if(tmp != 1) bscore += tmp;
        else if (tmp==1) ba++;
    }
    int cheackaa = true;
    while(aa--){
        if(aa+1==1 && cheackaa && ascore+11 <= 21){
           ascore += 11;
           cheackaa = false;
        } 
        else ascore += 1;
    }
    int cheackba = true;
    while(ba--){
        if(ba+1==1 && cheackba && bscore+11 <= 21){
           bscore += 11;
           cheackba = false;
        } 
        else bscore += 1;
    }
    if(ascore > bscore && ascore <= 21 && bscore <=21) cout << "A" << endl;
    else if(ascore <= 21 && bscore <=21 && ascore < bscore) cout << "B" << endl;
    else if(ascore > 21 && bscore <= 21) cout << "B" << endl;
    else if(bscore > 21 && ascore <= 21) cout << "A" << endl;
    else cout << "Draw" << endl;
    cout << ascore << " " << bscore;
}