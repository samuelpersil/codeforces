#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int x, y, even_odd_pairs = 0, sumx = 0, sumy = 0;
    while(t--){
        cin >> x >> y;
        sumx += x;
        sumy += y;
        if((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0)){
            even_odd_pairs++;
        }
    }
    if(sumx % 2 == 0 && sumy % 2 == 0){
        cout << 0;
    }
    else if(sumx % 2 == 1 && sumy % 2 == 1 && even_odd_pairs >= 1){
        cout << 1;
    }
    else{
        cout << -1;
    }



    return 0;
}