#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define int long long
#define endl '\n'

using namespace std;

int32_t main(){fastio
    int b; cin >> b;

    int ans = 0;

    for(int i = 1; i * i <= b; i++){
        if(b % i == 0){
            ans++;
            if(b / i != i) ans++;
        }
    }

    cout << ans << endl;

}