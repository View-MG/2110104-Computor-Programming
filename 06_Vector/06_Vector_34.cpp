#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first,timeu,count=0,call=0,calltime=0,now;
    vector<int> ticket,times,qtime;
    string inp;
    for(int i=0 ; i<n ; i++){
        cin >> inp;
        if(inp == "reset"){
            cin >> first;
            ticket.push_back(first);
        }
        else if(inp == "new"){
            cin >> timeu;
            times.push_back(timeu);
            cout << ">> ticket " << ticket[count] << endl;
            ticket.push_back(ticket[count]+1);
            count++;
        }
        else if(inp == "next"){
            cout << ">> call " << ticket[call] << endl;
            calltime=call;
            call++;
        }
        else if(inp == "order"){
            cin >> now;
            cout << ">> qtime " << ticket[calltime] << " " << abs(times[calltime]-now) << endl;
            qtime.push_back(abs(times[calltime]-now));
        }
        else if(inp == "avg_qtime"){
            double ans=0;
            for(int i=0 ; i<qtime.size();i++){
                ans += qtime[i];
            }
            double avg=ans/qtime.size();
            cout << ">> avg_qtime " << round(avg*100.0)/100.0 << endl;
        }
    }
}