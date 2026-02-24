#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        ll n, ans = 0; cin >> n;

        while(n > 0){
            ans += n;
            n /= 2;
        }
        cout << ans << endl;
    }

    return 0;
}