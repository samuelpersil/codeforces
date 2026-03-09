#include <bits/stdc++.h>
#define fastio ios::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define endl '\n'
#define MOD 1000000007

using namespace std;

int main(){fastio
    int n, k; cin >> n >> k;

    //dp[i][j] = number of good sequences of length i that ends in j

    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));
    
    for(int i = 1; i <= n; i++){
        dp[1][i] = 1;
    }

    for(int i = 1; i < k; i++){
        for(int j = 1; j <= n; j++){
            for(int l = j; l <= n; l += j){
                dp[i + 1][l] = (dp[i + 1][l] + dp[i][j]) % MOD;
            }
        }
    }
    
    ll ans = 0;

    for(int i = 1; i <= n; i++){
        ans = (ans + dp[k][i]) % MOD;
    }

    cout << ans << endl;
}