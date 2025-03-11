#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int coin, best = 0, ones = 0, flippedsum = 0;
    for(int i = 0; i < n; i++){
        cin >> coin;
        if(coin == 1){
            ones++;
            flippedsum = max(0, flippedsum - 1);
        }
        else{
            flippedsum = max(1, flippedsum + 1);
        }
        best = max(best, flippedsum);
    }
    cout << (ones == n ? n - 1 : best + ones) << "\n";
}