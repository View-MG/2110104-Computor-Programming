#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=0;
    cin >> n;
    vector<int> arr;
    for (int i = 0 ; i < n ;i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }
    vector<int> subarr,checkarr;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            int size = j-i+1;
            subarr.clear();
            checkarr.clear();
            for(int k=i ; k<=j ; k++){
                subarr.push_back(arr[k]);
            }
            for(int k=1 ; k<=size ; k++){
                checkarr.push_back(k);
            }
            sort(subarr.begin(),subarr.end());

            bool check = true;
            for (int k=0; k<size; k++) {
                if (subarr[k] != checkarr[k]) {
                    check = false;
                    break;
                }
            }
            if(check) count++;
        }
    }
    cout << count;
}