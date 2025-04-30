#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int magnet, previousmagnet, groups = 0;
    while(n--){
        cin >> magnet;
        if(groups == 0){
            previousmagnet = magnet;
            groups++;
            continue;
        }
        if(magnet != previousmagnet){
            groups++;
        }
        previousmagnet = magnet;
    }
    cout << groups << endl;
}