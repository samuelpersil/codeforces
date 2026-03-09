#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MOD 1000000007

using namespace std;


int main(){fastio
    int t, k; cin >> t >> k;
    vector<int> dp(100001), ps(100001);

    dp[0] = ps[0] = 1;

    for(int i = 1; i <= 100000; i++){
        dp[i] = dp[i - 1];
        if(i - k >= 0) dp[i] = (dp[i] + dp[i - k]) % MOD;
    }
    
    for(int i = 1; i <= 100000; i++){
        ps[i] = (ps[i - 1] + dp[i]) % MOD;
    }

    while(t--){
        int a, b; cin >> a >> b;

        int ans = 0;

        ans += ps[b];
        if(a - 1 >= 0) ans = (ans - ps[a - 1] + MOD) % MOD;

        cout << ans << endl;
    }

    return 0;
}