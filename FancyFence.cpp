#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int angle;
    while(n--){
        cin >> angle;
        if(360 % (180 - angle) == 0 && angle > 0 && angle < 180){
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}