#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int a,b,m,n,count;
    cin >> count;
    while(count--){
        cin >> a >> m >> b >> n;
        a+='0';
        b+='0';
        string tmp1(m,a),tmp2(n,b);
        lli num = stoll(tmp1+tmp2);
        bool check{false};
        if(num != 2 && num%2==0) check=true;
        else{
            for(int i{3} ; i<sqrt(num) ; i+=2){
                if(num%i == 0){
                    check=true;
                    break;
                }
            }
        }
        !check ? cout << "YES" << endl : cout << "NO" << endl;
    }
    
}