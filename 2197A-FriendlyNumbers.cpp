#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int sd(int n){
    if(n == 0){
        return 0;
    }

    return n % 10 + sd(n/10);
}

int main(){fastio

    int t; cin >> t;

    while(t--){
        int x, ans; cin >> x;

        for(int i = x; i <= x + 1000; i += 10){
            ans = i - sd(i);

            if(ans == x){
                break;
            }
        }

        cout << (ans == x ? 10 : 0) << endl;
    }

    return 0;
}