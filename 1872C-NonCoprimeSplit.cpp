#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define oo 1000000000

using namespace std;

int min_div(int n){
    for(int i = 2; i <= (int) sqrt(n); i++){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}

int main(){fastio
    int t; cin >> t;

    while(t--){
        int l, r; cin >> l >> r;
        int min_divisor;

        for(int i = l; i <= r; i++){
            min_divisor = min_div(i);
            if(min_divisor != i){
                cout << min_divisor << " " << i - min_divisor << endl;
                break;
            }
            min_divisor = -1;
        }
        if(min_divisor == -1){
            cout << -1 << endl;
        }
    }

    return 0;
}