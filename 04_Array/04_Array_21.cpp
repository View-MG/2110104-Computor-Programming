#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[2000];
  for(int i{0}; i<n; i++) cin >> arr[i];
  for(int i{0} ; i<n ; i++){
    double x = arr[i];
    for(int j{0} ; j>=0 ; j--){
      x = arr[j] + 1/x;
    }
    cout << setprecision(10) << x << endl;
  }
}
