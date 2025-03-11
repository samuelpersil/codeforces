#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int cashesmax = 1, cashesactual = 1;
    int hours, minutes, hours_before, minutes_before;
    for(int i = 0; i < n; i++){
        cin >> hours >> minutes;
        if(i == 0){
            hours_before = hours;
            minutes_before = minutes;
            continue;
        }
        if(hours == hours_before && minutes == minutes_before){
            cashesactual++;
            cashesmax = max(cashesmax, cashesactual);
        }
        else if(cashesactual != 1) cashesactual = 1;
        
        hours_before = hours;
        minutes_before = minutes;
    }
    cout << cashesmax << endl;
}