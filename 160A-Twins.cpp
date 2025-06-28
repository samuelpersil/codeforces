#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, value, total = 0, mine = 0; cin >> t;
    vector<int> coins;
    for(int i = 0; i < t; i++){
        cin >> value;
        coins.push_back(value);
        total += value;
    }

    sort(coins.begin(), coins.end());

    for(int i = t-1; i >= 0; i--){
        mine += coins[i];
        if(mine > total / 2){
            cout << t - i;
            return 0;
        }
    }

}