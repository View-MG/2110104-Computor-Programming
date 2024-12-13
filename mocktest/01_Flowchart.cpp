#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    bool check=false;
    if(x<50){
        do{
            do{
                if(y>z){
                    if(y%2!=0){
                        x = x - (y-z);
                        y+=1;
                    }else break;
                }else check=true;
            }while(y>z);
            if(check) break;
            x += pow(y,2) + pow(z,2);
            if(x%10 == 4) break;
            else{
                if(x%3 == 0)y--;
                else z++;
            }
        }while(x/(y+z)<=15);
    }
    else{
        if(x>y){
            if(x%2 == 0){
                x *= 2;
                y = x+4;
                z = (y-x)*3;
            }else{
                if(y<z){
                    x +=y;
                    y = x*3;
                    z +=y;
                }else{
                    x/=2;
                    y*=2;
                    z = x-y;
                }
            }
        }
        else{
            if(z%3 == 2){
                x = y*5;
                y = x/2;
                z = y+7;
            }else{
                if(y>z){
                    x+=z;
                    y-=3;
                    z = x*2;
                }else{
                    x-=1;
                    y+=z;
                    z=y-4;
                }
            }
        }
    }
    cout << x << " " << y << " " << z;
}