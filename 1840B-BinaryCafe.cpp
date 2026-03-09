#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'

using namespace std;

int main(){fastio
    int t; cin >> t;

    while(t--){
        ll n, k; cin >> n >> k;
        
        if(k >= 62){
            cout << n + 1 << endl;
            continue;
        }
        
        ll ans = min((1LL << (k)), n + 1);
        cout << ans << endl;
    }

    return 0;
}